#include <stdio.h>

int main() {
    int n = 0; 
    
    while (n <= 10) { 
        float i = n * 0.2;
        
        for (int j = 1; j <= 3; j++) {
            if (n == 0 || n == 5 || n == 10) { 
                printf("I=%.0f J=%.0f\n", i, i + j);
            } else {
                printf("I=%.1f J=%.1f\n", i, i + j);
            }
        }
        n++;
    }
    
    return 0;
}
