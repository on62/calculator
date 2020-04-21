/*
 * Operation.h
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#ifndef OPERATION_H_
#define OPERATION_H_
#include <iostream>

using namespace std;

class OperationBase {
private:
    std::string _id;
    std::string _name;
public:
    OperationBase(std::string id, std::string name);
    virtual ~OperationBase(){};
    std::string getId();
    std::string getName();
    virtual double execute(double value1, double value2) = 0;
};

#endif /* OPERATION_H_ */
