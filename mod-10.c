#include <stdio.h>
#include <string.h>
// https://docs.google.com/document/d/16nJwleGtTHCab9XBs14X-7GUARQxVnGvbUVR1O9a9o8/edit
int main()
{
    // char s[1001], s1[1001];
    // scanf("%s %s", &s, &s1);
    // int st = strlen(s);
    // int stt = strlen(s1);
    // printf("%d %d\n", st, stt);
    // printf("%s %s\n", s, s1);
    // char s[1000001];
    // fgets(s, 1000001, stdin);
    // int len = strlen(s);
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
    // for (int i = 0; s[i] != '\\'; i++)
    // {
    //     printf("%c", s[i]);
    // }

    char s[1000001];
    scanf("%s", &s);
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        sum += (s[i] - 48);

        // printf("%d\n", s[i] - 48);
    }
    printf("%d", sum);

    return 0;
}