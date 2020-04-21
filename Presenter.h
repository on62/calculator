/*
 * Presenter.h
 *
 *  Created on: Jun 28, 2014
 *      Author: user1
 */

#ifndef PRESENTER_H_
#define PRESENTER_H_
#include "IPresenter.h"
#include "IView.h"
#include "Model.h"
#include "ILogger.h"

class Presenter: public virtual IPresenter {
private:
	IView *_view;
	Model *_model;
    ILogger *_logger;

    void addOperationsToView(std::vector<OperationBase*> operations);

public:
	Presenter(IView *view, Model *model, ILogger *logger);
	virtual void run();
	virtual void calculate();
    virtual void setValue1(double);
    virtual void setValue2(double);
    virtual void setCurrentOperation(std::string);
};

#endif /* PRESENTER_H_ */
