#include <stdio.h>
int main()
{
    int n;
    int tiger = 0, pathan = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if (x1 > x2)
        {
            tiger += 1;
        }
        else if (x1 < x2)
        {
            pathan += 1;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger");
    }
    else if (tiger < pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}