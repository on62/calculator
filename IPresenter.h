/*
 * IPresenter.h
 *
 *  Created on: Jul 5, 2014
 *      Author: user1
 */

#ifndef IPRESENTER_H_
#define IPRESENTER_H_
#include <iostream>

using namespace std;

class IPresenter{
public:
    virtual ~IPresenter(){};
    virtual void run() = 0;
    virtual void calculate() = 0;
    virtual void setValue1(double) = 0;
    virtual void setValue2(double) = 0;
    virtual void setCurrentOperation(std::string) = 0;
};


#endif /* IPRESENTER_H_ */
