
#include <stdio.h>

int main()
{
    // char name[20]="Babita";

    // Accessing the value from string

    // printf("%c\n",name[0]);
    // printf("%c\n",name[1]);
    // printf("%c\n",name[2]);
    // printf("%c\n",name[3]);
    // printf("%c\n",name[4]);
    // printf("%c\n",name[5]);

    // print using for loop

    // for (int i = 0; i<6; i++)
    // {
    //     printf("%c",name[i]);
    // }

    // char name[20]="Babita";

    // int i=0;
    // while (name[i]!='\0')
    // {
    //     printf("%c",name[i]);
    //     i++;
    // }
    
    // char arr[20];
    // scanf("%s",arr);
    // fgets(arr, sizeof(arr), stdin);
    // printf("%s",arr);

    // Array of string
    char name[3][15]={"Shubham","Rohan","Utpal"};
    // printf("%s\n",name[0]);
    // printf("%s\n",name[1]);

    for(int i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
