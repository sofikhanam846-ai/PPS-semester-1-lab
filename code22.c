#include <stdio.h>
int main()
{
    float disc,final,discrate,amount,rate;
    printf("Enter amount");
    scanf("%f",&amount);
    if (amount<5000)
        discrate = 5;
    else if (amount < 1000)
        discrate = 10;
    else if (amount < 2000)
        discrate = 15;
    else
        discrate = 20;
    disc = amount * discrate / 100;
    final = amount - disc;
    printf("Discount = %.2f",disc);
    printf("\n Final price = %.2f",final);
    return 0;
}
