#include <stdio.h>
#define N 200

int main(){
    int x, y, result;
    scanf("%d%d", &x, &y);
    result = 1;
    while(y--)
        result *= x;
    printf("%d", result);
    return 0;
}