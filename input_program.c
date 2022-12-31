#include <stdio.h>

int main()
{
    char fname[20],lname[20];

    printf("enter first name: ");
    scanf("%s", fname);

    printf("enter last name: ");
    scanf("%s", lname);

    printf("your full name is: %s %s \n",fname,lname);
    return 0;
}
