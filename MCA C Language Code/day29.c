
#include <stdio.h>
struct Student
{
    int roll_no;
    char name[30];
    float marks;
};
int main(int argc, char const *argv[])
{
    // printf("Hello\n");
    // printf("%d\n",argc);

    // printf("%s\n",argv[0]);
    // printf("%s\n",argv[1]);
    // printf("%s\n",argv[2]);
    // printf("%s\n",argv[3]);

    // FILE *fp;
    // char ch;
    // if (argc != 2)
    // {
    //     printf("Usage: program filename");
    //     return 1;
    // }
    // fp = fopen(argv[1], "r");
    // if (fp == NULL)
    // {
    //     printf("Unable to open file");
    //     return 1;
    // }
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     putchar(ch);
    // }
    // fclose(fp);

    FILE *fp;
    struct Student s1, s2;
    
    s1.roll_no = 101;
    snprintf(s1.name, sizeof(s1.name), "Rahul");
    s1.marks = 85.5;
    /* Write record */
    fp = fopen("student.dat", "wb");
    if (fp == NULL)
    {
        printf("Unable to open file");
        return 1;
    }
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);
    /* Read record */
    fp = fopen("student.dat", "rb");
    if (fp == NULL)
    {
        printf("Unable to open file");
        return 1;
    }
    if (fread(&s2, sizeof(s2), 1, fp) == 1)
    {
        printf("Roll No: %d\n", s2.roll_no);
        printf("Name: %s\n", s2.name);
        printf("Marks: %.2f\n", s2.marks);
    }
    fclose(fp);

    return 0;
}
