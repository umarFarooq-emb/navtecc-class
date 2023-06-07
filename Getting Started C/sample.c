#include <stdio.h>
#include <string.h>

int x = 20;     // static/global variable
typedef struct MyName {
    char Name[30];
} Username;

int main() {
    int y = 10;     // dynamic variable
    printf("%i",x);
    Username* uname;
    strcpy(uname->Name, "Umar Farooq");
    printf("%s", *uname->Name);
    return 0;
}