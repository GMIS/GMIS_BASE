﻿/*
*
* author: ZhangHongBing(hongbing75@gmail.com)  
*/

#pragma warning (disable:4786)

#include "PhysicSpace.h"
#include "MainFrame.h"
#include "MainBrain.h"

CMainBrain*  GetBrain();
CMainFrame*  GetGUI();


tstring GetCurrentDir();
tstring GetTempDir();

const UINT WM_ROCK_TDL_SHOWWINDOW = ::RegisterWindowMessage(_T("WM_GMIS_TDL_SHOWWINDOW")); //用于单实例
