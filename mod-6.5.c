// question doc link: https://docs.google.com/document/d/1xO8j7aJW4fcid4It2vgUNWYHVBrLp8UfbaT2Kl1ZGCo/edit
#include <stdio.h>
int main()
{
    // 01
    // char a;
    // scanf("%c", &a);
    // if (a == 122)
    // {
    //     printf("%c", 97);
    // }
    // else
    // {
    //     printf("%c", a + 1);
    // }

    // 02
    // int a, b, c, d;
    // // long long int d;
    // // scanf("%d %d %d", &a, &b, &c, &d);
    // scanf("%d %d %d", &a, &b, &c, &d);
    // if (a + (b * c) == 0)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("NO");
    //     printf(" %d %d %d %d", c, b, a, d);
    // }

    // 03
    // int n;
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // 04
    // int a, b, res;
    // scanf("%d %d", &a, &b);
    // if (a > b)
    // {
    //     res = a - b;
    //     printf("%d", res);
    // }
    // else
    // {
    //     printf("%d", 0);
    // }

    // 05
    // int n;
    // scanf("%d",&n);
    // for( int i = 2;i<n;i++){
    //     if(n%i == 0){
    //         printf("YES");
    //     }
    //     else{
    //         printf("NO");
    //     }
    // }

    // assignment 2

    int n, ev = 0, od = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", ar[i]);
        if (ar[i] % 2 == 0)
        {
            ev += ar[i];
        }
        else
        {
            od += ar[i];
        }
    }
    printf("%d %d", ev, od);

    // int n, x, v;
    // scanf("%d", &n);
    // int ar[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ar[i]);
    // }
    // scanf("%d %d", &x, &v);
    // ar[x] = v;

    // int n, x, v;
    // scanf("%d", &n);
    // int ar[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ar[i]);
    // }
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     // printf("%d ", ar[i]);
    //     if (i % 2 == 0)
    //     {
    //         printf("%d ", ar[i]);
    //     }
    // }
    return 0;
}