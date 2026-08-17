#include<stdio.h>
int max(int a, int b){

    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
    
}

int main(){
    int a ;
    int b;
    printf("1st number :");
    scanf("%d",&a);
    printf("2nd number :");
    scanf("%d",&b);
    int maxi = max(a,b);
    printf("%d is bigger", maxi);
    






    return 0;
}