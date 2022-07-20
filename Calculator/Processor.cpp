#include "Processor.h"
#include <vector>
#include <string>
#include <sstream>
using namespace std;

Processor* Processor::processor = nullptr;

Processor* Processor::GetInstance()
{
	if (processor == nullptr)
	{
		processor = new Processor();
	}

	return processor;
}

Processor::Processor()
{

}



float Processor::Operators(float num1, float num2, char op)
{
	float ans = 0;
	switch (op)
	{
	case '+':
		ans = num1 + num2;
		break;
	case '*':
		ans = num1 * num2;
		break;
	case '-':
		ans = num1 - num2;
		break;
	case '/':
		ans = num1 / num2;
		break;
	case '%':
		ans = (int)num1 % (int)num2;
		break;

	}

	return ans;
}

std::string Processor::toBinaryString(float number)
{
	std::string ans = "";
	for (int i = 0; i < 16; i++)
	{
		ans = std::to_string((int)number % 2) + ans;
		number = number / 2;
	}

	return ans;
}

