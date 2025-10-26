#include <bits/stdc++.h>
using namespace std;


int main(){
    int x1 = 0;
    int x2 = 1;
    int aux = x1+x2;


    int n;

    cin >> n;

    

for (int i = 0; i < n; i++){
    
    cout << x1;

    if(i < n-1)
    cout << " ";
    x1 = x2;
    x2 = aux;
    aux = x1+x2;
}

    cout << endl;
}