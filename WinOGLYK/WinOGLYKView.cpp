
// WinOGLYKView.cpp : CWinOGLYKView クラスの実装
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS は、プレビュー、縮小版、および検索フィルター ハンドラーを実装している ATL プロジェクトで定義でき、
// そのプロジェクトとのドキュメント コードの共有を可能にします。
#ifndef SHARED_HANDLERS
#include "WinOGLYK.h"
#endif

#include "WinOGLYKDoc.h"
#include "WinOGLYKView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWinOGLYKView

IMPLEMENT_DYNCREATE(CWinOGLYKView, CView)

BEGIN_MESSAGE_MAP(CWinOGLYKView, CView)
END_MESSAGE_MAP()

// CWinOGLYKView コンストラクション/デストラクション

CWinOGLYKView::CWinOGLYKView() noexcept
{
	// TODO: 構築コードをここに追加します。

}

CWinOGLYKView::~CWinOGLYKView()
{
}

BOOL CWinOGLYKView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return CView::PreCreateWindow(cs);
}

// CWinOGLYKView 描画

void CWinOGLYKView::OnDraw(CDC* /*pDC*/)
{
	CWinOGLYKDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: この場所にネイティブ データ用の描画コードを追加します。
}


// CWinOGLYKView の診断

#ifdef _DEBUG
void CWinOGLYKView::AssertValid() const
{
	CView::AssertValid();
}

void CWinOGLYKView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWinOGLYKDoc* CWinOGLYKView::GetDocument() const // デバッグ以外のバージョンはインラインです。
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWinOGLYKDoc)));
	return (CWinOGLYKDoc*)m_pDocument;
}
#endif //_DEBUG


// CWinOGLYKView メッセージ ハンドラー
