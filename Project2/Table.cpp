#include "Table.h"

void Table::addTrain(Train obj)
{
	table.insert(obj);
}

void Table::showTable() const
{
	set<Train>::iterator it;
	for (it = table.begin();  it != table.end(); it++)
	{
		it->show();
		cout << endl;
	}
}

void Table::searchByNumber(string number) const
{
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
		if (it->getNumber() == number) {
			it->show();
			return;
		}
	}
	cout << "No one...:(\n";
}

void Table::nearestTrain() const
{
	Time_ now;
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
		if (it->getDeparture() > now) {
			it->show();
			return;
		}
	}
	cout << "No one...:(\n";
}

void Table::cancelTrain(string number)
{
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++) {
		if (it->getNumber() == number)
		{
			cout << "Train: " << it->getStation() << "Canceled" << endl;
			table.erase(it);
			return;
		}
	}
}

void Table::editDepartureTime(string number, Time_ newDeparture)
{
	set<Train>::iterator it;
	Train copy;
	bool edit = false;

	for (it = table.begin(); it != table.end(); it++) {
		if (it->getNumber() == number)
		{
			 
			copy.setDeparture(newDeparture);
			copy.setStation(it->getStation());
			copy.setNumber(it->getNumber());
			table.erase(it);
			edit = true;
			break;
		}
	}
	if (edit) {
		table.insert(copy);
		cout << "Edit time\n";
	}
}

