#include<stdio.h>
int sqaure(int a){
int sqr = a * a;
return sqr;}

int main (){
    int x;
    
    printf("Enter your  number :");
    scanf("%d",&x);
    

    int SQUARE = sqaure(x);
    printf("Square of your number is : %d ", SQUARE);






    return 0;
}