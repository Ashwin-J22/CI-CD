/*
 * CheckCICD.h
 *
 *  Created on: Feb 23, 2026
 *      Author: ajayachandran
 */

#ifndef CHECKCICD_H_
#define CHECKCICD_H_

#include <iostream>

class Check
{
public:
	virtual ~Check() = 0;
	explicit Check();
	bool bIsFirstExecution;
	void MainFunction();

};



#endif /* CHECKCICD_H_ */
