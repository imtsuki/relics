#include <stdio.h>
#include <stdlib.h>

int a[1001];
int n;

int find(int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x) return i;
    }
    return -1;
}

void print(int p){
    if(p == -1){
        printf("NULL\n");
        return;
    }
    if(p == 0 && n == 1){
        printf("NULL\n");
        return;
    }
    if(p == 0){
        printf("%d\n", a[1]);
        return;
    }
    if(p == n - 1){
        printf("%d\n", a[n-2]);
        return;
    }
    
        printf("%d %d\n", a[p-1], a[p+1]);
        return;
    
}

int main(){

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
    }
    int m;
    scanf("%d", &m);
    int x;
    while(m--){
        scanf("%d", &x);
        print(find(x));
    }
    return 0;

}