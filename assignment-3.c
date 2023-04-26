#include <stdio.h>
#include <string.h>
// questions : https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges

// int main()
// {
//     int n;
//     int even = 0, odd = 0;
//     scanf("%d", &n);
//     int inp[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &inp[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (inp[i] % 2 == 0)
//         {
//             even += 1;
//         }
//         else
//         {
//             odd += 1;
//         }
//     }
//     printf("%d %d", even, odd);
//     return 0;
// }

// int main()
// {
//     int count = 0;
//     char inp[1001];
//     for (int i = 0; i < strlen(inp); i++)
//     {
//         scanf("%s", &inp[i]);
//         // printf("%s", inp[i]);
//     }
//     for (int i = 0; i < strlen(inp); i++)
//     {
//         // scanf("%c", &inp[i]);
//         if (inp[i] == 97 || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u')
//         {
//             count += 1;
//             printf("%c ", inp[i]);
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// int main()
// {
//     int m1, m2, d, ans = 0;
//     scanf("%d %d %d", &m1, &m2, &d);
//     ans = (d * m1) / m2;
//     printf("%d", ans);
//     return 0;
// }

// int main()
// {
//     int cap = 0, smol = 0;
//     char inp[1001];
//     scanf("%s", inp);
//     for (int i = 0; i < strlen(inp); i++)
//     {
//         if (inp[i] >= 65 && inp[i] <= 90)
//         {
//             cap += 1;
//         }
//         else
//         {
//             smol += 1;
//         }
//     }
//     printf("%d %d", cap, smol);
//     return 0;
// }

// int main()
// {
//     int n, k;
//     scanf("%d %d", &n,&k);
//     // int count = 1;
//     // for ( int j = 1; j <=k ; j++)
//     // {
//     //     printf("\n%d ", count);
//     //     for(int k = 2;k<=n;k++){
//     //         printf("%d ",k);
//     //     }
//     // }
//     for(int j = 0;j<k;j++){
//         for(int i = 1;i<=n;i++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int x, count = 0;
    for (int i; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i; i < n; i++)
    {
        if (x == a[i])
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}

// int main()
// {

//     return 0;
// }
