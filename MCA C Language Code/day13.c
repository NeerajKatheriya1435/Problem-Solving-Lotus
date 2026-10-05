#include <stdio.h>

void swapNum(int* num1,int* num2){
    *num1=89;
    *num2=45;
    // int temp=num1;
    // num1=num2;
    // num2=temp;
}

// int addNum(int num1,int num2){
//     return num1+num2;
// }

int main()
{
    // int a = 6;
    // printf("%d\n",a);

    // int* ptr=&a;
    // printf("%d\n",ptr);
    // printf("%d\n",&a);
    // printf("%d\n",*ptr);

    // float b=56.56f;
    // float* ptr; // Declare floating pointer
    // ptr=&b; // Initilization || assigment of pointer
    // float* ptr= &b; // declaration with inilization

    // int arr[]={4,6,7,8,9,3};

    // printf("%d\n",arr);
    // printf("%d\n",(arr+1));

 // arithmentic of pointer

    // printf("%d\n",*arr);
    // printf("%d\n",*(arr+1));
    // printf("%d\n",*(arr+2));

    int a=5;
    int b=7;

    // int temp=a;
    // a=b;
    // b=temp;

    // swapNum(a,b); // call by value

    swapNum(&a,&b); // call by refrence

    // printf("%d\n",addNum(a,b));
    printf("%d\n",a);
    printf("%d\n",b);
    
    return 0;
}
