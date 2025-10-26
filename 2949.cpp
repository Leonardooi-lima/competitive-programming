#include <bits/stdc++.h>
using namespace std;


int main(){
    int x;

    cin >> x;

    int anao = 0;
    int elfos = 0;
    int humanos = 0;
    int magos = 0;
    int hobbits = 0;


    while(x--){
        string nome;
        char letra;


        cin >> nome >> letra;


        if(letra == 'A')
        anao++;

        if(letra == 'E')
        elfos++;

        if(letra == 'H')
        humanos++;

        if(letra == 'M')
        magos++;

        if(letra == 'X')
        hobbits++;
    }

    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(oes)\n%d Mago(s)\n", hobbits, humanos, elfos, anao, magos);
}