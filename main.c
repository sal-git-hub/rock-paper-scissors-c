#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int computerChoice = rand()% 3;

    int choice;
    printf("Choose:\n");
    printf("Click 0 for rock.\n");
    printf("Click 1 for paper.\n");
    printf("Click 2 for scissors.\n");
    if(scanf("%d",&choice)!=1){
        printf("Invalid input.\n");
        return 1;
    }

    if(choice==0){
        printf("You picked rock.\n");
    }
    else if(choice==1){
        printf("You picked paper.\n");
    }
    else if(choice==2){
        printf("You picked scissors.\n");
    }
    else{
        printf("Invalid input.\n");
        return 1;
    }

    if(computerChoice==0){
        printf("Computer picked rock.\n");
    }
    else if(computerChoice==1){
        printf("Computer picked paper.\n");
    }
    else{
        printf("Computer picked scissors.\n");
    }

    if(choice==computerChoice){
        printf("It's a draw!\n");
    }
    else if((choice==0&&computerChoice==2)
       ||(choice==1&&computerChoice==0)
       ||(choice==2&&computerChoice==1)){
           printf("You win!\n");
       }
    else{
        printf("Computer wins!\n");
    }

    return 0;
}

