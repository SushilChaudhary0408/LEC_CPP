#include <iostream>
using namespace std;
int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int total;

    // Input marks for each subject
    std::cout << "Enter marks for subject 1: ";
    std::cin >> subject1;
    std::cout << "Enter marks for subject 2: ";
    std::cin >> subject2;
    std::cout << "Enter marks for subject 3: ";
    std::cin >> subject3;
    std::cout << "Enter marks for subject 4: ";
    std::cin >> subject4;
    std::cout << "Enter marks for subject 5: ";
    std::cin >> subject5;

    // Calculate the total
    total = subject1 + subject2 + subject3 + subject4 + subject5;

    // Output the total
    std::cout << "Total marks: " << total << std::endl;

    return 0;
}