#include <stdio.h>

char data[1000];
int p = 0;

char pop(){
    p--;
    if(p < 0) return 0;
    return data[p];
}

void push(char c){
    data[p] = c;
    p++;
}

int main(){
    char c;
    while((c = getchar()) != '#'){
        if(c == '(')
            push('(');
        if(c == ')'){
            c = pop();
            if(c == 0){
                printf("NO");
                return 0;
            }
        }
    }
    if(p != 0) printf("NO");
    else printf("YES");
    return 0;
}