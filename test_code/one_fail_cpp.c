#include <stdio.h>

int main(void) {
    int x;
    printf("%d\\n", x); // cppcheck: 'x' is uninitialized
    return 0;
}