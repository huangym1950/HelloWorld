#include <iostream>// ‘§¥¶¿Ì÷∏¡Ó
#include "Log.h"
#include "Common.h"

#ifndef _LOG_H
#define _LOG_H

void InitLog();
void Log(const char* message);

#endif

void InitLog()
{
	Log("Initialized Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}