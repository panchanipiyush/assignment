#include <stdio.h>
int main()
{
    int first = 0, second = 1, result, i, no;
    printf("Enter number of terms : ");
    scanf("%d", &no);

    printf("First %d terms of Fibonacci series: ", no);
    for (i = 0; i < no; i++) 
    {
        if (i <= 1)      
        {
            result = i;  
        }                    
        else
        {                    
            result = first + second;
            first = second;
            second = result;
        }
        printf("%d ", result);
    }
    return 0;
}
// to not perform if condition than perform direct
// for(i=1;i<=num;i++)
//{
// printf("%d",next);
// next=f+s;
// f=s;
// s=next;
//}
 