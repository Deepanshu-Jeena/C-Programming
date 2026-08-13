#include<stdio.h>
#include<math.h>

int main (){
    double Length;
    double Breadth;

    printf("Enter Length of your rectangle :");
    scanf("%lf",&Length);
    printf("Enter Breadth of your rectangle :");
    scanf("%lf",&Breadth);

    double area;
    area = Length*Breadth;

    double perimeter;
    perimeter= 2*(Length + Breadth);

    double radius;
    double height;
    printf("Enter radius of your cylinder : ");
    scanf("%lf",&radius);
    printf("Enter height of your cylinder :");
    scanf("%lf",&height);

    const double PI=3.14159;
    double Cylindervolume = PI * pow(radius,2)*height;
    double Cylindersurfacearea= 2*PI*pow(radius,2)+ 2*PI*radius*height;


    printf("Area of Rectangle : %.2lf\n",area);
    printf("Perimeter of Rectangle : %.2lf\n",perimeter);
    printf("Volume of your cylinder %.2lf\n", Cylindervolume);
    printf("Surface area of your Cylinder %.2lf\n",Cylindersurfacearea);





    return 0;
}