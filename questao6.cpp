//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float raio = 0.0;
    float area = 0.0;
    float pi = 3.14;
    cin >> raio;
    area = pi*pow(raio,2);
    cout << "a area eh:" << area;
}