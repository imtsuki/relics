#include <stdio.h>

int a, b, n;
int visited[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int ans[2002];
int count = 0;
void print(int num) {
    switch (count % 5){
        case 0:
            printf("%d", num);
        break;
        case 1:
        case 2:
        case 3:
            printf("\t%d", num);
        break;
        case 4:
            printf("\t%d\n", num);
        break;
    }
    count++;
}

void dfs(int count, int num) {
    if(num > b) return;
    ans[num] = 1;
    if(count > n)
        return;
    for(int i = 1; i <= n; i++) 
    {
        if (!visited[i]) {
            visited[i] = 1;
            dfs(count + 1, num * 10 + i);
            visited[i] = 0;
        }
    }
}

int main() {
    
    scanf("%d%d%d", &a, &b, &n);
    dfs(1, 0);
    for(int i = a; i <=b; i++){
        if (ans[i])
            print(i);
    }
    if (count == 0)
    printf("There is no proper number in the interval.");
    return 0;
}