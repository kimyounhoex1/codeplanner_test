#include <iostream>
#include <vector>
#include <string>

class Greeter {
public:
    Greeter(const std::string& name) : name_(name) {}

    void greet() const {
        std::cout << "Hello, " << name_ << "!" << std::endl;
    }

private:
    std::string name_;
};

int main() {
  
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};

    for (const auto& name : names) {
        Greeter greeter(name);
        greeter.greet();
    }

    return 0;
}