#pragma once
#include "Animals.h"
#include "Animals.h"
#include "Beast.h"
#include "ZooExeption.h"
#include "Fish.h"
#include "Bird.h"
class Aviary
{
protected:
	Animals** arr;
	int max;//max  (get
	int size;//since now an

public:
	Aviary(int max);
	~Aviary();


	void add(Animals* obj);
	void dell(string name);

	int findByName(string name);


	void showInfo()const&;
};

