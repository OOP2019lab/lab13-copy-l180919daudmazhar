// l180919 Lab 13.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

//template<typename t>
//t GetMax(t t1, t t2)
//{
//	if (t1>t2)
//		return t1;
//	else
//		return t2;
//}
//
//template<typename r>
//
//r GetMin(r t1,r t2)
//{
//	 if (t2>t1)
//		return t1;
//	 else 
//		return t2;
//}

template <typename a, typename b>
a GetMax(a a1, b b1)
{
	if (a1>b1)
		return a1;
	else
		return b1;
}

template <typename temp1, typename temp2>
temp1 GetMin(temp1 x,temp2 y)
{
	if (x>=y)
		return y;
	else return x;
}

int main()
{
  //int i=5, j=6, k;
  //long l=10, m=5, n;
  //k=GetMax<int>(i,j);
  //n=GetMin<long>(l,m);
  //cout << k << endl;
  //cout << n << endl;


  char i='Z';
  int  j=6, k;
  long l=10, m=5, n;
  k=GetMax(i,m);
  n=GetMin(j,l);
  cout << k << endl;
  cout << n << endl;

	
	return 0;
}

