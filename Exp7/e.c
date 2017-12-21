#include <stdio.h>
int maxl = 1;

void update(int l){
    if (l > maxl) maxl = l;
}

int main(){
    int l = 1;
    int n, x, ox;
    scanf("%d", &n);
    scanf("%d", &x);
    ox = x;
    n--;
    while(n--){
        scanf("%d", &x);
        if(x == ox) l++;
        else{
            ox = x;
           
            l = 1;
        }
         update(l);
    }
    printf("%d", maxl);
    return 0;
}