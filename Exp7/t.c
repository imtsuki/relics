#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[100][100], ch, p[1001] = {0}, q = 0;
    while ((ch = getchar()) != EOF)
    {
        p[q++] = ch;
    }p[q] = '\0';q = 0;
    int i = 0, j = 0, flag = 0;
    memset(s, 0, sizeof(s));
    while ((ch = p[q]) != '\0')
    {
        if(ch == ' ')
        {
            s[i][j] = '\0';
            ++i;j=0;
        }
        else if(ch == '\n')
        {
            flag = 1;
            s[i][j] = '\0';
        }
        else
        {
            s[i][j++] = ch;
        }

        if(flag == 1)
        {
            for(; i >= 1; --i)
                printf("%s ", s[i]);
            printf("%s", s[0]);
            i = 0; j = 0;memset(s, 0, sizeof(s));flag = 0;
        }
        ++q;
    }

    return 0;
}