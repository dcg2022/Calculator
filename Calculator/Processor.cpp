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


std::string Processor::toHexaDecimalString(float number)
{
	std::string ans = "";
	while (number > 0)
	{
		int rem = (int)number % 16;
		if (rem < 10)
		{
			ans = std::to_string(rem) + ans;
		}
		else if (rem == 10)
		{
			ans = "A" + rem;
		}
		else if (rem == 11)
		{
			ans = "B" + rem;
		}
		else if (rem == 12)
		{
			ans = "C" + rem;
		}
		else if (rem == 13)
		{
			ans = "D" + rem;
		}
		else if (rem == 14)
		{
			ans = "E" + rem;
		}
		else if (rem == 15)
		{
			ans = "F" + rem;
		}
		number = number / 16;
	}
	return "0x" + ans;
}