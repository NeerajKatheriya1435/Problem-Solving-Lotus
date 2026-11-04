#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int *ptr;
    // int size=3;

    // // ptr=malloc(20);
    // ptr=malloc(size*sizeof(int));

    // if(ptr==NULL){
    //     printf("Not allocattion of Memeory");
    //     return 1;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Entre the value at: %d\n",i);
    //     scanf("%d",&ptr[i]);
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ",ptr[i]);
    // }
    

    // ptr[0]=45;
    // ptr[1]=34;
    // ptr[2]=23;
    // ptr[3]=99;
    // ptr[4]=34;


    // printf("%d\n",ptr[0]);
    // printf("%d\n",ptr[1]);
    // printf("%d\n",ptr[2]);

    int *ptr;
    int value=2;

    ptr=calloc(value,sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < value; i++)
    {
        printf("Entre the value at: %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < value; i++)
    {
        printf("%d ", ptr[i]);
    }
    int newValue=5;

    ptr = realloc(ptr, newValue * sizeof(int));

    for (int i = 0; i < newValue; i++)
    {
        printf("Entre the value at: %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < newValue; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
