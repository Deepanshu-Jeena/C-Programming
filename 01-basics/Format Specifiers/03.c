#include<stdio.h>

int main(){
    // precision

   float price1= 29.99;
   float price2= 1.50;
   float price3 = -100.00;

    printf("%+.2f\n",price1);// + for sign
    printf("%+.1f\n",price2);
    printf("%+.0f\n",price3);
    printf("****************\n");

    printf("%.1f\n",price1);// round off
    printf("%.1f\n",price2);
    printf("%.0f\n",price3);


    return 0;


}