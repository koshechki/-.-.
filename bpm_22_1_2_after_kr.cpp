#include <iostream>
#include <cmath>
int main()
{
    int kolvo_vseh(0);
    int kolvo_horoshih(0);
    while (std::cin) {
        float x, y;
        std::cin >> x >> y;
        kolvo_vseh += 1;
        if (((x * x + y * y) <= 4) && (0 >= 2 - x * x - y)) {
            kolvo_horoshih += 1;
        }
    }
    float result1(kolvo_horoshih);
    float result2(kolvo_vseh);
    std::cout << result1 / result2;
}
