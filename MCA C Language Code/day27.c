
#include <stdio.h>

int main()
{
    // FILE *ptr;

    // ptr=fopen("delete.txt","r");

    // char buffer[450];
    // while (fgets(buffer, sizeof(buffer), ptr) != NULL) {
    //     printf("%s", buffer);
    // };

    FILE *fp;
    char name[30];
    fp = fopen("student.txt", "w");
    if (fp == NULL)
    {
        printf("Unable to open file");
        return 1;
    }
    fprintf(fp, "Rahul 85");
    fclose(fp);
    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open file");
        return 1;
    }
    fscanf(fp, "%s", name);
    printf("Name: %s", name);
    fscanf(fp, "%s", name);
    printf("Name: %s", name);
    fclose(fp);

    return 0;
}
