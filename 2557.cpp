#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;


    while (cin >> line) {
        
        int plus = line.find('+');
        int equal = line.find('=');

        string left = line.substr(0, plus);
        string right = line.substr(plus + 1, equal - plus - 1);
        string result = line.substr(equal + 1);

        int R, L, J;

        
if (left[0] == 'R') {
               L = stoi(right);
     J = stoi(result);
            R = J - L;
            cout << R << endl;
} else if (right[0] == 'L') {
                R = stoi(left);
J = stoi(result);
            L = J - R;
             cout << L << endl;
        } else { 
            R = stoi(left);
            L = stoi(right);
            J = R + L;
            cout << J << endl;
        }
    }

   
}
