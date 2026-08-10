#include <stdio.h>
#include <stdbool.h>

int main(){


    bool isOnline = true;
    bool isStudent= true;
    bool forSale = false;

    

    if(isOnline){
        printf("you are ONLINE\n");

    }
    else{
        printf("you are OFFLINE\n");
    }

    if(isStudent){
        printf("you are a STUDENT\n");

    }
    else{
        printf("you are not a STUDENT\n");
    }


    if(forSale){
        printf("that item is for sale\n");

    }
    else{
        printf("that item is NOT for sale\n");
    }



    

    return 0;

}
