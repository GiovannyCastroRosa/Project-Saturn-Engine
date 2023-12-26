#pragma once

#ifndef _SYSTEMCLASS_H_
#define _SYSTEMCLASS_H_

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

#include "../header/InputClass.h"
#include "../header/ApplicationClass.h"




class SystemClass
{
private:

	//Variables////////
	LPCWSTR		 m_applicationName;
	HINSTANCE	 m_hinstance;
	HWND		 m_hwnd;

	InputClass*			m_Input;
	ApplicationClass*	m_Application;
	////////////////
	
	//Functions////////
	bool Frame();
	void InitializeWindows(int& screenWidth, int& screenHeight);
	void ShutdownWindows();
	///////////////////
public:
	
	//Functions////////
	SystemClass();
	SystemClass(const SystemClass&);
	~SystemClass();

	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);
	
};


static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

static SystemClass* ApplicationHandle = 0;

#endif