#include <stdio.h>
int main()
{
    int inp;
    scanf("%d", &inp);
    int arr[inp];
    for (int i = 0; i < inp; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], count = 0;
    for (int i = 1; i < inp; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < inp; i++)
    {
        if (arr[i] == min)
        {
            count += 1;
        }
    }
    if (count % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    // printf("\n%d", count);
    // printf("\n%d", );
    return 0;
}