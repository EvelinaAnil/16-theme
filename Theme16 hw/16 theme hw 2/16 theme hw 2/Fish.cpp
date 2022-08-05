#include "Fish.h"

Fish::Fish()
{
    depth = "6000 m";
}

Fish::Fish(string Name, string Breed, bool predator, string depth)
    :Animals(Name,Breed,predator)
{
    this->depth = depth;
}

Fish::~Fish()
{
}

void Fish::setDepth(string f)
{this->depth = f;
}

string Fish::getDepth() const
{
    return depth;
}

void Fish::Show()
{
    cout << "\n85858585858855585858858585885858\n";
    Animals::Show();
    cout << "\nDepth:" << depth ;
    cout << "\n85858585858855585858858585885858\n";
}

string Fish::Type()
{
    return "Fish";
}



void Fish::Save(ofstream& file)
{
    file << Type() << endl << Name << endl << Breed << endl << depth << endl;
}

void Fish::Load(ifstream& file)
{
    file >> Name >> Breed >> depth;
}
