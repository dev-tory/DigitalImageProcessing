
// 201811291View.h: CMy201811291View 클래스의 인터페이스
//

#pragma once


class CMy201811291View : public CView
{
protected: // serialization에서만 만들어집니다.
	CMy201811291View() noexcept;
	DECLARE_DYNCREATE(CMy201811291View)

// 특성입니다.
public:
	CMy201811291Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMy201811291View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	int viewType;
	afx_msg void OnImgLoadBmp();
	afx_msg void OnRgbToHsi();
	afx_msg void OnDetectSkin();
};

#ifndef _DEBUG  // 201811291View.cpp의 디버그 버전
inline CMy201811291Doc* CMy201811291View::GetDocument() const
   { return reinterpret_cast<CMy201811291Doc*>(m_pDocument); }
#endif

