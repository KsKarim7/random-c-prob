#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (n % 2 == 0)
    {
        printf("%d %d", arr[(n / 2) - 1], arr[n / 2]);
    }
    else
    {
        float f = n / (float)2;
        int res = floor(f);
        printf("%d", arr[res]);
    }
    return 0;
}