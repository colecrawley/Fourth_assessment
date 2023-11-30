#include <iostream>
#include "animal.h"


using namespace std;


void Sheep::speak()
{
    cout << "Sheep says: \t\tbaa!" << endl;

};

void Cow::speak()
{
    cout << "Cow says: \t\tmoo!" << endl;
};

void Frisian::speak()
{
    cout << "Frisian Cow says: \tmoo (in black and white) !" << endl;
};
