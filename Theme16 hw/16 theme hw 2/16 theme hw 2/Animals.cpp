#include "Animals.h"

Animals::Animals()
{
    Name = "";
    Breed = "";
    predator = false;
}

Animals::Animals(string Name, string Breed, bool predator)
{
    this->Name = Name;
    this->Breed = Breed;
    this->predator = predator;
}

Animals::~Animals()
{
    cout << "~Animals";
}

string Animals::getName() const
{
    return Name;
}

string Animals::getBreed() const
{
    return Breed;
}

void Animals::setName(string n)
{
    this->Name = n;
}

void Animals::setBreed(string n)
{
    this->Breed = n;

}

bool Animals::getPredator() const
{
    return predator;
}

void Animals::setPredator(bool n)
{
    this->predator = n;
}

void Animals::Show()
{
    cout << Type();
    cout << "\nName:" << Name;
    cout << "\nBreed:" << Breed;

}

string Animals::Type()
{
    return "Animals";
}





void Animals::Save(ofstream& file)
{
 //nothing
}

void Animals::Load(ifstream& file)
{//nothing
}
