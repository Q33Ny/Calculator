/* Program Calculator v 1.0 */
#include <iostream>

int main() {

	float first_number;
	float second_number;
	float result;
	char sign;

	std::cout << "Calculator v 1.0" << std::endl;
	std::cout << "Input first number: ";
	std::cin >> first_number;
	std::cout << "What kind of arithmetic operation do you want to do ? (+,-,*,/) : ";
	std::cin >> sign;
	std::cout << "Input second number: ";
	std::cin >> second_number;
	
	if (sign == '+')
		result = first_number + second_number;
	else if (sign == '-')
		result = first_number - second_number;
	else if (sign == '*')
		result = first_number * second_number;
	else
		result = first_number / second_number;

	std::cout << "Result of arithmetic operation is " << result << std::endl;

}