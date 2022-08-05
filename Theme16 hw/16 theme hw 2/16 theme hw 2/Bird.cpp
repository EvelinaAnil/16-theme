#include "Bird.h"

Bird::Bird()
{
    speed = 39.53;
}

Bird::Bird(string Name, string Breed, bool predator, float speed)
    :Animals(Name,Breed,predator)
{
    this->speed = speed;
}

Bird::~Bird()
{
}

void Bird::setSpeedFly(float f)
{
    this->speed = f;
}

float Bird::getSPeedFly() const
{
    return speed;
}

void Bird::Show()
{
    cout << "\n()()()()()()()()()()()()()()()()()()\n";
    Animals::Show();
    cout << "\nSpeed:" << speed ;
    cout << "\n()()()()()()()()()()()()()()()()()()\n";
}

string Bird::Type()
{
    return "Bird";
}



void Bird::Save(ofstream& file)
{
    file << Type() << endl << Name << endl << Breed << endl << speed << endl;
}

void Bird::Load(ifstream& file)
{
    file >> Name >> Breed >> speed;
}
