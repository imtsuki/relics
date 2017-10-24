#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 200

int main(){
    int i = 0;
    int numAlpha = 0;
    int numDigit = 0;
    int numSpace = 0;
    int numOther = 0;

    char *stringBuffer;
    stringBuffer = (char *)calloc(N, sizeof(char));
    gets(stringBuffer);

    while (stringBuffer[i] != '\0'){
        if (isdigit(stringBuffer[i]))
            numDigit++;
        else if (isalpha(stringBuffer[i]))
            numAlpha++;
        else if (stringBuffer[i] == ' ')
            numSpace++;
        else
            numOther++;
        i++;
    }

    printf(
        "%d %d %d %d", 
        numAlpha,
        numSpace,
        numDigit,
        numOther);

    free(stringBuffer);
    return 0;
}