#pragma once
#include"Train.h"
class Table
{
	set<Train> table;
public:
	void addTrain(Train obj);
	void showTable()const;
	void searchByNumber(string number)const;
	void nearestTrain()const;

	void cancelTrain(string number);
	void editDepartureTime(string number, Time_ newDeparture);
};

