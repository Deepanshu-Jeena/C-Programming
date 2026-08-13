#include<stdio.h>
int main(){
    //Check if a person can vote
    //Take age as input. If age is 18 or above, print "You can vote". 
    //Else, print "You cannot vote yet"

    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>=18){
        printf("You are %d years old, you are an adult so you can vote",age);
    }
    else{
        printf("You cannot vote yet");
    }



    return 0;
}