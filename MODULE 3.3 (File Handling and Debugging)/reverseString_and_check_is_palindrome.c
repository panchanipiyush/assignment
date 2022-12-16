# include<stdio.h>
# include<string.h>
int main()
{
    char string[100],original[100],temp;
    int i,j;

    printf("Enter a string: ");
    scanf("%s",&string);
    strcpy (original,string);
    i = 0;
    j = strlen(string)-1;
    while(i<j)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
    printf("reverse string is %s\n",string);
    if (strcmp (original,string) == 0 )
        printf("%s is a palindrome string",original);
    else 
        printf("%s is not a palindrome string",original);
    return 0;
}