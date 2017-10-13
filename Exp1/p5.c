#include <stdio.h>

/*char isPlural(int i){
    if (i == 1)
        return '';
    else
        return 's';
}*/

int main(void){
    char a;
    short b;
    int c;
    long d;
    long long e;
    float f;
    double g;
    printf("Please input seven parts: \n");
    scanf("%c%hd%d%ld%lld%f%lf",&a, &b, &c, &d, &e, &f, &g);
    printf(
        "The result is: \n\
The 'char' variable is %c, it takes %d byte. \n\
The 'short' variable is %hd, it takes %d bytes. \n\
The 'int' variable is %d, it takes %d bytes. \n\
The 'long' variable is %ld, it takes %d bytes. \n\
The 'long long' variable is %lld, it takes %d bytes. \n\
The 'float' variable is %f, it takes %d bytes. \n\
The 'double' variable is %lf, it takes %d bytes. \n",
        a, sizeof(char),
        b, sizeof(short),
        c, sizeof(int),
        d, sizeof(long),
        e, sizeof(long long),
        f, sizeof(float),
        g, sizeof(double));
    return 0;
}