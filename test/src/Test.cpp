#include <iostream>
#include "Test.h"

void Test_MainFunction()
{
	CheckCICD CheckLocal();
	
	CheckLocal.MainFunction();
	
	std::cout << "Test ran" << std::endl;
}
