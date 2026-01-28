#include <stdio.h>
int main(){
    int choice = 2;

    switch(choice){
        case 1:
            printf("you chose one");
            break;
        case 2:
             printf("you chose two");
            break;
        case 3:
             printf("you chose three");
            break;
        default:
             printf("invalid choice");
    }
            return 0;
}
