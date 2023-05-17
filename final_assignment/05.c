#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m = n - 1, l = 1;
    for (int k = 0; k < n; k++)
    {
        for (int i = m; i > 0; i--)
        {
            printf(" ");
        }
        for (int j = 0; j < l; j++)
        {
            if (k % 2 == 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        m--;
        l += 2;
    }
    return 0;
}