//library for finding length of vector z

#include <iostream>
#include <iosfwd>
#include <cmath>

struct Rdec2D1 {
    double r = 0.0;
    double ph = 0.0;
};

struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

std::ostream& operator << (std::ostream& ostrm,const Rdec2D1& z);
std::ostream& operator << (std::ostream& ostrm,const Rdec2D& z);
Rdec2D1 operator-= (Rdec2D1& lhs, const Rdec2D1& rhs);
Rdec2D operator- (Rdec2D1& lhs, const Rdec2D1& rhs);

int main()
{
    Rdec2D1 z = {4, 3};
    Rdec2D1 z0 = {0, 0};
    std::cout << "z = (" << z.r << ", " << z.ph << ")" << "\n";
    std::cout << "otvet = " << sqrt((z - z0).x) << "\n";
}

std::ostream& operator << (std::ostream& ostrm,const Rdec2D1& z) {
    return ostrm << "(" << z.r << "," << z.ph << ")";
}

std::ostream& operator << (std::ostream& ostrm,const Rdec2D& z) {
    return ostrm << "(" << z.x << "," << z.y << ")";
}

Rdec2D1 operator-= (Rdec2D1& lhs,const Rdec2D1& rhs) {
    lhs.r = lhs.r * lhs.r;
    lhs.ph = lhs.ph * lhs.ph;
    return lhs;
}

Rdec2D operator- (Rdec2D1& lhs, const Rdec2D1& rhs) {
    Rdec2D1 res = lhs;
    res -= rhs;
    Rdec2D res1;
    res1.x = res.r + res.ph;
    return res1;
}
