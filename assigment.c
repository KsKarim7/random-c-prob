// https://docs.google.com/document/d/14Ih9s2ifG9ZNjDvgIlXfDGHZ8ye6VeE4JGRGQudyFsY/edit
// #include <stdio.h>
// int main()
// {
// 01
// int n;
// scanf("%d", &n);
// int m = 1, k = n - 1;

// for (int i = 0; i < (n * 2) - 1; i++)
// {
//     for (int j = k; j > 0; j--)
//     {
//         printf(" ");
//     }
//     for (int l = 1; l <= m; l++)
//     {
//         printf("%d", l);
//     }
//     if (i >= n - 1)
//     {
//         k += 1;
//         m -= 2;
//     }
//     else
//     {
//         k -= 1;
//         m += 2;
//     }
//     printf("\n");
// }

// 02
// int inp, l = 1;
// scanf("%d", &inp);
// int n = inp - 1;
// for (int i = 0; i < inp; i++)
// {
//     for (int j = n; j > 0; j--)
//     {
//         printf(" ");
//     }
//     for (int k = 1; k <= l; k++)
//     {
//         printf("%d", l);
//     }
//     n--;
//     l++;
//     printf("\n");
// }
// }

// 03
// #include <stdio.h>
// int count_before_zero(int *n, int m)
// {
//     int count = 0;
//     for (int i = 0; i < m; i++)
//     {
//         if (n[i] == 0)
//         {
//             break;
//         }
//         else
//         {
//             count += 1;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int inp;
//     scanf("%d", &inp);
//     int arr[inp];
//     for (int i = 0; i < inp; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int sz = sizeof(arr) / sizeof(int);
//     // func(arr, sz);
//     printf("%d", count_before_zero(arr, sz));
//     return 0;
// }

// 04
// #include <stdio.h>
// int func()
// {
//     int n = 3;
//     int m = 2;
//     printf("%d", m + n);
// }
// int main()
// {
//     int m = 2;
//     func();
//     return 0;
// }

// // 05
#include <stdio.h>
#include <string.h>

int is_palindrome(char *str)
{
    int flag = 0;
    int sz = strlen(str);
    for (int i = 0; i < sz; i++)
    {
        if (str[i] != str[sz - i - 1])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    char inp[11];
    scanf("%s", &inp);
    int res = is_palindrome(inp);
    if (res != 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}

// 06
// #include <stdio.h>
// int func(int *f)
// {
//     *f = 200;
// }
// int main()
// {
//     int g = 20;
//     func(&g);
//     printf("%d", g);
//     return 0;
// }