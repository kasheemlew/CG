// P2.h: interface for the CP2 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_P2_H__145EF1DB_B15F_4969_A6AF_8543C5550C3F__INCLUDED_)
#define AFX_P2_H__145EF1DB_B15F_4969_A6AF_8543C5550C3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CP2  
{
public:
	CP2();
	virtual ~CP2();
	CP2(double, double);
	friend CP2 operator + (const CP2 &, const CP2 &);
	friend CP2 operator - (const CP2 &, const CP2 &);
	friend CP2 operator * (const CP2 &, double);
	friend CP2 operator * (double, const CP2 &);
	friend CP2 operator / (const CP2 &, double);
	friend CP2 operator += (const CP2 &, const CP2 &);
	friend CP2 operator -= (const CP2 &, const CP2 &);
	friend CP2 operator *= (const CP2 &, double);
	friend CP2 operator /= (const CP2 &, double);
public:
	double x, y, w;
};

#endif // !defined(AFX_P2_H__145EF1DB_B15F_4969_A6AF_8543C5550C3F__INCLUDED_)
