#include <stdio.h>

int main(void){
    char sex;
    int age;
    float height;
    printf("Please input sex: ");
    scanf("%c", &sex);
    printf("Please input age: ");
    scanf("%d", &age);
    printf("Please input height: ");
    scanf("%f", &height);
    printf("The sex is %c, the age is %d, and the height is %f. \n",
           sex, age, height);
    return 0;
}