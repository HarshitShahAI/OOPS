#include <iostream>
#include <string>
#include <cstdlib>

class Integer {
private:
    int value;

public:
    Integer(int val) : value(val) {}

    bool operator==(const std::string& str) const {
        return value == std::stoi(str);
    }

    bool operator!=(const std::string& str) const {
        return value != std::stoi(str);
    }

    bool operator<(const std::string& str) const {
        return value < std::stoi(str);
    }

    bool operator>(const std::string& str) const {
        return value > std::stoi(str);
    }

    bool operator<=(const std::string& str) const {
        return value <= std::stoi(str);
    }

    bool operator>=(const std::string& str) const {
        return value >= std::stoi(str);
    }
};

int main() {
    Integer num(10);

    std::string str1 = "15";  
    std::string str2 = "10";  
    std::string str3 = "5";   

    std::cout << "Is num equal to str2? " << (num == str2) << std::endl;
    std::cout << "Is num not equal to str1? " << (num != str1) << std::endl;
    std::cout << "Is num less than str1? " << (num < str1) << std::endl;
    std::cout << "Is num greater than str3? " << (num > str3) << std::endl;
    std::cout << "Is num less than or equal to str2? " << (num <= str2) << std::endl;
    std::cout << "Is num greater than or equal to str3? " << (num >= str3) << std::endl;

    return 0;
}
