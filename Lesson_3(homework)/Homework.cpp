#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string firstname;
	string lastname;
	string surname;
	int day;
	int month;
	int year;
public:
	Human()
	{
		firstname = "None";
		lastname = "None";
		surname = "None";
		day = -1;
		month = -1;
		year = -1;
	}
	Human(string firstname, string lastname, string surname, int day, int month, int year)
	{
		this->firstname = firstname;
		this->lastname = lastname;
		this->surname = surname;
		this->day = day;
		this->month = month;
		this->year = year;
	}
	Human(Human& old_human)
	{
		firstname = old_human.firstname;
		lastname = old_human.lastname;
		surname = old_human.surname;
		day = old_human.day;
		month = old_human.month;
		year = old_human.year;
	}


};

class Apartment
{

};

class House
{

};

int main()
{


	return 0;
}