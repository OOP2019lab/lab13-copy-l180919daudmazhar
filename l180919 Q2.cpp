// l180919 Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;



template<typename t>
class Pair{

t values[2];

public:
	Pair(t t1, t t2)
	{
		values[0]=t1;
		values[1]=t2;
	}

	t GetMax()
	{
		if (values[0]>values[1])
			return values[0];
		else 
			return values[1];
	}

	t GetMin();
	friend ostream& operator << (ostream&out, Pair& p)
	{
		out << p.values[0] << " " << p.values[1] << endl;
		return out;
	}
};

template<typename t>
t Pair<t>::GetMin()
{
	if (values[0]<values[1])
		return values[0];
	else
		return values[1];
}
int main()
{

	Pair <double> myobject (1.012, 1.01234);
	cout<<myobject.GetMax()<<endl;
	cout<<myobject.GetMin()<<endl;
	cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
  return 0;
}

