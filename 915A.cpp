#include <iostream>
#include <vector>
int main()
{
    int n(0);
    int k(0);
    std::cin >> n;
    std::cin >> k;
    std::vector <int> a(n);
    for (int i(0); i < n; i++) {
        std::cin >> a[i];
    }
    int result(10000000000000);
    for (int i(0); i < n; i++) {
        if ((k % a[i] == 0) && (k / a[i] < result)) {
            result = k / a[i];
        }
    }
    std::cout << result;
    return 0;
}