#include <iostream>

#define LOG(x) std::cout << x << std::endl



class Log
{
private:
	int m_LogLevel;
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Warn(const char* message)
	{

	}
};


int main()
{
	Log log;
	log.SetLevel(LogLevelWarning);
	log.Warn("hello!")
}
