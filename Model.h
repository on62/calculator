/*
 * Model.h
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#ifndef MODEL_H_
#define MODEL_H_
#include <iostream>
#include <vector>
#include "OperationBase.h"

using namespace std;

class Model {
private:
    double _value1;
    double _value2;
    std::vector<OperationBase*> _operations;
    OperationBase* _currentOperation;

public:
    Model();
    double calculate();
    void setValue1(double);
    void setValue2(double);
    void setCurrentOperation(std::string);
    std::vector<OperationBase*> getOperations();
};

#endif /* MODEL_H_ */
