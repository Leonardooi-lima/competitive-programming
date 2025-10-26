#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    while (cin >> h >> m) {
        int hora = h / 30;     
        int minuto = m / 6;     

        if (hora == 12) 
        hora = 0; 

   
        printf("%02d:%02d\n", hora, minuto);
    }
}
