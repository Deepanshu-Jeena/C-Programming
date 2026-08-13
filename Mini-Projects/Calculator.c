#include<stdio.h>
#include<math.h>
int main(){
    double x;
    double y;
    printf("Enter first number: ");
    scanf("%lf",&x);
    printf("Enter your Second number: ");
    scanf("%lf",&y);

    

    int choice;
    //calculator
    printf("1) ADD\n");
    printf("2) SUBTRACT\n");
    printf("3) MULTIPLY\n");
    printf("4) DIVIDE\n");
    printf("ENTER YOUR CHOICE 1,2,3 OR 4 :");
    scanf("%d",&choice);
    

    switch (choice)
    {
    
    case 1:
        double add;
        add = x+y;
        printf("Addition of your numbers is  %.2lf",add);
        break;
    case 2:
        double subtract;
        subtract=x-y;
        printf("Subtraction of your numbers is  %.2lf",subtract);
        break;
    case 3:
        double multi;
        multi=x*y;
        printf("Multiplication of your numbers is %.2lf",multi);
        break;
    case 4:
        double divi;
        if(y==0){
            printf("Cannot divide by zero");

        }
        else{
        divi = x/y;
        printf("Divison of your numbers is %.2lf",divi);
        }
        break;
    
    default:
        printf("Invalid choice! Please enter 1, 2, 3, or 4");
        break;
    }






    return 0;
}