#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    // prob1
    // int inp;
    // scanf("%d", &inp);
    // int arr[inp];
    // for (int i = 0; i < inp; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // int i = 0, j = inp - 1;
    // while (i < j)
    // {
    //     // int temp;
    //     if (arr[i] > arr[j])
    //     {
    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //         i++;
    //         j--;
    //     }
    //     else
    //     {
    //         continue;
    //     }
    // }
    // for (int i = 0; i < inp; i++)
    // {
    //     printf("%d", arr[i]);
    // }

    // prob2
    // int n;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     char a[101];
    //     scanf("%s", &a);
    //     int len = strlen(a);
    //     if (len > 10)
    //     {
    //         printf("%c%d%c\n", a[0], len - 2, a[len - 1]);
    //     }
    //     else
    //     {
    //         printf("%s\n", a);
    //     }
    // }

    // prob3
    // char a[100001];
    // fgets(a, 100001, stdin);
    // for (int i = 0; i < strlen(a) - 1; i++)
    // {
    //     if (a[i] >= 97 && a[i] <= 122)
    //     {
    //         printf("%c", a[i] - 32);
    //     }
    //     else if (a[i] >= 65 && a[i] <= 90)
    //     {
    //         printf("%c", a[i] + 32);
    //     }
    //     else
    //     {
    //         printf("%c", a[i] - 12);
    //     }
    // }

    char ar[1001];
    bool var_name;
    scanf("%s", &ar);
    char arr[1001];
    int len = strlen(ar);
    for (int i = 0; i < len; i++)
    {
        arr[i] = ar[len - 1 - i];
    }
    // printf("%s", arr);
    for (int i = 0; i < len; i++)
    {
        if (ar[i] == arr[i])
        {
            var_name = true;
        }
        else
        {
            char res = false;
            break;
        }
    }
    if (var_name == true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}