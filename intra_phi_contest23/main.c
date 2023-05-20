// https://www.hackerrank.com/intra-phitron-contest-a-may-2023

#include <stdio.h>

// 02
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     int t = a;
//     if (a > 0 && b > 0 && c > 0)
//     {
//         if (a == t && b == t && c == t)
//         {
//             printf("Yes");
//         }
//         else
//         {
//             printf("No");
//         }
//     }
//     else
//     {
//         printf("No");
//     }
//     return 0;
// }

// 03
// int main()
// {
//     int inp;
//     scanf("%d", &inp);
//     int arr[inp];
//     for (int i = 0; i < inp; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     for (int i = 0; i < inp; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     for (int i = 0; i < inp; i++)
//     {
//         printf("%d ", max - arr[i]);
//     }

//     return 0;
// }

// 04
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int r = (n / 2);
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n; j++)
//         {

//             if (i == r)
//             {
//                 printf("#");
//             }
//             else if (j == r)
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 05
int main()
{
    int n, test = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m, count = 1, flag = 0;

        scanf("%d", &m);
        int arr[m];
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[j]);
        }
        int s;
        scanf("%d", &s);
        for (int j = 0; j < m; j++)
        {
            if (arr[j] != s)
            {
                count += 1;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        test += 1;
        if (flag == 1)
        {
            printf("Case %d: %d\n", test, count);
        }
        else
        {
            printf("Case %d: Not Found\n", test);
        }
    }
    return 0;
}