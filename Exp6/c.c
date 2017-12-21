#include <stdio.h>
#include <string.h>
#include <math.h>

char num[20];
char stack[20];
char *p = stack;
int rnum = 0;
void push(char n) {
    *p = n;
    p++;
}

char pop() {
    p--;
    return *p;
}

void plus(int n) {
    
    rnum *= 10;
    rnum += n;
}

int main(){
    scanf("%s", num);
    int n = strlen(num);
    for(int i = 0; i < n / 2; i++) {
        push(num[i]);
        plus(num[i] - '0');
    }
    if(n % 2 == 1) {
        plus(num[n / 2] - '0');
        n++;
    }
    char c;
    for(int i = n / 2; i < n - 1; i++) {
        c = pop();
        if (c != num[i]) {
            goto NO;
        }
        plus(num[i] - '0');
    }

    if((int)sqrt(rnum) * (int)sqrt(rnum) == rnum)
        goto YES;
    else
        goto NO;
YES:
    printf("Yes");
    return 0;
NO:

    printf("No");
    return 0;
    
}