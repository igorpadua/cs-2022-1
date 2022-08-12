#include <iostream>

template<typename T>

T maior(T x, T y)
{
	return (x > y) ? x : y;
}

int main(int argc, char *argv[])
{

	if (argc < 3) {
		std::cout << "./main num1 num2" << '\n';
		return 1;
	}

	const int num1 = atoi(argv[1]);
	const int num2 = atoi(argv[2]);

	std::cout << "O maior número é " << maior(num1, num2) << '\n';

	return 0;
}
