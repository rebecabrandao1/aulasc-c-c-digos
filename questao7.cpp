//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
#include<iostream>
using namespace std;
int main(){
    char sexo;
    cout << "digite seu sexo M - MASCULINO F- FEMINO\n";
    cin >> sexo;
    if(sexo == 'M'){
        cout << "Masculino";
    }
    else if (sexo == 'F'){
        cout<< "Feminibo";
    }

}