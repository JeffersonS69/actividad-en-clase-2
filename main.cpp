#include <iostream>
using namespace std;
//1.Diseñe la función que calcule el cubo de un número
// 5x5x5=125
int cubo (int num)
{
    return (num*num*num);
}

int main() {
    cout <<endl<< "El cubo de 5 es " <<cubo(5)<< endl;
    cout <<endl<< "El cubo de 6 es " <<cubo(6)<< endl;
    cout <<endl<< "El cubo de 7 es " <<cubo(7)<< endl;
    int num;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    cout<<"El cubo de "<<num<<" es "<<cubo(num);
    return 0;   
}
