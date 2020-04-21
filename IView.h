/*
 * IView.h
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */

#ifndef IVIEW_H_
#define IVIEW_H_
#include "IPresenter.h"
#include <iostream>

class IView{
public:
    virtual ~IView(){};
    virtual void show() = 0;
    virtual bool isValid() = 0;
    virtual void setPresenter(IPresenter*) = 0;
    virtual void setResult(double value) = 0;
    virtual void addOperation(std::string id, std::string name) = 0;
    virtual void setCurrentOperation() = 0;
};

#endif /* IVIEW_H_ */
