#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    int roll_no;
    struct Date dob;
};

#include <math.h>
int main()
{
    struct Student s1;
    s1.roll_no=56;
    s1.dob.day=5;
    s1.dob.month=8;
    s1.dob.year=2000;

    // printf("%d\n",s1.dob.day);
    // printf("%f\n",sqrt(78));
    
    return 0;
}
