#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    int cap = 0, smol = 0, spac = 0;
    fgets(s, 1001, stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            cap += 1;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            smol += 1;
        }
        else if (s[i] == 32)
        {
            spac += 1;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", cap, smol, spac);
}