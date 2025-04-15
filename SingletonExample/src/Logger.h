#pragma once
#include <string>

class Logger {
private:
    std::string log;
    static Logger* instance;

    // Private constructor
    Logger() = default;

public:
    static Logger* getInstance();

    void addLog(const std::string& message);
    std::string getLog() const;
};
