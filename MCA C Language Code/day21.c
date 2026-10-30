
// #include <stdio.h>

// struct Student
// {
//     int id;
//     float marks;
//     int age;
// };

// int main()
// {
//     struct Student s1;
//     s1.age=56;
//     s1.id=101;
//     s1.marks=90;

//     printf("%d\n",s1.id);
//     printf("%.2f\n",s1.marks);
//     printf("%d\n",s1.age);

//     struct Student s2={102,45.56f,23};

//     printf("%d\n",s2.id);
//     printf("%.2f\n",s2.marks);
//     printf("%d\n",s2.age);

//     return 0;
// }

struct Student
{
    int roll_no;
    float marks;
};
void display(struct Student s)
{
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}
struct Student getStudent()
{
    struct Student s = {101, 85.5};
    return s;
}

int main()
{
    struct Student s1 = {101, 85.5};
    display(s1);
    struct Student s5=getStudent();
    printf("%d\n",s5.roll_no);
    printf("%f\n",s5.marks);

    
    return 0;
}
