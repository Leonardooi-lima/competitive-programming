#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;

    cin >> x;


    string palavra;
    cin >> palavra;
    string resposta = palavra.substr(0,2);

    int max = 0;
    
for(int i = 0; i+1 < palavra.size(); i++){
    int contador = 0;
    for(int j = 0; j+1 < palavra.size(); j++){
        if (j == i)
        continue;

        if(palavra[i] == palavra[j] && palavra[i+1] == palavra[j+1]){
            contador++;

            if(contador > max){
                max = contador;
                
                resposta.clear();
                resposta.push_back(palavra[i]);
                resposta.push_back(palavra[i+1]);
            }
        }
    }
}

cout << resposta << endl;



}