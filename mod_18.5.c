// https://docs.google.com/document/d/1ufj9gqsj8HE-MtppADUojTdDjeWiaM9WHV_y8KP_PTA/edit

#include <stdio.h>
#include <math.h>

// 01
// void func(int n)
// {
//     if (n <= 0)
//     {
//         return;
//     }
//     printf("I love Recursion\n");
//     func(n - 1);
// }
// int main()
// {
//     int inp;
//     scanf("%d", &inp);
//     func(inp);
//     return 0;
// }

// 02
// void func(int n)
// {
//     if (n == 0)
//         return;
//     func(n - 1);
//     printf("%d\n", n);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     func(n);
//     return 0;
// }

// 03
// void func(int n)
// {
//     if (n == 0)
//         return;
//     if (n == 1)
//     {
//         printf("%d", n);
//     }
//     else
//     {
//         printf("%d ", n);
//     }
//     func(n - 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     func(n);
//     return 0;
// }

// 04
// void func(int a[], int n, int i)
// {
//     if (i > n - 1)
//     {
//         return;
//     }
//     func(a, n, i + 2);
//     printf("%d ", a[i]);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     func(arr, n, 0);
//     return 0;
// }

// 05
long long int sum = 0;
long long int func(int arr[], int n, int i)
{
    if (i == n)
    {
        return sum;
    }
    // printf("%d ", arr[i]);
    sum += arr[i];
    func(arr, n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("%d", func(arr, n, 0));
    long long int res = func(arr, n, 0);
    printf("%lld", res);
    return 0;
}