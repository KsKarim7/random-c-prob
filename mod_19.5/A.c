#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float f = x / (float)100;
    printf("%.2f", p / (1 - f));
    return 0;
}
