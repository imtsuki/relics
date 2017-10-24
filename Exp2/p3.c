#include <stdio.h>

int main(){
    int n, result;
    scanf("%d", &n);
    result = 0;
    while(n--)
        if(n % 21 == 0)
            result += n;
    printf("%d", result * result);
    return 0;
}