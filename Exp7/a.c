#include <stdio.h>

int main() {
    int n;
    double max = -1;
    double min = 1000;
    double sum = 0;
    double x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &x);
        sum += x;
        if(x > max) max = x;
        if(x < min) min = x;
    }
    sum /= n;
    printf("%.2lf %.0lf %.0lf", sum, max, min);
    return 0;
}