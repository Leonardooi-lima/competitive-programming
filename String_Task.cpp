#include <bits/stdc++.h>
using namespace std;


int main(){
    string palavra;
    vector <char> letras(201);
    int x = 0;


    cin >> palavra;

    for(int i = 0; i < palavra.size(); i++){
        if(toupper(palavra[i]) != 'A' && toupper(palavra[i]) != 'O' && toupper(palavra[i]) != 'Y' && toupper(palavra[i]) != 'E' && toupper(palavra[i]) != 'U' && toupper(palavra[i]) != 'I'){
            letras[x] = palavra[i];
            x++;
        }

    }
    letras.resize(x);

    for(int i = 0; i < x; i++){
        
        cout << ".";

        cout << (char)tolower(letras[i]);
        
    }
}