#include <iostream>
#include <set>
using namespace std;

class Log{
public:
    const  int LogLevelError = 0;
    const  int LogLevelWarning = 1;
    const  int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;
public:
    void SetLevel(int Level)
    {
        m_LogLevel = Level;
    }
    void Error(char* message)
    {
        if(m_LogLevel >= LogLevelError)
            std::cout<< "[ERROR]: "<< message << std::endl;
    }
    void Warn(char* message)
    {
        if(m_LogLevel >= LogLevelWarning)
            std::cout<< "[WARNING]: "<< message << std::endl;
    }
    void Info(char* message)
    {
        if(m_LogLevel >= LogLevelInfo)
            std::cout<< "[INFO]: "<< message << std::endl;
    }
};
int main()
{
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    return 0;
}
