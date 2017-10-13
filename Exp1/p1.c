#include <stdio.h>

int main(void){
    int a, b;
    printf("Please input two integers: ");
    scanf("%d%d", &a, &b);
    printf("The sum is %d and the difference is %d. \n",
           a + b, a - b);
    return 0;
}