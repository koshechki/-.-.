#include <iostream>
int main()
{
    int t;
    std::cin >> t;
    for (int i(0); i < t; i++) {
        int n, m;
        std::cin >> n >> m;
        for (int j(1); j <= n; j++) {
            for (int k(1); k <= m; k++) {
                std::cout << ((j % 4 <= 1) == (k % 4 <= 1)) << " ";
            }
            std::cout << std::endl;
        }
    }
}