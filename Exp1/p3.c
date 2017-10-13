#include <cstdio>

using namespace std;

int main(){
    int i,j;
    for(i = 0;i < 4;i++){
        for(j = 0;j <= 2 - i;j++){
            printf(" ");
        }
        for(j = 0;j <= 2 * i;j++){
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return 0;
}