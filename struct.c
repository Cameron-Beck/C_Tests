#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Jon");
    strcpy( student1.major, "buisness");

    printf("%s \n", student1.name);
    printf("%i", student1.age);


    return 0;
}