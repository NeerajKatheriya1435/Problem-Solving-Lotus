#include <stdio.h>
#include <string.h>

int main()
{
    char myname[20];
    char arr[]="Rohan";
    char newarr[]={'R','o','h','a','n','\0'};
    
    // int i=0;
    // while (arr[i]!='\0')
    // {
    //     printf("%c",arr[i]);
    //     i++;
    // }

    // printf("%c",*arr);
    // printf("%c",*(arr+1));
    // printf("%c",*(arr+2));
    // printf("%c",*(arr+3));
    

    char str[50];
    scanf("%s",str);
    // fgets(str, sizeof(str), stdin);
    // printf("%s",str);

    // printf("%d",strlen(str));
    char newCopy[50];
    strcpy(newCopy,str);

    printf("%s",newCopy);
    return 0;
}
