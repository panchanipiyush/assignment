# include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3];
    int choice;
    printf("select number for oparation\n");
    printf("1.Enter the number 1 for array addition\n");
    printf("2.Enter the number 2 for array substraction\n");
    printf("3.Enter the number 3 for array multiplication\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("Enter the 1st matrix\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d",&a[i][j]);  
        }
    }
     printf("Enter the 2nd matrix\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d",&b[i][j]);  
        }
    }
    printf("1st matrix is\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",a[i][j]);  
        }
        printf("\n");
    }
    printf("2nd matrix is\n");  
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",b[i][j]);  
        }
        printf("\n"); 
    }  
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            c[i][j] = a[i][j] + b[i][j];  
        }
    }
    printf("The sum of two matrix is :\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",c[i][j]);  
        }
        printf("\n");  
    }
    break;
    case 2:
        printf("Enter the 1st matrix\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d",&a[i][j]);  
        }
    }
     printf("Enter the 2nd matrix\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d",&b[i][j]);  
        }
    }
    printf("1st matrix is\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",a[i][j]);  
        }
        printf("\n");
    }
    printf("2nd matrix is\n");  
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",b[i][j]);  
        }
        printf("\n"); 
    }  
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            c[i][j] = a[i][j] - b[i][j];  
        }
    }
    printf("The substratction of two matrix is :\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",c[i][j]);  
        }
        printf("\n");  
    }
        break;
    case 3:
        printf("Enter the 1st matrix\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d",&a[i][j]);  
        }
    }
     printf("Enter the 2nd matrix\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d",&b[i][j]);  
        }
    }
    printf("1st matrix is\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",a[i][j]);  
        }
        printf("\n");
    }
    printf("2nd matrix is\n");  
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",b[i][j]);  
        }
        printf("\n"); 
    }  
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {
            d[i][j] = 0;
        for (int k = 0;k < 3;k++)
        {             
            d[i][j] += a[i][k] * b[k][j];  
        }
        }
    }
    printf("The multiplication of two matrix is :\n");
    for (int i = 0; i < 3; i++)    
    {
        for (int j = 0; j < 3; j++)
        {             
            printf("%d ",d[i][j]);  
        }
        printf("\n");  
    }
        break;

    default:
        break;
    }
    return 0;
}