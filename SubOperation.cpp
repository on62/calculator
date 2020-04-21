/*
 * SubOperation.cpp
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#include "SubOperation.h"

SubOperation::SubOperation(): OperationBase("sub", "-") {
}

double SubOperation::execute(double value1, double value2) {
    return value1 - value2;
}
