#include <iostream>
#include <mutex>
#include <set>
#include <thread>
using namespace std;
class Account
{
public:
    Account(std::string name, double money) : mName(name), mMoney(money){};

public:
    void changeMoney(double amount)
    {
        std::unique_lock lock(mMoneyLock);

        mConditionVar.wait(lock, [this, amount]
                           { return mMoney + amount > 0; });
        mMoney += amount;
        mConditionVar.notify_all();
    }
    std::string getName()
    {
        return mName;
    }
    double getMoney()
    {
        return mMoney;
    }
    std::mutex *getLock()
    {
        return &mMoneyLock;
    }

private:
    std::string mName;
    double mMoney;
    std::mutex mMoneyLock;
    std::condition_variable mConditionVar;
};

class Bank
{
public:
    void addAccount(Account *account)
    {
        mAccounts.insert(account);
    }

    void transferMoney(Account *accountA, Account *accountB, double amount)
    {
        accountA->changeMoney(-amount);
        accountB->changeMoney(amount);
    }

    double totalMoney() const
    {
        double sum = 0;
        for (auto a : mAccounts)
        {
            sum += a->getMoney();
        }
        return sum;
    }

private:
    std::set<Account *> mAccounts;
};

std::mutex sCountLock;

void randomTransfer(Bank *bank, Account *accountA, Account *accountB)
{
    while (true)
    {
        double randomMoney = ((double)rand() / RAND_MAX) * 100;
        {
            sCountLock.lock();
            std::cout << "Transfer " << randomMoney << " from " << accountA->getName()
                      << " to " << accountB->getName()
                      << ", Bank totalMoney: " << bank->totalMoney() << std::endl;
            sCountLock.unlock();
        }
    }
}

int main()
{
    Account a("Paul", 100);
    Account b("Moira", 100);

    Bank aBank;
    aBank.addAccount(&a);
    aBank.addAccount(&b);

    std::thread t1(randomTransfer, &aBank, &a, &b);
    std::thread t2(randomTransfer, &aBank, &b, &a);

    t1.join();
    t2.join();

    return 0;
}