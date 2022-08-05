#pragma once
#include <iostream>
#include <string>
using namespace std;
class ZooExeption
{


public:
	
	virtual void ShowMessage()=0;

};
class PredatorException
	:public ZooExeption {

public:
	virtual void ShowMessage()override {
		cout << "Error do not put predators in aviary " << endl;
	 }
};

class MaxCapacityException
	:public ZooExeption {

public:
	virtual void ShowMessage()override {
		cout << "Error there is too many beast in this aviary " << endl;
	}
};

class NameException
	:public ZooExeption {

public:
	virtual void ShowMessage()override {
		cout << "Error there is no name " << endl;
	}
};
