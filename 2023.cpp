#include <bits/stdc++.h>
using namespace std;

int main(){
    string nome, ult;
    vector <string> lista1(1001);
    vector <string> lista(1001);
    int x = 0;
    
    

    while((getline(cin, nome))){
        lista1[x] = nome;
        
        for(int i = 0; i < nome.size(); i++){
            nome[i] = tolower(nome[i]);
        }

    lista[x] = nome;
    x++;
        
    }
    lista.resize(x);
    lista1.resize(x);
    
    sort(lista.begin(), lista.end());



    string aux;

    for(int i = 0; i < x; i++){

    aux = lista1[i];

    for(int i = 0; i < aux.size(); i++)
    aux[i] = tolower(aux[i]);

   
    if(aux == lista[x-1])
    cout << lista1[i] << endl;
    }

}