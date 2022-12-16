#include <stdio.h>
int main()
{
    int num, rem, rev = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;

        printf("%d ", rem);
    }

    return 0;
}
// By using for loop
// for(i=num;i>0; )
//     {
//         r=i%10;
//         reverse=revers*10+r;
//         num=num/10;
//     }
     
//     printf("\n  The Reverse Number of %d is %d",n,s)