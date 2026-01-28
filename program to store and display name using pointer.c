#include<stdio.h>
int main(){
    char name[50];
    char *ptr;
    ptr = name;
    printf("enter your name:");
    fgets(name, sizeof(name),stdin);
    printf("name entered:");
    while(*ptr !='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
