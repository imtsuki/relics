#include <stdio.h>

int main(){
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j <=  1 - i; j++){       //  打印前方空格
            printf(" ");
        }   
        for(j = 0; j <= 2 * (i + 1); j++){  //  打印主体
            if(i == 0 || j == 0 || j == 2 * (i + 1))    // 如果是第一行或行首或行尾，打*    
                printf("*");
            else                                        //  否则打空格
                printf(" ");
        }
        printf("\n");                       //换到下一行
    }
    getchar();
    return 0;
}
