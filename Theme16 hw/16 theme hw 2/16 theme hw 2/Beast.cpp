#include "Beast.h"

Beast::Beast()
{
    habitat = "";
}

Beast::Beast(string Name, string Breed, bool predator, string habitat)
    : Animals(Name,Breed,predator)
{
    this->habitat = habitat;
}

Beast::~Beast()
{
}

void Beast::setHabitat(string f)
{
    this->habitat = f;
}

string Beast::getHabitat() const
{
    return habitat;
}

void Beast::Show()
{
    cout << "\n************************\n";
    Animals::Show();
    cout << "\nHabitat:" << habitat ;
    cout << "\n************************\n";
}

string Beast::Type()
{
    return "Beast";
}



void Beast::Save(ofstream& file)
{
    file << Type() << endl << Name << endl << Breed << endl << habitat << endl;
}

void Beast::Load(ifstream& file)
{
    file >> Name >> Breed >> habitat;
}
