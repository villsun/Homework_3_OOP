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

	void Show_Human()
	{
		cout << "Firstname = " << firstname << endl;
		cout << "Lastname = " << lastname << endl;
		cout << "Surname = " << surname << endl;
		cout << "Day = " << day << endl;
		cout << "Month = " << month << endl;
		cout << "Year = " << year << endl;
	}

	string Get_Firstname()
	{
		return firstname;
	}

	string Get_Lastname()
	{
		return lastname;
	}

	string Get_Surname()
	{
		return surname;
	}

	int Get_Day()
	{
		return day;
	}

	int Get_Month()
	{
		return month;
	}

	int Get_Year()
	{
		return year;
	}

	void Set_Firstname()
	{
		cout << "Enter firstname:\n";
		cin >> firstname;
	}

	void Set_Lastname()
	{
		cout << "Enter lastname:\n";
		cin >> lastname;
	}

	void Set_Surtname()
	{
		cout << "Enter surname:\n";
		cin >> surname;
	}

	void Set_Day()
	{
		cout << "Enter day:\n";
		cin >> day;
	}

	void Set_Month()
	{
		cout << "Enter month:\n";
		cin >> month;
	}

	void Set_Year()
	{
		cout << "Enter year:\n";
		cin >> year;
	}

	void Add_Person()
	{
		void(Human:: * p_methon[6])() = { &Human::Set_Firstname, &Human::Set_Lastname,  &Human::Set_Surtname, &Human::Set_Day, &Human::Set_Month, &Human::Set_Year };
		for (int i = 0; i < 6; i++)
		{
			(this->*p_methon[i])();
		}
	}
};

class Apartment
{
private:
	Human* people;
	int number_apartament;
	int floor;
	int counter_people;
public:
	Apartment()
	{
		people = nullptr;
		int number_apartament = -1;
		int floor = -1;
		int counter_people = -1;
	}
	Apartment(Human* people, int number_apartament, int floor, int counter_people)
	{
		if (people != nullptr)
		{
			this->people = new Human[counter_people];
			for (int i = 0; i < counter_people; i++)
			{
				this->people[i] = people[i];
			}
		}
		else
		{
			people = nullptr;
		}
		
		this->number_apartament = number_apartament;
		this->floor = floor;
		this->counter_people = counter_people;
	}
	Apartment(Apartment& old_apartment)
	{
		number_apartament = old_apartment.number_apartament;
		floor = old_apartment.floor;
		counter_people = old_apartment.counter_people;
		if (old_apartment.people != nullptr)
		{
			people = new Human[counter_people];
			for (int i = 0; i < counter_people; i++)
			{
				people[i] = old_apartment.people[i];
			}
		}
		else
		{
			people = nullptr;
		}

	}
	~Apartment()
	{
		if (people!=nullptr)
		{
			delete[] people;
		}
	}


};

class House
{

};

int main()
{
	//Human person("FDSfs", "DFSDAF", "sfsdf", 123,123,123);
	////person.Add_Person();
	//person.Show_Human();
	//Human person_1 = person;
	//person.Show_Human();

	Human person[3];
	for (int i = 0; i < 3; i++)
	{
		person[i].Show_Human();
	}

	Apartment apartment_human(person, 10, 4, 3);

	Apartment apartment_human_1 = apartment_human;
	return 0;
}