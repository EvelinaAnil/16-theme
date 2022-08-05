#pragma once
#include "Animals.h"
class Bird :
    public Animals
{
protected:
    float speed;
public:
    Bird();
    Bird(string Name,
        string Breed, bool predator,float speed);
    ~Bird()override;

    void setSpeedFly(float f);
    float getSPeedFly()const;

    void Show()override;
    string Type()override;

    

    void Save(ofstream& file) override;
    void Load(ifstream& file) override;
};

