#include <stdio.h>
#include <string.h>
int main()
{
    // prob1
    // int a[21], b[21];
    // scanf("%s %s", a, b);
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("%s", a || b);
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("%s", a);
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("%s", b);
    //     }
    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("%s", a);
    //         break;
    //     }
    //     else
    //     {
    //         printf("%s", b);
    //         break;
    //     }
    // }

    // prob2
    // int n;
    // scanf("%d", &n);
    // char inp[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%s", &inp[i]);
    // }
    // // fgets(inp, n, stdin);
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += inp[i] - 48;
    //     // printf("%d ", inp[i] - 48);
    // }
    // printf("%d", sum);

    // prob3
    char inp[1000001];
    scanf("%s", &inp);
    int count[26] = {0};
    for (int i = 0; i < strlen(inp); i++)
    {
        // printf("%c ", inp[i]);
        int val = inp[i] - 97;
        count[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 97, count[i]);
        }
    }

    return 0;
}