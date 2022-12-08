#include <iostream>
int main()
{
    int n(0);
    int k(0);
    int y(-1000000000);
    std::cin >> n >> k;
    for (int i(1); i <= n; ++i) {
        int f(0);
        int t(0);
        std::cin >> f >> t;
        if (t > k) {
            if (y < (f - t + k)) {
                y = f - t + k;
            }
        }
        else {
            if (y < f) {
                y = f;
            }
        }
    }
    std::cout << y;
}

