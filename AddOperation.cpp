/*
 * AddOperation.cpp
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#include "AddOperation.h"
const char* AddOperation::Name = "add";

AddOperation::AddOperation(): OperationBase(AddOperation::Name, "+") {
}

double AddOperation::execute(double value1, double value2) {
    return value1 + value2;
}

