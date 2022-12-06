#include <iostream>

int main()
{
    int n(0);
    for (int i(1); i <= 5; ++i) {
        int k(0);
        std::cin >> k;
        if (k == 1) {
            n = abs(i - 3) + 2;
        }
    }
    for (int i(1); i <= 5; ++i) {
        int k(0);
        std::cin >> k;
        if (k == 1) {
            n = abs(i - 3) + 1;
        }
    }
    for (int i(1); i <= 5; ++i) {
        int k(0);
        std::cin >> k;
        if (k == 1) {
            n = abs(i - 3);
        }
    }
    for (int i(1); i <= 5; ++i) {
        int k(0);
        std::cin >> k;
        if (k == 1) {
            n = abs(i - 3) + 1;
        }
    }
    for (int i(1); i <= 5; ++i) {
        int k(0);
        std::cin >> k;
        if (k == 1) {
            n = abs(i - 3) + 2;
        }
    }
    std::cout << n;
}
