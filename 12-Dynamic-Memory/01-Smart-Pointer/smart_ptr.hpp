
template <typename T>
class smart_ptr
{
public:
    smart_ptr(T *ptr = nullptr) : ptr(ptr) {}
    ~smart_ptr(){delete ptr;}

    T &
    operator*() const
    {
        return *ptr;
    }
    T *operator->() const { return ptr; }
    smart_ptr(const smart_ptr &) = delete;
    smart_ptr &operator=(const smart_ptr) = delete;

private:
    T *ptr;
};
