#include <iostream>

class Log
{
public:
	int LogLevelInfo = 0;
	int LogLevelWarn = 1;
	int LogLevelError = 2;

private:
	int m_LogLevel = LogLevelInfo;

public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Info(const char* message)
	{
		if(m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]:" << message << std::endl;
	}

	void Warn(const char* message)
	{
		if(m_LogLevel >= LogLevelWarn)
			std::cout << "[WARN]:" << message << std::endl;
	}

	void Error(const char* message)
	{
		if(m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]:" << message << std::endl;
	}

};


int s_Variable = 12;

int main()
{
	Log log;
	log.SetLevel(log.LogLevelWarn);
	log.Info("this is info message!");
	log.Warn("this is warning message!");
	log.Error("this is error message!");

	std::cout << s_Variable << std::endl;

	std::cin.get();
}