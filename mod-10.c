#include <stdio.h>
#include <string.h>
int main()
{
    // char s[1001], s1[1001];
    // scanf("%s %s", &s, &s1);
    // int st = strlen(s);
    // int stt = strlen(s1);
    // printf("%d %d\n", st, stt);
    // printf("%s %s\n", s, s1);
    char s[1000001];
    // scanf("%s", &s);
    fgets(s, 1000001, stdin);
    int len = strlen(s);
    // for (int i = 0; i < len; i++)
    // {
    //     if (s[i] == '\\')
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         printf("%c", s[i]);
    //     }
    // }
    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}