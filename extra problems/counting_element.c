#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    long long max = 0;

    while (test--)
    {
        long long a, cnt = 0;
        scanf("%lld", &a);

        while (a % 2 == 0)
        {
            cnt++;
            a = a / 2;
        }

        if (cnt > max)
        {
            max = cnt;
        }
    }
    printf("%lld\n", max);

    return 0;
    return 0;
}