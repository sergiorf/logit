#include <LogIt/Logger.h>

int main()
{
    //auto console_sink = LogIt::ConsoleSink();

    auto logger = LogIt::Logger();
    
    logger.Info("test");
}

