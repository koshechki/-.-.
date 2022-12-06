#include <iostream>
using namespace std;
int main()
{
    int x(0);
    cin >> x;
    int n(x/5);
    if (x%5 != 0) {
        n+=1;
    }
    cout << n;
}
