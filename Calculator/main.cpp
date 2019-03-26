/* Program Calculator v 1.0 */
#include <iostream>
#include <string>

char get_sign() {
	char sign;
	do {
		std::cout << "What kind of arithmetic operation do you want to do ? (+,-,*,/) : ";
		std::cin >> sign;
		if ((sign == '+') || (sign == '-') || (sign == '*') || (sign == '/'))
			return sign;
		else
			std::cout << "Input an arithmetic sign ! " << std::endl;
	} while ((sign != '+') && (sign != '-') && (sign != '*') && (sign != '/'));
}


int main() {
	char answer;
	float first_number;
	float second_number;
	float result;
	char sign;
	bool flag;

	std::cout << "Calculator v 1.0" << std::endl;
	do {
		std::cout << "Input first number: ";
		std::cin >> first_number;
		sign = get_sign();

		do {
			std::cout << "Input second number: ";
			std::cin >> second_number;
			if ((sign == '/') && (second_number == 0)) {
				std::cout << "It isn't impossible divided by zero !" << std::endl;
				flag = false;
			}
			else
				flag = true;
		} while (flag != true);


		if (sign == '+')
			result = first_number + second_number;
		else if (sign == '-')
			result = first_number - second_number;
		else if (sign == '*')
			result = first_number * second_number;
		else
			result = first_number / second_number;

		std::cout << "Result of arithmetic operation is " << result << std::endl;
	    std:: cout << "Do you want to repeat: ";
		std::cin >> answer;
	} while (answer == 'y' || answer == 'Y');
	return 0;
}