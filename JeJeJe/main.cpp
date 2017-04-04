#include <iostream>

using namespace std;

int main()
{

    int c;
    cout <<"Ingrese el valor para el indice del array: ";
    cin >> c;
    int arar[c], aux = 0;
    for (int i =0;i < c; i++){
        cout <<"Ingrese el valor para el array: ";
        cin >> arar[i];
    };/*
    for (int i = 0; i < (c/2) ;i++){
        aux = arar[i];
        arar[i] = arar[c-1-i];
        arar[c-1-i] = aux;
    };
    for (int i = 0; i < c; i++){
        cout << arar[i] << endl;
    }

    for (int i=0 ;i < c; i++){
        aux += arar[i];
    };

    cout << aux << endl;*/
    int a =arar[0];
    for (int i = 1; i < c; i++){
        if (a < arar[i])
            a = arar[i];

    }
    cout << a << endl;

    /*
    aux = arar[0];
    arar[0] = arar[3];
    arar[3] = aux;
    aux = arar[1];
    arar[1] = arar[2];
    arar[2] = aux;
    cout << arar [0] <<endl;
    cout << arar [1] <<endl;
    cout << arar [2] <<endl;
    cout << arar [3] <<endl;
    */


}
}
