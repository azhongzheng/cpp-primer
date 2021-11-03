struct NoCopy
{
    NoCopy() = default;
    NoCopy(const NoCopy &) = delete;
    NoCopy &operator=(const NoCopy &) = delete;
    ~NoCopy() = default;
};

int main(int argc, char const *argv[])
{
    NoCopy nocopy;
    // auto p1 = nocopy;
    // auto p2(nocopy);
    return 0;
}
