#include <stdio.h>

int countBinary(int n) {
    if(n == 0 || n == 1) return 1;
    return 1 + countBinary(n / 2);

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", countBinary(n));
    return 0;
}