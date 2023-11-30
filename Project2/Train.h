#pragma once
#include<iostream>
#include<string>
#include<set>
#include<algorithm>
#include"Time_.h"
using namespace std;
class Train
{
protected:
	string number;
	Time_ departure;
	string station;
public:
	Train();
	Train(string number, Time_ departure, string station);
		

	void setNumber(string number);
	void setDeparture(Time_ departure);
	void setStation(string station);

	string getNumber()const;
	Time_ getDeparture()const;
	string getStation()const;


	void show()const;

	bool operator <(const Train& right)const;
};

