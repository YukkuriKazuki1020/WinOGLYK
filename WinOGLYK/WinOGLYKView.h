
// WinOGLYKView.h : CWinOGLYKView クラスのインターフェイス
//

#pragma once


class CWinOGLYKView : public CView
{
protected: // シリアル化からのみ作成します。
	CWinOGLYKView() noexcept;
	DECLARE_DYNCREATE(CWinOGLYKView)

// 属性
public:
	CWinOGLYKDoc* GetDocument() const;

// 操作
public:

// オーバーライド
public:
	virtual void OnDraw(CDC* pDC);  // このビューを描画するためにオーバーライドされます。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 実装
public:
	virtual ~CWinOGLYKView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // WinOGLYKView.cpp のデバッグ バージョン
inline CWinOGLYKDoc* CWinOGLYKView::GetDocument() const
   { return reinterpret_cast<CWinOGLYKDoc*>(m_pDocument); }
#endif

