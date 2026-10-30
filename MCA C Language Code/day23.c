#include <stdio.h>

// int addNum(int a,int b){
//     a=8;
//     b=2;
//     return a+b;
// }

void counter()
{
    static int count = 0;
    count++;
    printf("%d\n", count);
}
int main()
{
    counter();
    counter();
    counter();
    // int a=5;
    // int b=6;
    // addNum(a,b);
    // printf("%d\n",a);
    // printf("%d\n",b);
    // enum weekDay{
    //     Sunday=1,
    //     Monday=2,
    //     Tuesday=3
    // };

    // enum weekDay kashish;
    // kashish=Tuesday;
    // printf("%d\n",kashish);

    // for (register int i = 0; i < 1000; i++)
    // {
    // printf("%d ", i);
    // }
    
    return 0;
}
