#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag = 1;
                }
            }
            else if (arr[i][j] != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}