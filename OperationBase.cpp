/*
 * Operation.cpp
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#include "OperationBase.h"

OperationBase::OperationBase(std::string id, std::string name)
: _id(id), _name(name){
}

std::string OperationBase::getId() {
    return _id;
}

std::string OperationBase::getName() {
    return _name;
}
