#pragma once
#include <iostream>

namespace BaseFunc {
	
	class Application
	{
	public:
		Application();
		~Application();
		Application(int count, std::string logs, std::string sence, int errcode);

	public:
		void init(int count, std::string logs, std::string sence, int errcode);
		void login();
		void logout();

	private:
		int _errCode;
		std::string m_Sence;

	public:
		int m_Count;
		std::string m_Logs;
	};

}