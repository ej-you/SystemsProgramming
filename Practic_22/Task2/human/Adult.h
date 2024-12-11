#pragma once
#include <iostream>
#include "Human.h"

using namespace std;


class Adult : virtual public IHuman {
	public:
		// конструкторы
		Adult(string firstName, string lastName, int age, double weight, double height, string workPlace);
		Adult(string workPlace);
		Adult();

		// деструкторы
		virtual ~Adult();

		// перегруз
		friend ostream& operator<<(ostream& output, Adult instance);

		// геттеры и сеттеры
		void setWorkPlace(string workPlace);
		string getWorkPlace();

		// методы
		virtual void readFromConsole();
		virtual void writeToFile();
		virtual void print();

	private:
		string _workPlace;
};