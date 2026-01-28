#include <stdio.h>

int main()
 {
    char fname[30], lname[30];
    char *pf = fname;
    char *pl = lname;

    printf("Enter First Name: ");
    scanf("%s", pf);

    printf("Enter Last Name: ");
    scanf("%s", pl);


    printf("Name:%s %s",pf,pl);

    return 0;
}
