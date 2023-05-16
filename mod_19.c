// https://docs.google.com/document/d/1cScLgQWIiFPotiqQtvrtO1H-Cut7H5iCkkDcUfmqzmw/edit
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

// 01
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = m - 1; j >= 0; j--)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 02
// int func()
// {
// }
// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int ar[r][c], arr[r][c], arrr[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &ar[i][j]);
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             arrr[i][j] = (ar[i][j] + arr[i][j]);
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", arrr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 03
// void func(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     int x = n % 10;
//     func(n / 10);
//     printf("%d ", x);
// }
// int main()
// {
//     int inp;
//     scanf("%d", &inp);
//     for (int i = 0; i < inp; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         func(n);
//         if (n == 0)
//         {
//             printf("0");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 04
// int v = 0;
// int count_v(char *s, int i)
// {
//     if (s[i] == '\0')
//     {
//         return v;
//     }
//     if (s[i] >= 'A' && s[i] <= 'Z')
//     {
//         s[i] = s[i] + 32;
//     }
//     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//     {
//         v += 1;
//     }
//     count_v(s, i + 1);
// }

// int main()
// {
//     char s[201];
//     fgets(s, 201, stdin);
//     int count = count_v(s, 0);
//     printf("%d", count);
//     return 0;
// }

// 05
// long long int func(long long int n, int i)
// {
//     //     base case
//     if (n == 0)
//     {
//         return 1;
//     }
//     long long int ans = (func(n - 1));
//     return ans * n;
// }
// int main()
// {
//     long long int n;
//     scanf("%lld", &n);
//     printf("%lld", func(n, 1));
//     return 0;
// }

// 06
int main()
{
    char a[1001], b[1001];
    scanf("%s", &a);
    strcpy(b, a);
    int i = 0, j = strlen(b) - 1;
    while (i < j)
    {
        char temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        j--;
        i++;
    }
    if (strcmp(a, b) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}