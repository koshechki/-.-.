#include <iostream>
#include <cmath>
int main() {
    float a = 0.1;
    float b = 1;
    double dx = 0.05;
    double eps = 0.0001;
    std::cout << " x " << " Summa " << "\n";
    for (float x(a); x <= b; x += dx) {
        int i = 0;
        float tek = 1.0;
        float Summa = 0.0;
        while (std::abs(tek) >= eps) {
            tek = std::pow(-1, i + 1) * std::pow(x, 2 * i + 1) / (4 * i * i - 1);
            Summa += tek;
            i++;
        }
        std::cout << " " << x << "  " << Summa << "\n";
    }
    return 0;
}
