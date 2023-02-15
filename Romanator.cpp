/**
 * Converts an integer in the range [1, 3999] to its Roman numeral representation.
 *
 * @param num The integer to convert to Roman numerals.
 * @return The Roman numeral representation of the input integer.
 */
std::string decimalToRoman(int num) {
    std::string romanNum = "";

    while (num >= 1000) {
        romanNum += "M";
        num -= 1000;
    }
    while (num >= 900) {
        romanNum += "CM";
        num -= 900;
    }
    while (num >= 500) {
        romanNum += "D";
        num -= 500;
    }
    while (num >= 400) {
        romanNum += "CD";
        num -= 400;
    }
    while (num >= 100) {
        romanNum += "C";
        num -= 100;
    }
    while (num >= 90) {
        romanNum += "XC";
        num -= 90;
    }
    while (num >= 50) {
        romanNum += "L";
        num -= 50;
    }
    while (num >= 40) {
        romanNum += "XL";
        num -= 40;
    }
    while (num >= 10) {
        romanNum += "X";
        num -= 10;
    }
    while (num >= 9) {
        romanNum += "IX";
        num -= 9;
    }
    while (num >= 5) {
        romanNum += "V";
        num -= 5;
    }
    while (num >= 4) {
        romanNum += "IV";
        num -= 4;
    }
    while (num >= 1) {
        romanNum += "I";
        num -= 1;
    }

    return romanNum;
}

/**
 * Prompts the user to enter an integer in the range [1, 3999].
 *
 * @return The user's input as an integer.
 */
int getValidInput() {
    int num;
    bool validInput = false;

    while (!validInput) {
        std::cout << "Enter a number between 1 and 3999: ";
        std::cin >> num;

        if (std::cin.fail() || num < 1 || num > 3999) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error: Invalid input. Please try again." << std::endl;
        } else {
            validInput = true;
        }
    }

    return num;
}

/**
 * Converts a user-specified integer to its Roman numeral representation and prints the result.
 */
int main() {
    int num = getValidInput();

    std::string romanNum = decimalToRoman(num);

    std::cout << num << " in Roman numerals is: " << romanNum << std::endl;

    return 0;
}
