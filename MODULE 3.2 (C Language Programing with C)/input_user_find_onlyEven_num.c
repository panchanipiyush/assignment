#include <stdio.h>
int main()
{
    int i, rem, num;

    printf("Enter limit ");
    scanf("%d", &num);

    printf("Even numbers of 1 To %d are:\n", num);

    for (i = 1; i <= num; i++)
    {
        rem = i % 2;
        if (rem == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}