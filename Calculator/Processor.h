#pragma once
#include "wx/wx.h"


class Processor
{
private:
	static Processor* processor;
	Processor();
	

public:
	static Processor* GetInstance();

	Processor(Processor& other) = delete;
	void operator=(Processor& other) = delete;

	float Operators(float num1, float num2, char op);
	
	std::string toBinaryString(float number);
	std::string toHexaDecimalString(float number);

};

