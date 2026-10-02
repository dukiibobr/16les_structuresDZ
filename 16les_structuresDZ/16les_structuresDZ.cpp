#include <iostream>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
	char monthName[15];
};

struct worker
{

	char name[20];
	char surname[20];
	char position[20];
	double salary;

	date birthdate;
	date hireDate;
};


worker inputWorker(worker worker) {
	cout << "enter name: "; cin >> worker.name;
	cout << "enter surname: "; cin >> worker.surname;
	cout << "enter position: "; cin >> worker.position;
	cout << "enter salary: "; cin >> worker.salary;

	cout << "enter birthdate day: "; cin >> worker.birthdate.day;
	cout << "enter birthdate month: "; cin >> worker.birthdate.month;
	cout << "enter birthdate year: "; cin >> worker.birthdate.year;

	cout << "enter hireDate day: "; cin >> worker.hireDate.day;
	cout << "enter hireDate month: "; cin >> worker.hireDate.month;
	cout << "enter hireDate year: "; cin >> worker.hireDate.year;

	return worker;
}

void showWorker(worker& worker) {
	cout << "name: " << worker.name << endl;
	cout << "surname: " << worker.surname << endl;
	cout << "position: " << worker.position << endl;
	cout << "salary: " << worker.salary << endl;

	cout << "birthdate day: " << worker.birthdate.day << "/" << worker.birthdate.month << "/" << worker.birthdate.year << endl;

	cout << "hireDate day: " << worker.hireDate.day << "/" << worker.hireDate.month << "/" << worker.hireDate.year << endl;
}

struct washingMachine {
	char firm[20];
	char color[20];
	float width;
	float length;
	float height;
	int power;
	float speed;
	float temp;
};


washingMachine inputMachine(washingMachine& machine) {
	cout << "enter firm: "; cin >> machine.firm;
	cout << "enter color: "; cin >> machine.color;
	cout << "enter width: "; cin >> machine.width;
	cout << "enter length: "; cin >> machine.length;
	cout << "enter height: "; cin >> machine.height;
	cout << "enter power: "; cin >> machine.power;
	cout << "enter speed: "; cin >> machine.speed;
	cout << "enter temp: "; cin >> machine.temp;
	return machine;
}

void showMachine(washingMachine& machine) {
	cout << "firm: " << machine.firm << endl;
	cout << "color: " << machine.color << endl;
	cout << "width: " << machine.width << endl;
	cout << "length: " << machine.length << endl;
	cout << "height: " << machine.height << endl;
	cout << "power: " << machine.power << endl;
	cout << "speed: " << machine.speed << endl;
	cout << "temp: " << machine.temp << endl;
}

struct praska
{
	char firm[20];
	char model[20];
	char color[20];
	float tempMin;
	float tempMax;
	bool steam;
	int power;
};
praska inputPraska(praska& pras) {
	cout << "enter firm: "; cin >> pras.firm;
	cout << "enter model: "; cin >> pras.model;
	cout << "enter color: "; cin >> pras.color;
	cout << "enter tempMin: "; cin >> pras.tempMin;
	cout << "enter tempMax: "; cin >> pras.tempMax;
	cout << "enter steam: "; cin >> pras.steam;
	cout << "enter power: "; cin >> pras.power;

	return pras;
}
void showPraska(praska& pras) {
	cout << "firm: " << pras.firm << endl;
	cout << "model: " << pras.model << endl;
	cout << "color: " << pras.color << endl;
	cout << "tempMin: " << pras.tempMin << endl;
	cout << "tempMax: " << pras.tempMax << endl;
	cout << "steam: " << pras.steam << endl;
	cout << "power: " << pras.power << endl;
}

struct boiler
{
	char firm[20];
	char color[20];
	int power;
	int volume;
	int temp;
};
boiler inputBoiler(boiler& boil) {
	cout << "enter firm: "; cin >> boil.firm;
	cout << "enter color: "; cin >> boil.color;
	cout << "enter power: "; cin >> boil.power;
	cout << "enter volume: "; cin >> boil.volume;
	cout << "enter temp: "; cin >> boil.temp;

	return boil;
}
void showBoiler(boiler& boil) {
	cout << "firm: " << boil.firm << endl;
	cout << "color: " << boil.color << endl;
	cout << "power: " << boil.power << endl;
	cout << "volume: " << boil.volume << endl;
	cout << "temp: " << boil.temp << endl;
}





struct car
{
	char color[20];
	char model[20];
	char number[9];
};
car inputCar(car& car1) {
	cout << "enter color: "; cin >> car1.color;
	cout << "enter model: "; cin >> car1.model;
	cout << "enter number: "; cin >> car1.number;

	return car1;
}
void showCar(car& car1) {
	cout << "color: " << car1.color << endl;
	cout << "model: " << car1.model << endl;
	cout << "number: " << car1.number << endl;
}
void showAllCars(car cars[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "car " << i + 1 << endl;
		showCar(cars[i]);
	}
}

void editCar(car cars[], int index) {
	inputCar(cars[index]);
}

bool sameNum(char a[], char b[]) {
	for (int i = 0; a[i]!='\0' or b[i]!='\0'; i++)
	{
		if (a[i]!=b[i])
		{
			return false;
		}
	}
	return true;

}

void findCarByNum(car cars[], int size,char number[]) {
	for (int i = 0; i < size; i++)
	{
		if (sameNum(cars[i].number,number))
		{
			showCar(cars[i]);
			return;
		}
	}
	cout<<"car not found"<<endl;
}

int main()
{

	//int num = 100;
	//date birthdate = { 25,12,2000,"december"};
	//cout << "===================my bithday=====================" << endl;
	//cout << "day: " << birthdate.day << " month: " << birthdate.month << " year: " << birthdate.year << " name of month: " << birthdate.monthName << endl;

	//date friend_birthday;
	//cout << "enter day:";
	//cin >> friend_birthday.day;
	//cout << "enter month:";
	//cin >> friend_birthday.month;
	//cout << "enter year:";
	//cin >> friend_birthday.year;
	//cout << "enter monthName:";
	//cin >> friend_birthday.monthName;
	//cout << "day: " << friend_birthday.day << " month: " << friend_birthday.month << " year: " << friend_birthday.year << " name of month: " << friend_birthday.monthName << endl;

	/*worker worker1 = { "oleg","bembo","trubocist",14000,{11,5,1991},{2,2,1992}};
	showWorker(worker1);*/

	/*worker newWorker = {};
	newWorker=inputWorker(newWorker);
	showWorker(newWorker);*/

	/*date event = {26,10,2026,"October"};
	cout << event.day << endl;
	cout << event.month << endl;
	cout << event.year << endl;
	cout << event.monthName << endl;

	date newEvent;
	newEvent = event;

	cout << newEvent.day << endl;
	cout << newEvent.month << endl;
	cout << newEvent.year << endl;
	cout << newEvent.monthName << endl;

	date* ptr = nullptr;
	ptr = &event;
	cout << ptr->day << endl;

	int a;
	char b;
	double c;
	int* p;
	cout << "sizeof int-->" << sizeof(int) << endl;
	cout << "sizeof int-->" << sizeof(a) << endl;
	cout << "sizeof char-->" << sizeof(b) << endl;
	cout << "sizeof double-->" << sizeof(c) << endl;
	cout << "sizeof p-->" << sizeof(p) << endl;
	cout << "sizeof date-->" << sizeof(event) << endl;
	cout << "sizeofworker-->" << sizeof(worker) << endl;*/


	//1

	//washingMachine machine = { "lg","white",1,1,1,30,40,100 };
	//showMachine(machine);

	//washingMachine machine1 = {};
	//inputMachine(machine1);
	//showMachine(machine1);

	//2
	//praska pras = { "lg","2d","red",1,90,1,90 };

	//showPraska(pras);

	//praska pras1 = {};
	//inputPraska(pras1);
	//showPraska(pras1);

	//3

	//boiler boil = { "lg","red",40,9,100 };
	//showBoiler(boil);

	//boiler boil1 = {};
	//inputBoiler(boil1);
	//showBoiler(boil1);

	//4

	car car1 = {"red","pasat","12345"};
	showCar(car1);
	cout << "=================================" << endl;
	car car11 = {};
	inputCar(car11);
	showCar(car11);
	cout << "=================================" << endl;
	car cars[10] = {};

	for (int i = 0; i < 10; i++)
	{
		cout << "car " << i + 1 << endl;
		inputCar(cars[i]);
	}
	showAllCars(cars, 10);

	cout << "=================================" << endl;

	int index;
	cout << "enter number of car to edit: " << endl;
	cin >> index;

	editCar(cars, index - 1);
	cout << "=================================" << endl;
	char number[9];
	cout << "enter number to find: ";
	cin >> number;

	findCarByNum(cars,10, number);
	cout << "=================================" << endl;

	


	



}