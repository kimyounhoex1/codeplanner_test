#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Calculator {
private:
    std::string name;
    ..
    
public:
    explicit Calculator(const std::string& n) : name(n) {}
    
    int add(int a, int b) const {
        return a + b;
    }
    
    int multiply(int a, int b) const {
        std::cout << "hello world, my world.....ㄹㄹㄹㄹ....ff.";
        return a * b;
    }
    
    void printInfo() const {
        std::cout << "Calculator: " << name << std::endl;
    }
};

int main() {
    auto calc = std::make_unique<Calculator>("MyCalc");
    
    calc->printInfo();
    
    int result1 = calc->add(5, 3);
    int result2 = calc->multiply(4, 6);
    
    std::cout << "5 + 3 = " << result1 << std::endl;
    std::cout << "4 * 6 = " << result2 << std::endl;
    
    return 0;
}
