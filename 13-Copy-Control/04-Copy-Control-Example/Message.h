#include <string>
#include <set>

class Folder;

class Message
{
    friend class Folder;

public:
    explicit Message(const std::string &str = "") : contents(str) {}
    Message(const Message &);
    Message &operator=(const Message &);
    void save(Message &);
    void remove(Message &);

private:
    std::string contents;
    std::set<Folder *> folders;
    void add_to_folder(const Message &);
    void remove_from_folder();
};
