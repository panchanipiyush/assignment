#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], arr3[20], i, k=1, c = 0, j = 0, size1, size2, size3 = 0;
    printf("-------------------------------------\n");
    printf("enter size of array 1: ");
    scanf("%d", &size1);
    printf("-------------------------------------\n");
    printf("Enter element for array 1:\n");
    printf("-------------------------------------\n");
    for (i = 0; i < size1; i++)
    {        
        printf("enter element %d:",k++);        
        scanf("%d", &arr1[i]);
    }
    printf("-------------------------------------\n");
    printf("Enter size of array 2: ");
    scanf("%d", &size2);
    printf("-------------------------------------\n");
    printf("Enter element for array 2:\n");
    printf("-------------------------------------\n");
    for (i = 0; i < size2; i++)
    {        
        printf("enter element %d:",k++);        
        scanf("%d", &arr2[i]);
    }
    size3 = size1 + size2;
    // copy elements of array1 in to array3
    for (i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
        j++;
    }
    // copy elements of array2 in to array3
    for (i = 0; i < size2; i++)
    {
        arr3[j] = arr2[i];
        j++;
    }
    printf("-------------------------------------\n");
    printf("Result array after merging: ");
    // size3 = size1 + size2;
    //   printf("Element of Array3: ");
    for (i = 0; i < size3; i++)
    {
        printf("%d ", arr3[i]);
    }
    for (i = 0; i < size3; i++)
    {
        for (j = i + 1; j < size3; j++)
        {
            if (arr3[i] > arr3[j])
            {
                c = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = c;
            }
        }
    }
    printf("\n-------------------------------------");
    printf("\nMerging array in ascending oreder: ");
    for (i = 0; i < size3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n-------------------------------------");
    for (i = 0; i < size3; i++)
    {
        for (j = i + 1; j < size3; j++)
        {
            if (arr3[i] < arr3[j])
            {
                c = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = c;
            }
        }
    }
    printf("\nMerging array in descending oreder: ");
    for (i = 0; i < size3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n-------------------------------------");
    return 0;
}