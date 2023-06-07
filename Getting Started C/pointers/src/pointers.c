#include <pointers.h>

int main () {
    int x = 20;
    int *ptr = &x;
    printf("%x\n\n", ptr);
    printf("%i\n\n", *ptr);
    return 0;
}
