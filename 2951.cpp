#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;

    cin >> x >> y;

    vector <char> letra(x);
    vector <int> amizade(x);

    for(int i = 0; i < x; i++)
        cin >> letra[i] >> amizade[i];
    


    int z;

    cin >> z;
    vector <char> letra2(z);


    for(int i = 0; i < z; i++)
        cin >> letra2[i];

        int somatorio = 0;

    for(int i = 0; i < z; i++){
        for(int j = 0; j < x; j++){
            if(letra2[i] == letra[j])
            somatorio+=amizade[j];

        }
    }

    cout << somatorio << endl;

    if(somatorio >= y)
    cout << "You shall pass!" << endl;

    else 
    cout << "My precioooous" << endl;

    
}