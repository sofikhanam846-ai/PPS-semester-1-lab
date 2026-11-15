#include <stdio.h>
int main()
{
    int name , pass;
    const int user_name = 123;
    const int user_pass = 123;
    printf("Enter name and pass");
    scanf("%d%d",&name,&pass);
    if (name == user_name && pass == user_pass)
        printf("authorised user");
    else
        printf("none authorised user");
    return 0;
}
