#include <bits/stdc++.h>
using namespace std;

int main() {
    double N, X, Y;
    cin >> N >> X >> Y;

    double ICM = N / (X + Y);

    printf("%.2lf\n", ICM);
    
}
