#include <iostream>
#include <locale>
using namespace std;

int main() {
    locale brasilLocale("pt_BR.UTF-8");
    cout.imbue(brasilLocale);
    string frase = "Olá, como você está?";
    cout << frase <<endl;

    return 0;
}