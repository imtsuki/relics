#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    double sum = 0.0;
    double t;
    double a = 1.0, b = 1.0;
    scanf("%d", &n);
    while(n--){
        t = b;
        b = a + b;
        a = t;
        sum += (b / a);
    }
    //scanf("");   
    printf("%.2lf", sum);
 
    return 0;
}