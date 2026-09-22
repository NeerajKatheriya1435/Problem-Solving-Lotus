#include <stdio.h>

int main()
{
    // int age=45;

    // if(age>18){
    //     printf("You can drive the car\n");
    //     if(age==45){
    //         printf("You are in special age\n");
    //     }
    // }else{
    //     printf("You can not drive car\n");
    // }

    // int age=96;

    // if(age>120 || age<=0){
    //     printf("Invalid age\n");
    // }
    // else if(age>0 && age<18){
    //     printf("You can not drive car due to child age\n");
    // }
    // else if(age>=18 && age<80){
    //     printf("You can drive car\n");
    // }
    // else{
    //     printf("You can drive car due to OverAge\n");
    // }

    // WAP to check greater number among 3 values

    // Switch Case Statements

    int value=2;

    switch(value){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        default:
            printf("Please Input value between 1 to 5");
    }

    // Calculator Program using switch cases (Take three input from user num1,num2,operator)

    return 0;
}
