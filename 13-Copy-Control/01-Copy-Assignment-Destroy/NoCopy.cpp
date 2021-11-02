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
    // auto nocopy2 = nocopy;
    // auto p3(nocopy);
    return 0;
}
