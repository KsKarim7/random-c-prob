#include <stdio.h>
int main()
{
    // int A;
    // long long int B;
    // double C;
    // char D;
    // scanf("%d", &A);
    // scanf("%lld", &B);
    // scanf("%lf", &C);
    // scanf("\n%c", &D);
    // printf("%d\n%lld\n%0.2lf\n%c", A, B, C, D);
    // return 0;

    int i, inp;
    scanf("%d", &inp);
    for (i = 1; i <= inp; ++i)
    {
        printf("%d", i);
        if (i % 5 == 0)
        {
            printf(" Yes\n");
        }
        else
        {
            printf(" No\n");
        }
    }
    return 0;
}