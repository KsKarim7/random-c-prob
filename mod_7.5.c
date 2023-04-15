#include <stdio.h>
int main()
{
    int n, m, sum = 0;
    // int abs(int sum);
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        sum += m;
    }
    printf("%d", abs(sum));
    return 0;
}