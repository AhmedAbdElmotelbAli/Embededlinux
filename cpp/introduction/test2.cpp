//1-Create a table for AscII code


#include <iostream>
int main() {
    std::cout << "ASCII Table" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Character\tASCII Code" << std::endl;
    for(int i = 0; i < 128; ++i) {
        std::cout << static_cast<char>(i) << "\t\t" << i << std::endl;
    }
        std::cout << "-----------------------------------------------------------------------------------------------" << std::endl;

    return 0;
}
//2- maximum number between three values
#include <iostream>

int main() {
    int num1, num2, num3;
    
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    
    int maxNum = num1; // Assume num1 is the maximum initially
    
    // Compare num2 with maxNum
    if (num2 > maxNum) {
        maxNum = num2;
    }
    
    // Compare num3 with maxNum
    if (num3 > maxNum) {
        maxNum = num3;
    }
    
    std::cout << "Maximum number is: " << maxNum << std::endl;
    
    return 0;
}
//3-RIGHT angle triangle

#include <iostream>
#include <algorithm>


bool isRightAngleTriangle(int side1, int side2, int side3) {
    // Sort the sides in ascending order
    int sides[3] = {side1, side2, side3};
    std::sort(sides, sides + 3);

    // Check if it satisfies Pythagorean theorem
    return (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]);
}

int main() {
    int side1, side2, side3;

    std::cout << "Enter three side lengths of the triangle: ";
    std::cin >> side1 >> side2 >> side3;

    if (isRightAngleTriangle(side1, side2, side3)) {
        std::cout << "Yes, it forms a right angle triangle." << std::endl;
    } else {
        std::cout << "No, it does not form a right angle triangle." << std::endl;
    }

    return 0;
}
//4-decide the letter is vowel or not

#include <iostream>

bool isVowel(char letter) {
    // Convert the letter to lowercase for comparison
    letter = tolower(letter);
    
    // Check if the letter is a vowel
    return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
}


int main() {
    char letter;

    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (isalpha(letter)) {
        if (isVowel(letter)) {
            std::cout << letter << " is a vowel." << std::endl;
        } else {
           std:: cout << letter << " is not a vowel." << std::endl;
        }
    } else {
        std::cout << "Invalid input: Please enter a valid letter." << std::endl;
    }

    return 0;
}
//5-multiplication table


#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number to generate its multiplication table: ";
    std::cin >> num;

    std::cout << "Multiplication Table of " << num << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " * " << i << " = " << (num * i) << std::endl;
    }

    return 0;
}
//6-summation the digits of integer entered by user

#include <iostream>

int main() {
    int number, digit, sum = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Take absolute value of the number
    number = abs(number);

    // Sum the digits of the number
    while (number > 0) {
        digit = number % 10;  // Extract the rightmost digit
        sum += digit;         // Add the digit to the sum
        number /= 10;         // Remove the rightmost digit from the number
    }

    std::cout << "Sum of the digits: " << sum << std::endl;

    return 0;
}
//7-change from decimal to binary and vice versa
#include <iostream>
#include <stack>
#include <cmath>
#include <string>

std::string decimalToBinary(int decimal) {
    std::stack<int> binaryDigits;

    while (decimal > 0) {
        binaryDigits.push(decimal % 2);
        decimal /= 2;
    }

    std::string binary = "";
    while (!binaryDigits.empty()) {
        binary += std::to_string(binaryDigits.top());
        binaryDigits.pop();
    }

    return binary;
}

int binaryToDecimal(std::string binary) {
    int decimal = 0;
    int size = binary.length();

    for (int i = 0; i < size; ++i) {
        if (binary[i] == '1') {
            decimal += pow(2, size - i - 1);
        }
    }

    return decimal;
}

int main() {
    int choice, number;
    std::string binary;

    std::cout << "Choose conversion:" << std::endl;
    std::cout << "1. Decimal to Binary" << std::endl;
    std::cout << "2. Binary to Decimal" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            std::cout << "Enter a decimal number: ";
            std::cin >> number;
            std::cout << "Binary equivalent: " << decimalToBinary(number) << std::endl;
            break;
        case 2:
            std::cout << "Enter a binary number: ";
            std::cin >> binary;
            std::cout << "Decimal equivalent: " << binaryToDecimal(binary) << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
