// #include <stdio.h>
// void func(int *arr, int n)
// {
//     int max = arr[0], min = arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("%d %d", min, max);
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
//     int sz = sizeof(arr) / sizeof(int);
//     func(arr, sz);
//     return 0;
// }

// #include <stdio.h>
// void func(int *arr, int n)
// {
//     int temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             temp = arr[i];
//             if (arr[i] > arr[j])
//             {
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     int arr[3];
//     int ar[3];
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &arr[i]);
//         ar[i] = arr[i];
//     }
//     int sz = sizeof(arr) / sizeof(int);
//     func(arr, 3);

//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
//     return 0;
// }