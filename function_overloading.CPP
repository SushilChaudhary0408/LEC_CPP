#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

// Function to concatenate two strings
std::string add(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

int main() {
    int x = 5, y = 10;
    float a = 2.5f, b = 3.7f;
    std::string str1 = "Hello", str2 = "World";

    int sum1 = add(x, y);
    float sum2 = add(a, b);
    std::string concat = add(str1, str2);

    std::cout << "Sum of integers: " << sum1 << std::endl;
    std::cout << "Sum of floating-point numbers: " << sum2 << std::endl;
    std::cout << "Concatenation of strings: " << concat << std::endl;

    return 0;
}

