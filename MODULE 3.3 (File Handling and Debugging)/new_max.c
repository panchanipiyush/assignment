# include<stdio.h>
int maximum(int a[10],int n,int m)
{ 
    for (int i = 0; i < 10; i++)
    {
        if(a[i]<m);
        m=a[i];
    }
    return m;
}
int main()
{     
    int i,a[10],size=0;
    printf("enter your size: ");
    scanf("%d",&size);
    for ( i = 0; i < size; i++);
    {
        printf("Enter your number: %d",i);
        scanf("%d",&a[i]);
        
    }  
    printf("mximum no is %d",maximum(a[i]));
    return 0;
}