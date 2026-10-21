#include <stdio.h>


int main()
{
    // defintion of structure
    // struct Student
    // {
    //     int rollNum;
    //     float marks;
    //     int age;
    // };
    union Student
    {
        int rollNum;
        float marks;
        int age;
    };

    // declare structure
    union Student s1,s2,s3;

    // initilization
    s1.rollNum=101;
    s1.marks=89;
    s1.age=34;

    s2.rollNum=102;
    s2.marks=56;
    s2.age=22;

    s1.rollNum=101;
    printf("%d\n",s1.rollNum);
    // printf("%.2f\n",s1.marks);
    // printf("%d\n",s1.age);

    return 0;
}
