#pragma once
#include <iostream>
#include <string>
#include<fstream>
using namespace std;
class Animals
{
protected:
	string Name;
	string Breed;
	bool predator;
public:
	Animals();
	Animals(string Name,
	string Breed,bool predator);
	virtual ~Animals();

	string getName()const;
	string getBreed()const;

	void setName(string n);
	void setBreed(string n);

	bool getPredator()const;
	void setPredator(bool n);

	virtual void Show();
	virtual string Type();



	virtual void Save(ofstream& file);
	virtual void Load(ifstream& file);
};

