#include <stdio.h>
int main()
{
    float unit,bill;
    printf("Enter units consumed");
    scanf("%f,&unit");
    if (unit <=100)
        bill = unit * 1.50;
    else if (unit <=200)
        bill = unit * 4.00;
    else
        bill = unit * 600;
    printf("Electricity bill = R%2.f\n ",bill);
    return 0;
}
