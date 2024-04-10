#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        long long int l, r;
        scanf("lld lld", &l, &r);
        if (l > r)
        {
            long long int temp = r;
            r = l;
            l = temp;
        }
        long long int res = (r * (r + 1)) / 2 - ((l - 1) * (l - 1 + 1)) / 2;
        printf("lld\n", res);
    }
}