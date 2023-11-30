#include"Table.h"
int main() {
	Table Kiev;
	Kiev.addTrain(Train("1243", Time_(12, 0, 0), "Lviv"));
	Kiev.addTrain(Train("1111", Time_(13, 0, 0), "Kharkiv"));
	Kiev.addTrain(Train("2222", Time_(16, 0, 0), "Lyzjk"));
	Kiev.addTrain(Train("4444", Time_(2, 0, 0), "dnepro"));
	Kiev.addTrain(Train("5555", Time_(10, 0, 0), "zetomer"));
	Kiev.showTable();
	cout << "------------\n";
	Kiev.cancelTrain("4444");
	Kiev.editDepartureTime("1111", Time_(10, 0, 0));
	Kiev.showTable();
}