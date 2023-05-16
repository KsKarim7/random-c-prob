// prob of mod 18.5 no.7
#include <stdio.h>
int main()
{
    int n, m, x;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}