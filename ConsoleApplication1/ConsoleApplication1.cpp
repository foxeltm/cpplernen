#include <iostream>
#include <ctime>
#include <string>

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInf = 2;
private:
    int m_LogLevel = LogLevelInf;
public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]" << message << std::endl;
    }

    void Warn(const char* message)
    {
        if(m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]" << message << std::endl;
    }

    void Inf(const char* message)
    {
        if (m_LogLevel >= LogLevelInf)
            std::cout << "[INFO]" << message << std::endl;
    }
};

int main() 
{
    Log log;
    log.SetLevel(log.LogLevelError);
    log.Warn(" hello");
    log.Error(" lord sigma");
    log.Inf(" EYYYYYYY");


    std::cin.get();
}
