#include<stdio.h>

//this is the callback function
void sayhello(){
    printf("hello,student!you just called me back!\n");
}

//this function takes another function as input
void studentwork(void(*callbackfunc)()){
    printf("student is doing homework...\n");

    //after finishing, call the teacher back
    callbackfunc();
    }
    int main(){
    //pass the teacher's phone number(function address)
    studentwork(sayhello);
    return 0;
    }
