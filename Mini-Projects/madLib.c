#include<stdio.h>
#include<string.h>

int main(){

    char adjective[50]="";
    char name[50]="";
    int number=0;
    char verb[50]="";
    char place[50]="";

    printf("Enter an adjective : ");
    fgets(adjective,sizeof(adjective),stdin);
    adjective[strlen(adjective)-1] = '\0';

    printf("Enter a player name :");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    printf("Enter a number: ");
    scanf("%d",&number);
    while (getchar() != '\n');
    

    printf("Enter a verb ending in -ing:");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter a place:");
    fgets(place,sizeof(place),stdin);
    place[strlen(place)-1] = '\0';

    printf("Today %s was feeling %s before the match at %s. He scored %d runs while %s! The crowd went wild.",name,adjective,place,number,verb);



    return 0;
}