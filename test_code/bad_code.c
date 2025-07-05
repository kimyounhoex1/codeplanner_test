#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    char buffer[10];
    
    // 문제가 있는 코드들
    strcpy(buffer, "This is too long for the buffer"); // 버퍼 오버플로우
    printf("x = %d\n", x); // 초기화되지 않은 변수 사용
    
    int* ptr = malloc(100);
    // 메모리 해제 누락
    
    return 0;
}
