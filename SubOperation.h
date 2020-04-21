/*
 * SubOperation.h
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#ifndef SUBOPERATION_H_
#define SUBOPERATION_H_

#include "OperationBase.h"

class SubOperation: public virtual OperationBase {
public:
    SubOperation();
    virtual double execute(double value1, double value2);
};

#endif /* SUBOPERATION_H_ */
