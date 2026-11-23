
#include <stdio.h>
int main()
{
    // FILE *ptr;
    // ptr=fopen("delete.txt","r");

    // char buffer[450];
    // while (fgets(buffer, sizeof(buffer), ptr) != NULL) {
    //     printf("%s", buffer);
    // };
    // fclose(ptr);

    FILE *fp;
    // fp = fopen("data.txt", "w");
    fp = fopen("data.txt", "a");

    // char name[20];
    if (fp == NULL)
    {
        printf("Unable to open file");
        return 1;
    }

    // fprintf(fp, "Rahul 85");
    fprintf(fp, "\nDheeraj 85");

    fclose(fp);

    return 0;
}
