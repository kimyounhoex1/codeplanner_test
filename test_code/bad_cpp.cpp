#include <iostream>
#include <string>

using namespace std; // 나쁜 습관

class BadClass {
    int data; // private이 아님
    
public:
    BadClass() {} // 기본 생성자만 있음
    
    void doSomething() {
        cout << "Data: " << data << endl; // 초기화되지 않은 멤버 변수
    }
};

int main() {
    BadClass obj;
    obj.doSomething();
    
    int* ptr = new int; // 메모리 해제 누락
    *ptr = 42;
    
    return 0;
}
