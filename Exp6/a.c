#include <stdio.h>

int convert(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return 2 * convert(n / 10) + n % 10;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", convert(n));
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << a +b;
    return 0;
}