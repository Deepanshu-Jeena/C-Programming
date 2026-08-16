#include<stdio.h>
int add(int a, int b){
int sum = a + b;
return sum;}

int main (){
    int x;
    int y;
    printf("Enter your First number :");
    scanf("%d",&x);
    printf("Enter your 2nd number :");
    scanf("%d",&y);

    int result = add(x,y);
    printf("sum of two number is : %d ", result);






    return 0;
}