#include <stdio.h>
#include <string.h>
int main ()
{
    char username[10] , password[10];
    char validuser[]="admin" , validpass[]="123";
    printf("Enter username:");
    scanf("%s",username);
    printf("Enter password:");
    scanf("%s",password);
    if(strcmp(username,validuser) == 0, strcmp(password,validpass) == 0)
        printf("success ! welcome, %s.\n", username);
     else {
        printf("Invalid username or password.\n");
    }

    return 0;
}
