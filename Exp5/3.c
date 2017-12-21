#include <stdio.h>

void swap(int *a, int *b) {
    *a ^= *b ^= *a ^= *b;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int total_n = n * (n + 1) / 2;
    int total_m = m * (m + 1) / 2;
    int total = total_n * total_m;
    if (n > m)
        swap(&n, &m);
    int square = 0;
    for(int i = n, j = m; i > 0; i--, j--) {
        square += i * j;
    }
    printf("%d %d", square, total - square);
    return 0;
}