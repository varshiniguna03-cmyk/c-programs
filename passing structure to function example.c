#include<stdio.h>
struct student{
    int id;
    char name[20];
};
void display (struct student *s) {
    printf("ID: %d\n" ,s->id);
    printf("Name: %s\n ,s->Name");
}
int main (){
    struct student s1 = {101,"anu"};
    display(&s1);//passing by reference
    return 0;
}
