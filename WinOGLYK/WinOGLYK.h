
// WinOGLYK.h : WinOGLYK アプリケーションのメイン ヘッダー ファイル
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"       // メイン シンボル


// CWinOGLYKApp:
// このクラスの実装については、WinOGLYK.cpp を参照してください
//

class CWinOGLYKApp : public CWinApp
{
public:
	CWinOGLYKApp() noexcept;


// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWinOGLYKApp theApp;
