#include "Aviary.h"

Aviary::Aviary(int max)
{
   this->max= max;
   arr = NULL;
   size = 0;
}

Aviary::~Aviary()
{
}
//false true || true false
void Aviary::add(Animals* obj)
{

    if (size ==max ) {
        throw new MaxCapacityException();
    }
    else {
        if (arr != NULL) {
            if ((arr[0]->getPredator()==false && obj->getPredator()==true) || 
                (arr[0]->getPredator()==true&&obj->getPredator()==false)) {
                throw new  PredatorException();
            }
            else if (obj->getName()==arr[0]->getName()) {
               
                throw new NameException();
              /*  Animals** tmp = new Animals * [++size];
                for (int i = 0; i < size - 1; i++)
                {

                    tmp[i] = arr[i];
                }
                if (arr != NULL)delete[]arr;
                tmp[size - 1] = obj;
                arr = tmp;*/

            }
            }
       
    
    Animals** tmp = new Animals * [++size];
    for (int i = 0; i < size - 1; i++)
    {

        tmp[i] = arr[i];
    }
    if (arr != NULL)delete[]arr;
    tmp[size - 1] = obj;
    arr = tmp;
    }
    }

void Aviary::dell(string name)
{
    if (size == 0) { cout << "\nEmpty or closed\n" << endl; }
    else {
        int id = findByName(name);
        if(id==-1){ cout << "\nNot foundn\ " << endl; }
        else {
            Animals** tmp = new Animals * [--size];
            int i = 0;
            while (i < size) {
                if (i < id)tmp[i] = arr[i];
                else if (i >= id) { tmp[i] = arr[i + 1]; }
                i++;
            }
            arr[id]->~Animals();
            if (arr != NULL)delete[] arr;
            arr = tmp;
            cout<<"\nSucsses deleted!\n";

            
        }
    }
}

int Aviary::findByName(string name)
{
    if(size==0) { cout << "Empty or closed" << endl; }
    else {
        int i = 0;
        while (i < size) {
            if (name == arr[i]->getName()) {
                arr[i]->Show();
                return i;
                break;
            }
            i++;
        }
    }
}



void Aviary::showInfo() const&
{
    if (size == 0) { cout << "Empty or closed" << endl; }
    else{
        int i = 0;
        while (i < size) {
            cout << "\nAnimal #" << i + 1 << endl;
            arr[i++]->Show();
        }
   }
}


