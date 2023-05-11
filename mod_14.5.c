// https://docs.google.com/document/d/1MbaqPOAm9nUAMxrwR4vxARDMwtkS_SnHVarKeMDdsV8/edit
#include <stdio.h>
int main()
{
    // code-force problems

    // 01
    // int m, n, o;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - i; j >= 1; j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 02
    // int n, k = 1;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - i; j > 1; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int l = 1; l <= k; l++)
    //     {
    //         printf("*");
    //     }
    //     k += 2;
    //     printf("\n");
    // }

    // 03
    // int n, k = 1;
    // scanf("%d", &n);
    // int m = 0;
    // for (int i = 0; i < n * 2; i++)
    // {
    //     for (int j = n - m; j > 1; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int l = 1; l <= k; l++)
    //     {
    //         printf("*");
    //     }
    //     if (i > n - 1)
    //     {
    //         k -= 2;
    //         m--;
    //     }
    //     else if (i == n - 1)
    //     {
    //     }
    //     else
    //     {
    //         k += 2;
    //         m++;
    //     }
    //     printf("\n");
    // }

    // 03
    int n, k = 1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int ex = arr[i];
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                arr[j] = ex;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}