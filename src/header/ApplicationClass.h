#pragma once

#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_

//#include <Windows.h>
#include "D3dClass.h"
#include "CameraClass.h"
#include "ModelClass.h"

#include "LightClass.h"

#include "fontshaderclass.h"
#include "fontclass.h"
#include "textclass.h"

#include "ShaderManagerClass.h"


#include "ImGuiClass.h"

#include "PositionClass.h"




//GRAPHIC Settings//////

const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.3f;
////////////////////////

enum groupLabel : std::size_t
{
	groupMap,
	groupPlayer,
	groupUI,
	groupEnemy
};

class ApplicationClass
{
private:

	D3DClass* m_Direct3D;
	CameraClass* m_Camera;
	ModelClass* m_Model;

	LightClass* m_Light;

	ShaderManagerClass* m_ShaderManager;

	ImGuiClass* m_gui;
	
	PositionClass* m_Position;

	bool Render(float);

public:
	ApplicationClass();
	ApplicationClass(const ApplicationClass& other);
	~ApplicationClass();

	bool Initialize(int screenWidth, int screenHight, HWND hwnd);
	void Shutdown();
	bool Frame();
	bool HandleInput(float, int);




};

#endif 