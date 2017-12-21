#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int equal(double, double);
void swap(double *, double *);

int main(){
    double a, b, c, delta;
    scanf("%lf%lf%lf", &a, &b, &c);

    if(equal(a, 0)){
        printf("The equation is not quadratic.");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if(delta >= 0){
        double x1, x2;
        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        if(equal(x1, x2)){
            printf("The equation has two equal roots: %.4lf.", x1);
            return 0;
        }
        if (x1 < x2) swap(&x1, &x2);
        printf("The equation has two distinct real roots: %.4lf and %.4lf.", x1, x2);
        return 0;
    }else{
        delta = -delta;
        printf(
            "The equation has two complex roots: %.4lf+%.4lfi and %.4lf-%.4lfi.",
            -b /(2 *a),
            sqrt(delta)/(2 *a),
            -b /(2 *a),
            sqrt(delta)/(2 *a));
    }
    return 0;
}

int equal(double a, double b){
    if (fabs(a - b) <= 1e-6)
        return 1;
    return 0;
}

void swap(double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
}