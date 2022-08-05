#pragma once
#include "Animals.h"
class Fish :
    public Animals
{
protected:
    string depth;
public:
    Fish();
    Fish(string Name,
        string Breed, bool predator, string depth);
    ~Fish()override;

    void setDepth(string f);
    string getDepth()const;

     void Show()override;
     string Type()override;

  

     void Save(ofstream& file) override;
     void Load(ifstream& file) override;
};

