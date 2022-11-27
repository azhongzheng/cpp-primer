template <typename T> typename T::value_type top(const T &c) {
    if (!c.empty()) {
        return c.back();
    } else {
        return typename T::value_type();
    }
}

template <typename T = int> class Numbers {
  public:
    Numbers(T v = 0) : val(v) {}

  private:
    T val;
};