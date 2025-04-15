#include "Logger.h"

Logger* Logger::instance = nullptr;

Logger* Logger::getInstance() {
    if (instance == nullptr) {
        instance = new Logger();
    }
    return instance;
}

void Logger::addLog(const std::string& message) {
    log += message + "\n";
}

std::string Logger::getLog() const {
    return log;
}
