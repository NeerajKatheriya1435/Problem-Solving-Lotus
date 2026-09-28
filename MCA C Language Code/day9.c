
#include <stdio.h>

int main()
{
    // int arr[]={4,5,7,4};

    // arr[2]=67; // Update the value at 2 index
    // printf("%d\n",arr[2]); // Accesing the element

    int arr[3][3]={
        {3,5,7},
        {6,1,5},
        {2,7,9}
    };

    // arr[1][2]=56;
    // printf("%d\n",arr[1][2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
}
