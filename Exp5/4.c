#include <stdio.h>
#define MAX 1000000

int prime[MAX];
int next[MAX];

void gen_prime(int max){
    
    for (int i = 0; i < max; i++){
        prime[i] = 1;
    }
        
    int start = 2;
    int p = start;
    while(start < max){
        for (int i = 2 * start; i < max; i += start)
            prime[i] = 0;
        do {
            start++;
        } while(!prime[start] && start < max);
        next[p] = start;
        p = start;
    }
}

void printFactor(int n) {
    printf("%d=", n);
    int p = 2;
    int isFirst= 1;
    while(p <= n){
        if ((n % p) == 0){
            n /= p;
            if(isFirst) {
                printf("%d", p);
                isFirst = 0;
            } else {
                printf("*%d", p);
            } 
        }else{ 
            p = next[p];
        }
    }
    putchar('\n');
}

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    gen_prime(y);
    for(int i = x; i <= y; i++) {
        printFactor(i);
    }
    return 0;
}