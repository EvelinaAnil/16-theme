#include <iostream>
#include "Animals.h"
#include "Beast.h"          
#include "Aviary.h"
#include "ZooExeption.h"
#include "Fish.h"             
#include "Bird.h"    
//-------------------------
//true-хищник false-не хищник
//-------------------------


int main() {
	Beast k("Romace", "Bear", true, "Forest");
	Fish o("", "Karp", false, "600 m");
	Fish f("Atir", "Pike", false, "3 m");
	Bird u("Vika", "orel", true, 300);
	Aviary p(2);
	 
	try
	{
		p.add(&o);
	}
	catch (ZooExeption* obj)
	{
		obj->ShowMessage();
	}
	try
	{
		p.add(&k);
	}
	catch (ZooExeption* obj)
	{
		obj->ShowMessage();
	}
	try
	{
		p.add(&f);
	}
	catch (ZooExeption* obj)
	{
		obj->ShowMessage();
	}
	try
	{
		p.add(&u);
	}
	catch (ZooExeption* obj)
	{
		obj->ShowMessage();
	}

	p.showInfo();
	cout << "\n\ndfdfdffddffdfffdfddffdffdf\n\n";
	string n;
	cout << "Name to find :";
	cin >> n;
	p.findByName(n);
	n = "";
	cout << "\n\ndfdfdffddffdfffdfddffdffdf\n\n";
	cout << "Name to delete:";
	cin >> n;
	p.dell(n);
	cout << "\n\ndfdfdffddffdfffdfddffdffdf\n\n";
	p.showInfo();
	//+ audio fish + audio bird + audio beast
}