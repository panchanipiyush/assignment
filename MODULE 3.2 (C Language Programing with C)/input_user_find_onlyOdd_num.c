#include <stdio.h>
int main()
{
    int i, num, rem;
    printf("Enter limit: ");
    scanf("%d", &num);

    printf("Odd number of 1 To %d are :\n", num);

    for (i = 1; i <= num; i++)
    {
        rem = i % 2;
        if (rem == 1)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}