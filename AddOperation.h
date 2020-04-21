/*
 * AddOperation.h
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#ifndef ADDOPERATION_H_
#define ADDOPERATION_H_

#include "OperationBase.h"

class AddOperation: public virtual OperationBase {
public:
	static const char *Name;
    AddOperation();
    virtual double execute(double value1, double value2);
};

#endif /* ADDOPERATION_H_ */
