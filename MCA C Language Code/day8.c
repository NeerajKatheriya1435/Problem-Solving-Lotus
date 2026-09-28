
#include <stdio.h>

int sumNumber(int n){

    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
};


int addTwoNum(int num1,int num2){
    int num=5;
    int sumValue = sumNumber(num);

    printf("The sum of %d number is: %d\n",num,sumValue);
    return num1+num2;
};

int main()
{
    printf("The sum of two number is: %d\n",addTwoNum(4,8));
    return 0;
}
