#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int calculate_sum(int a, int b) {
    return a + b;
}

void print_message(const char* message) {
    if (message != NULL) {
        printf("Message: %s\n", message);
    }
}

int main() {
    int x = 10;
    int y = 20;
    int result = calculate_sum(x, y);
    
    printf("Sum of %d and %d is %d\n", x, y, result);
    print_message("Hello, World!");
    
    return 0;
}
