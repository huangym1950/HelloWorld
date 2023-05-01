#include <iostream>// Ô¤´¦ÀíÖ¸Áî

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
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]£º" << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarn)
			std::cout << "[WARN]£º" << message << std::endl;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]£º" << message << std::endl;
	}
};

//int main()
//{
//	int iText = 10;
//	int *ptr = &iText;
//	iText++;
//	iText = iText + 2;
//	Log log;
//	void *ptrs = &log;
//	log.SetLevel(log.LogLevelError);
//	log.Info("this is a info message!");
//	log.Warn("this is a warning message!");
//	log.Error("this is a error message!");
//
//	std::cout << "Hello World!" << std::endl;
//	std::cin.get();
//}