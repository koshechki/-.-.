#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    int a1, b1, c1, d1;
    std::cin >> a1 >> b1 >> c1 >> d1;
    int summ1(a1 + b1 + c1 + d1);
    int result(0);
    for (int i(0); i < (n - 1); i++) {
        int a, b, c, d;
        std:: cin >> a >> b >> c >> d;
        int summ(a + b + c + d);
        if (summ > summ1) {
            result += 1;
        }
    }
    std::cout << result + 1;
}
