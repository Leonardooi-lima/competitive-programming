#include <stdio.h>

int main() {
    int x, i, n = 1;
    
    scanf("%d", &x);
    
    for (i = 0; i < x; i++) {  
        printf("%d %d %d PUM\n", n, n + 1, n + 2);
        n += 4;  
    }

    return 0;
}