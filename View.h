/*
 * View.h
 *
 *  Created on: Jun 28, 2014
 *      Author: user1
 */

#ifndef VIEW_H_
#define VIEW_H_
#include <gtkmm.h>
#include <iostream>
#include "IView.h"
#include "ILogger.h"
#include "IPresenter.h"

class View: public virtual IView {
private:
    static const char* APPLICATION_NAME;
    static const char* LAYOUT_FILE_NAME;
    ILogger *_logger;
    bool _isValid;
    Glib::RefPtr<Gtk::Application> _app;
    Glib::RefPtr<Gtk::Builder> _builder;
    Gtk::Window *_appWindow;
    Gtk::SpinButton *_numValue1;
    Gtk::SpinButton *_numValue2;
    Gtk::ComboBoxText *_lstOperation;
    Gtk::Label *_lblResult;
	IPresenter *_presenter;
    void closeApplication();
    Glib::RefPtr<Gtk::Builder> createBuilder(const std::string& layoutFileName);
    void createApplication(int argc, char** argv, const char* applicationName);
    std::string toString(double value);
	template <class T_handler> void bindButtonOnClick(const std::string& widgetName, T_handler* obj, void (T_handler::*func)(void));
    template <class T_handler> Gtk::SpinButton* bindNumValueUpdate(const std::string&  widgetName, T_handler* obj, void (T_handler::*func)(void));
    template <class T_handler, class T_widget> T_widget* bindWidgetToSignal(const std::string&  widgetName,
                                                                        Glib::SignalProxy0<void> (T_widget::*signal)(void),
                                                                        T_handler* obj, void (T_handler::*func)(void));
    template <class T_handler> Gtk::ComboBoxText* bindComboBoxOnChange(const std::string& widgetName, T_handler* obj, void (T_handler::*func)(void));
	void valueUpdated(Gtk::SpinButton* numButton, void (IPresenter::*setValueFunc)(double));
	void value1Updated();
	void value2Updated();
	void operationUpdated();
    void initWidgets();

	struct LayoutEntityNames{
        static const char* APPLICATION_WINDOW;
        static const char* VALUE1;
        static const char* VALUE2;
        static const char* OPERATIONS_LIST;
        static const char* RESULT_BUTTON;
        static const char* RESULT_VALUE;
	};
public:
	View(int, char**, ILogger*);
	virtual ~View();
	virtual void show();
	virtual bool isValid();
	virtual void setPresenter(IPresenter*);
	virtual void setResult(double value);
    virtual void addOperation(std::string id, std::string name);
    virtual void setCurrentOperation();
};

#endif /* VIEW_H_ */
