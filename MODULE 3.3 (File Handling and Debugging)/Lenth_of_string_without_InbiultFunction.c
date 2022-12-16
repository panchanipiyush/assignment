# include<stdio.h>
 int main()
 {
    char str[10],i;
    printf("Enater string: ");
    gets(str);
    //for ( i = 0;str[i]!=0; i++);
    i=0;
    while (str[++i]!='\0');
    printf("Length of string: %d",i);
    
    return 0;
 }