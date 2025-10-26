#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    vector <long long int> fib(61);

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 61; i++){
        fib[i] = fib[i-1]+fib[i-2];
    }

    

    cin >> n;

    while(n--){
        int x;

        cin >> x;
        printf("Fib(%d) = %d\n", x, fib[x]);

        
    }
}