#include "Logger.h"

using namespace std;
using namespace Logger;

int main()
{
    LoggerClass logger;
    logger.initialize((char*)"log.txt");
    logger.log(spdlog::level::level_enum::info, (char*)"Hello world");
    return 0;
}