#pragma once
#include "Animals.h"
class Beast :
    public Animals
{
protected:
    string habitat;
public:
    Beast();
        Beast(string Name,
            string Breed, bool predator,string habitat);
        ~Beast()override;
         
        void setHabitat(string f);
        string getHabitat()const;

        void Show()override;
        string Type()override;

      

        void Save(ofstream& file) override;
        void Load(ifstream& file) override;
};

