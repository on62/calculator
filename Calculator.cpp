//============================================================================
// Name        : Calculator.cpp
//============================================================================

#include <iostream>
#include "ConsoleLogger.h"
#include "View.h"
#include "Model.h"
#include "Presenter.h"
#include <gtkmm/main.h>

using namespace std;

int main(int argc, char *argv[]) {
    ConsoleLogger logger;
	View view (argc, argv, &logger);
	Model model;
	Presenter presenter (&view, &model, &logger);
	presenter.run();
	return 0;
}
