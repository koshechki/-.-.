#include <iostream>
#include <string>
int main()
{
    std::string slovo;
    int result(0);
    int i(0);
    while (std::cin) {
        std::cin >> slovo[i];
        i++;
    }
    for (int j(0); j < i - 1; j++) {
        if ((slovo[j] != 'a') && (slovo[j] != 'o') && (slovo[j] != 'u') && (slovo[j] != 'i') && (slovo[j] != 'e') && (slovo[j] != 'n')) {
            if ((slovo[j + 1] != 'a') && (slovo[j + 1] != 'o') && (slovo[j + 1] != 'u') && (slovo[j + 1] != 'i') && (slovo[j + 1] != 'e') && (slovo[j + 1] != 'n')) {
                result = 1;
                break;
            }
        }
    }
    if (result == 1){
        std::cout << "NO";
    }
    else {
        std::cout << "YES";
    }
}
