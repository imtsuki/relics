#include <stdio.h>

int main(void){
    const double PI = 3.14159265;
    double radius, perimeter, area;
    printf("Please input a float number: ");
    scanf("%lf", &radius);
    perimeter = 2 * radius * PI;
    area = radius * radius * PI;
    printf("The perimeter is %.4lf, the area is %.4lf. \n",
           perimeter, area);
    return 0;
}