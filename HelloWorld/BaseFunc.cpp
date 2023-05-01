#include "BaseFunc.h"


BaseFunc::Application::Application()
{

}

BaseFunc::Application::~Application()
{
	std::cout << "m_Count = " << m_Count << "\t_errCode = " << _errCode << "\tm_Logs = " << m_Logs.c_str() << "\tm_Sence = " << m_Sence.c_str() << std::endl;
}

BaseFunc::Application::Application(int count, std::string logs, std::string sence, int errcode) :m_Sence(sence), m_Logs(logs), _errCode(errcode), m_Count(count)
{

}

void BaseFunc::Application::init(int count, std::string logs, std::string sence, int errcode)
{
	this->m_Count = count;
	this->m_Logs = logs;
	this->m_Sence = sence;
	this->_errCode = errcode;
}

void BaseFunc::Application::login()
{
	std::cout << "m_Count = " << m_Count << "\t_errCode = " << _errCode << "\tm_Logs = " << m_Logs.c_str() << "\tm_Sence = " << m_Sence.c_str() << std::endl;
}

void BaseFunc::Application::logout()
{

}


#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <regex>
#include <math.h>

#include <Eigen/Dense>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;
using std::exception;

//using Eigen::MatrixX2d;
//using Eigen::Matrix2;
//using Eigen::MatrixXd;

int main(int argc, char* argv[])
{

	// 需要校验的字符串
	std::string str{ "0123456789AZ01234567" };

	// 定义校验的正则表达式
	std::regex regex_pattern("^[0-9]{9}[a-zA-Z]{2}[0-9]{6}$");

	// 匹配校验
	std::regex_match("0123456789AZ012345z7", regex_pattern) ? std::cout << "校验通过" << std::endl : std::cout << "校验失败" << std::endl;
	std::regex_match("0123d56789AZ01234567", regex_pattern) ? std::cout << "校验通过" << std::endl : std::cout << "校验失败" << std::endl;
	std::regex_match("0123456789AZ01.34567", regex_pattern) ? std::cout << "校验通过" << std::endl : std::cout << "校验失败" << std::endl;
	std::regex_match("012345,789AZ01234567", regex_pattern) ? std::cout << "校验通过" << std::endl : std::cout << "校验失败" << std::endl;
	std::regex_match("0123456789AZ012345067", regex_pattern) ? std::cout << "校验通过" << std::endl : std::cout << "校验失败" << std::endl;
	std::regex_match("012345678AZ012345", regex_pattern) ? std::cout << "校验通过" << std::endl : std::cout << "校验失败" << std::endl;
	
	if (std::regex_match(str, regex_pattern)) {
		std::cout << "校验通过" << std::endl;
	}
	else {
		std::cout << "校验失败" << std::endl;
	}



	//Eigen::MatrixXd m(2, 2);a
	//m(0, 0) = 3;
	//m(1, 0) = 2.5;
	//m(0, 1) = -1;
	//m(1, 1) = m(1, 0) + m(0, 1);
	//std::cout << m << std::endl;

	//Eigen::Matrix2d a;
	//a << 1, 2,
	//	3, 4;
	//Eigen::Matrix2d b;
	//b << 5, 6,
	//	7, 8;
	//std::cout << "a * b =\n" << a * b << std::endl;


	//BaseFunc::Application app;
	//app.init(12, "logLevel", "senceSupper", 10);
	//app.login();

	cin.get();
}
