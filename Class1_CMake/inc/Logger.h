#ifndef LOGGER_H
#define LOGGER_H

#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

using loggerPtr = std::shared_ptr<spdlog::logger>;

namespace Logger
{

class LoggerClass
{
    public:
    LoggerClass(){};
    ~LoggerClass(){};


    void initialize(char *logFile);
    void log(spdlog::level::level_enum level, char *log_msg);

    loggerPtr logger;
    spdlog::level::level_enum level;

};
}
#endif //LOGGER_H