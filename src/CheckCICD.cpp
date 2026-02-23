//============================================================================
// Name        : CheckCICD.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CheckCICD.h"

using namespace std;


Check::Check()
{
    bIsFirstExecution = false;
}

Check::~Check()
{
    //Nothing to do
}

void Check::MainFunction()
{
    cout << "Called MainFunction" << endl;
    bIsFirstExecution = true;
}

int main()
{
    cout << "calling main" << endl;
    return 0;
}
