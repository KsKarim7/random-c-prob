#include <stdio.h>
int main()
{
    int n = 4, m;
    scanf("%d", &m);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int a[m - 1];
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i < m && j == 0)
            {
                // printf("%d ", arr[i][j]);
                a[i] = arr[i][j];
            }
            else
            {

                sum += arr[i][j];
            }
        }
        printf("%d\n", a[i] - sum);
    }
    return 0;
}