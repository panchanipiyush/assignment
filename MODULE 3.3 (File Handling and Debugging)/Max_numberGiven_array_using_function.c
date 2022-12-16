# include<stdio.h>
int maximum(int a[],int n);  // functon declaration.
int main()
{
    int a[50],n,m;
    printf("Please enter any number N: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
    m=maximum(a,n);  // function calling
    printf("\nMaximum: %d",m);
    return 0;
}
int maximum(int a[],int n)// function defination.
{   int i,m=0;
    for ( i = 0; i < n; i++ ) 
    {
        if(m<a[i])
    {  
         m=a[i];
    }
    }
    return m;
}

