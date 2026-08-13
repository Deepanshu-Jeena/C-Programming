#include<stdio.h>
int main(){
    int choice;
    double celcius;
    double fahrenheit;
    
    

    //Temperature Converter
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2):\n");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Enter your temperature in celcius :");
        scanf("%lf",&celcius);
        double ctof;
        ctof= (celcius * (9.0/5.0))+32;
        printf("Your temperature will be %.2lf f",ctof);

    }
    else if (choice == 2)
    {
        printf("Enter your Temperature in Farehnheit :");
        scanf("%lf",&fahrenheit);
        double ftoc;
        ftoc=(fahrenheit-32)*5.0/9.0;
        printf("Your temperature will be %.2lf Celcius",ftoc);

    }
    else{
        printf("Invalid choice! Please enter 1 or 2");
    }
    




    return 0;
}