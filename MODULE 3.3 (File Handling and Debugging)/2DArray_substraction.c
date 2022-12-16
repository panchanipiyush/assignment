# include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    printf("Enter the 1st matrix\n");
    for (int i = 0; i < 2; i++)    
    {
        for (int j = 0; j < 2; j++)
        {
        scanf("%d",&a[i][j]);  
        }
    }
     printf("Enter the 2nd matrix\n");
    for (int i = 0; i < 2; i++)    
    {
        for (int j = 0; j < 2; j++)
        {
        scanf("%d",&b[i][j]);  
        }
    }
    printf("1st matrix is\n");
    for (int i = 0; i < 2; i++)    
    {
        for (int j = 0; j < 2; j++)
        {             
            printf("%d ",a[i][j]);  
        }
        printf("\n");
    }
    printf("2nd matrix is\n");  
    for (int i = 0; i < 2; i++)    
    {
        for (int j = 0; j < 2; j++)
        {             
            printf("%d ",b[i][j]);  
        }
        printf("\n"); 
    }  
    for (int i = 0; i < 2; i++)    
    {
        for (int j = 0; j < 2; j++)
        {             
            c[i][j] = a[i][j] - b[i][j];  
        }
    }
    printf("The substraction of two matrix is :\n");
    for (int i = 0; i < 2; i++)    
    {
        for (int j = 0; j < 2; j++)
        {             
            printf("%d ",c[i][j]);  
        }
        printf("\n");  
    }          
    return 0;
}