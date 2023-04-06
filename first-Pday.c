// Checkout the questions from here --
// https://docs.google.com/document/d/19-yrrckK55JFnhlsc8OWG1LouTJ-DUkW2RUsKWIOT0c/edit

// #1
// #include <stdio.h>
// int main()
// {
//     printf("Recently I heard that you've achieved 95% marks in your exam. \nThis is brilliant! \nI wish you'll shine in your life! \tGood luck all the barriers(^) in your life");
//     return 0;
// }

// #2
#include <stdio.h>
int main()
{
    int var1, var2;
    float resDiv;
    int res;
    scanf("%d %d", &var1, &var2);
    // // printf("%d %d", var1 - var2);
    res = var1 + var2;
    printf("5 + 2 = ");
    printf("%d ", res);
    res = var1 - var2;
    printf("\n5 - 2 = ");
    printf("%d ", res);
    res = var1 * var2;
    printf("\n5 * 2 = ");
    printf("%d ", res);
    resDiv = var1 * 1.0 / var2;
    printf("\n5 / 2 = ");
    printf("%0.2f ", resDiv);

    return 0;
}