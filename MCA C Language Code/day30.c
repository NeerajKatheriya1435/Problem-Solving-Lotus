
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr1[3][3];
    // int arr2[3][3];
    // int arr3[3][3];

    // For taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value at %d,%d position\n",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    // For accessing value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
        
    }

    // Transpose Array 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr1[j][i]);
        }
        printf("\n");
    }

    // For taking input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Enter the value at %d,%d position\n",i,j);
    //         scanf("%d",&arr2[i][j]);
    //     }
    // }

    // For accessing value
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ",arr2[i][j]);
    //     }
    //     printf("\n");
        
    // }

    // For sum value
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ",arr1[i][j]+arr2[i][j]);
    //     }
    //     printf("\n");
        
    // }
    
    return 0;
}
