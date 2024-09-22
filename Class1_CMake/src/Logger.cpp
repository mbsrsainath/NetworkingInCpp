#include <iostream>
#include "Logger.h"
using namespace std;


// using loggerPtr = shared_ptr<spdlog::logger>;

void Logger::LoggerClass::initialize(char *logFile)
{
    auto basic_file_sink = make_shared<spdlog::sinks::basic_file_sink_st>(logFile, true);
    logger = make_shared<spdlog::logger>("mylogger", basic_file_sink);
}

void Logger::LoggerClass::log(spdlog::level::level_enum level, char *log_msg)
{
    logger->log(level, log_msg);
}

