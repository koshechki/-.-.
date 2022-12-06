#include <iostream>
using namespace std;
int main()
{
    int y(0);
    cin >> y;
    for (y+=1;y<=9999;y++){
        int n1(y%10);
        int n2(y/10%10);
        int n3(y/100%10);
        int n4(y/1000);
        if ((n1 != n2) && (n1 != n3) && (n1 != n4) && (n2 != n3) && (n2 != n4) && (n3 != n4)) {
            cout << y;
            break;
        }
    }
}
