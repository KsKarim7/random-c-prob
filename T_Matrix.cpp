// prob of mod 18.5 no6
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sumI = 0, sumJ = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumI += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sumJ += arr[i][j];
            }
        }
    }
    printf("%d", abs(sumI - sumJ));
    return 0;
}