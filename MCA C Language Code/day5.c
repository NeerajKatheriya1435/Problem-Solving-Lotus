#include <stdio.h>

// void addTwoNum(int num1,int num2){
//     printf("The sum is: %d\n",(num1+num2));
//     return;
// }

// 4--> 4*3*2*1 24

// 4 -->4*3fact

int fact(int num){

    if(num<=1){
        return 1;
    }
    return num*fact(num-1);
}

// int sumNumber(int num){
//     int sum=0;
//     for (int i = 1; i <= num; i++)
//     {
//         sum+=i;
//     }
//     return sum;
// }
// void mulNum(int* a,int* b);

int main()
{
    // printf("The factorial is: %d\n",fact(8));
    // addTwoNum(4,8);
    // mulNum(4,2); // pass by values

    // int a=7;
    // int b=3;
    // mulNum(&a,&b); // call by references

    // printf("The sum of 10 Number is: %d\n",sumNumber(10));
    return 0;
}

// void mulNum(int a,int b){
//     printf("%d\n",(a*b));
// }
// void mulNum(int* a,int* b){
//     printf("%d\n",a);
//     printf("%d\n",*a);
//     printf("%d\n",((*a)*(*b)));
// }


// Fibbonacci Series --> Using Recusrion 
// Greatest Number among 3 varibale -->Function
// Number is Prime or Not --> Function