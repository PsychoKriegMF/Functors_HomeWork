#include <iostream>

int main() 
{
	setlocale(LC_ALL, "ru");

	double num1, num2;
	char sym;	
	double result;
	std::cout << "Введите два числа -> ";
	std::cin >> num1 >> num2;
	std::cout << std::endl;
	std::cout << "Выбирете одну из доступных операций: +,-,*,/ -> ";
	std::cin >> sym;
	
	switch (sym)
	{
		case '+':
			result = [](double num1, double num2)->double { return num1 + num2; }(num1, num2);
			std::cout << "Результат операции сложения:" << result << std::endl;
			break;
		case '-': 
			result = [](double num1, double num2)->double { return num1 - num2; }(num1, num2);
			std::cout << "Результат операции вычитания:" << result << std::endl;
			break;
		case '*': 
			result = [](double num1, double num2)->double { return num1 * num2; }(num1, num2);
			std::cout << "Результат операции умножения:" << result << std::endl;
			break;
		case '/': 
			result = [](double num1, double num2)->double { return num1 / num2; }(num1, num2);
			std::cout << "Результат операции деления:" << result << std::endl;
			break;
		default: std::cout << "Выбранная операция недоступна!\n";
	}
	
	return 0;
}