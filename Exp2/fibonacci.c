#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef unsigned int INT;

INT fibonacci(INT, INT *);

int main(void){
    INT *cache = NULL;
    cache = (INT *)calloc(MAX, sizeof(INT));
    cache[1] = 1;
    cache[2] = 1;
    INT i;
    for(i = 1; i < MAX; i++)
        printf("%d ", fibonacci(i, cache));
    puts("\n");
    free(cache);
    system("pause");
    return 0;
}

INT fibonacci(INT x, INT *cache){
    if(cache[x]) return cache[x];
    return cache[x] = fibonacci(x - 1, cache) + fibonacci(x - 2, cache);
}
