#include<stdio.h>

int isEven(int n){

    if (n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
    
    
}
int main(){
    int n;
    printf("Enter your Number :");
    scanf("%d",&n);
    int even = isEven(n);
    if (even==1)
    {
        printf("your number is even ");
    }
    else{
        printf("your number is odd");
    }
    
    




    return 0;
}