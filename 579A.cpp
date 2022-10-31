#include <iostream>
int main()
{
    int x;
    std::cin >> x;
    int result(0);
    while (x > 0) {
        if (x % 2 == 1) {
            result += 1;
        }
        x = x >> 1;
    }
    std::cout << result;
}
