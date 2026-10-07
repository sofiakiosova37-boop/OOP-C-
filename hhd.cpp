#include <iostream>
#include <fstream>

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "=== check on work of C++ in VS Code ===" << std::endl;

    double num1, num2;
    std::cout << "Enter 1 num: ";
    std::cin >> num1;

    std::cout << "enter 2 num: ";
    std::cin >> num2;

    double sum = num1 + num2;

    std::cout << "\nresult: " << num1 << " + " << num2 << " = " << sum << std::endl;

    // Запись результата в файл result.txt
    std::ofstream outFile("result.txt");

    if (outFile.is_open()) {
        outFile << "=== result calcus ===" << std::endl;
        outFile << "1 num: " << num1 << std::endl;
        outFile << "2 num: " << num2 << std::endl;
        outFile << "sum: " << sum << std::endl;
        outFile.close();

        std::cout << "hurray 'result.txt'." << std::endl;
    } else {
        std::cerr << "error" << std::endl;
    }

    return 0;
}