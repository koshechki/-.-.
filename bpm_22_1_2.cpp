#include <iostream>
#include <cmath>
int main()
{
    int kolvo_vseh(0);
    int kolvo_horoshih(0);
    while (1 == 1) {
        float x, y;
        std::cin >> x >> y;
        kolvo_vseh += 1;
        if (((x * x + y * y) <= 4) and (y >= 2 - x * x)) {
            kolvo_horoshih += 1;
        }
    }
    float result1(kolvo_horoshih);
    float result2(kolvo_vseh);
    std::cout << result1 / result2;
}
