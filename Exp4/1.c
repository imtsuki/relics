#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n  - i; j++) {
            putchar(' ');
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            putchar(' ');
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    //   printf("");
    return 0;
}