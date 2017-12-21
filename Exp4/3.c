#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

char a[111];


int main(){
    int n = 0;
    while(isdigit(a[n] = getchar())) n++;
    putchar(a[0]);
    for(int i = 1; i<n;i++){
        if(n - i % 3 == 0)
            putchar(',');
        putchar(a[i]);
    }

//    printf("");
    return 0;
}