#include "Train.h"

Train::Train()
{
    number = "0";
    station = "0";
    departure = Time_();
}

Train::Train(string number, Time_ departure, string station)
{
    this->number = number;
    this->departure = departure;
    this->station = station;
}

void Train::setNumber(string number)
{
    this->number = number;
}

void Train::setDeparture(Time_ departure)
{
    this->departure = departure;
}

void Train::setStation(string station)
{
    this->station = station;
}

string Train::getNumber() const
{
    return number;
}

Time_ Train::getDeparture() const
{
    return departure;
}

string Train::getStation() const
{
    return station;
}

void Train::show() const
{
    cout << "Number:  " << number << endl;
    cout << "Time:    " << departure << endl;
    cout << "Station: " << station << endl;
}

bool Train::operator<(const Train& right) const
{
    return this->departure < right.departure;
}
