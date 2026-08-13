#include<stdio.h>
int main(){
    int choice;
    double price;
    printf("Enter the price of your product :");
    scanf("%lf",&price);
    //Discount calculator
    printf("1. Student Discount (10%% )\n");
    printf("2. Senior Citizen Discount (20%%)\n");
    printf("3. No Discount\n");
    printf("Enter your choice (1, 2, or 3):");
    scanf("%d",&choice);
    if(choice==1){
        printf("Student Discount is apllied\n");
        double sd = 10.0/100.0 * price;
        double finalsd= price- sd;
        printf("You are elgible for - %.2lf\n",sd);
        printf("Final price is = %.2lf\n",finalsd);
    }
    else if (choice==2){
        printf("Seneior citizein Discount is applied\n");
        double scd = 20.0/100*price;
        double finalscd = price -scd;
        printf("You are eligible for -%.2lf\n",scd);
        printf("Final price is %.2lf\n",finalscd);

    }
    else if (choice==3)
    {
        printf("No discount is avialble\n");
        printf("Final price is = %.2lf",price);
    }
    else{

        printf("Invalid choice!! please choose 1,2 or 3");
    }
    




    return 0;
}