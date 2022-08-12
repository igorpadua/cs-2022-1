#include <iostream>

int main(int argc, char *argv[])
{
	if (argc < 3) {
		std::cout << "./main.cpp num1 num2" << '\n';
		return 1;
	}

	const int num1 = atoi(argv[1]);
	const int num2 = atoi(argv[2]);

	auto soma = [=]() -> int {
		return num1 + num2;
	};

	std::cout << num1 << '+' << num2 << '=' << soma() << '\n';

	return 0;
}
