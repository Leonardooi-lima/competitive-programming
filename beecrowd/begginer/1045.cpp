#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <double> numeros(3);

    for(int i = 0; i < 3; i++)
    cin >> numeros[i];


    sort(numeros.begin(), numeros.end(), [](double a, double b){
        return a > b;
    });

    double A,B,C;

    A = numeros[0];
    B = numeros[1];
    C = numeros[2];

    


    if(A >= B+C){
    cout << "NAO FORMA TRIANGULO" << endl;
    return 0;
    }

    else{
        if(A*A == ((B*B)+(C*C)))
        cout << "TRIANGULO RETANGULO" << endl;

        if(A*A > ((B*B)+(C*C)))
        cout << "TRIANGULO OBTUSANGULO" << endl;

        if(A*A < ((B*B)+(C*C)))
        cout << "TRIANGULO ACUTANGULO" << endl;

        if(A == B && A == C)
        cout << "TRIANGULO EQUILATERO" << endl;

        else {
            if(A == B || A == C || B == C)
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    


}