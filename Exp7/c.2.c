#include <stdio.h>
#include <stdlib.h>

int a[1001];

int cmp(const void *x, const void *y){
    int p = *(int *)x;
    int q = *(int *)y;
    p %= 2;
    q %= 2;
    if (p == 1 && q == 0) return 1;
    if (p == 0 && q == 1) return -1;
    return 0;

}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
    }
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0)printf("%d ", a[i]);
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 1)printf("%d ", a[i]);    
    return 0;
}