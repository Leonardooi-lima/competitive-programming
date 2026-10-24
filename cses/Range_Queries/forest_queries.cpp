
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {



        for (int j = 1; j <= n; j++) {



            char c;
            cin >> c;

            int arvore;

            if(c == '*')
            arvore = 1;

            else
            arvore = 0;

            prefix[i][j] = arvore + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    while (q--) {
        int y1, x1, y2, x2;



        cin >> y1 >> x1 >> y2 >> x2;




        int resposta = prefix[y2][x2];

        resposta -= prefix[y1 - 1][x2];
        resposta -= prefix[y2][x1 - 1];
        resposta += prefix[y1 - 1][x1 - 1];

        cout << resposta << endl;
    }






}
