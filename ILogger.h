/*
 * ILogger.h
 *
 *  Created on: Jul 6, 2014
 *      Author: user1
 */
#ifndef ILOGGER_H_
#define ILOGGER_H_

#include <iostream>

using namespace std;

class ILogger {
public:
    virtual ~ILogger(){};
    virtual void logDebug(const std::string message) = 0;
    virtual void logInfo(const std::string message) = 0;
    virtual void logError(const std::string message) = 0;
    virtual void logError(const std::string title, const std::string message) = 0;
};

#endif /* ILOGGER_H_ */
