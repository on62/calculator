/*
 * Model.cpp
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#include "Model.h"
#include "AddOperation.h"
#include "SubOperation.h"

Model::Model(): _value1(0), _value2(0), _currentOperation(0) {
    _operations.push_back(new AddOperation);
    _operations.push_back(new SubOperation);
}

double Model::calculate() {
    return _currentOperation
           ? _currentOperation->execute(_value1, _value2)
           : 0;
}

void Model::setValue1(double value) {
    _value1 = value;
}

void Model::setValue2(double value) {
    _value2 = value;
}

void Model::setCurrentOperation(std::string  operationId) {
    for (std::vector<OperationBase*>::iterator itr = _operations.begin(); itr != _operations.end(); itr++){
        if((*itr)->getId() != operationId)
            continue;
        _currentOperation = *itr;
        break;
    }
}

std::vector<OperationBase*> Model::getOperations() {
    return _operations;
}
