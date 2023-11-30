#include "animal.h"
#include <iostream>
#include <vector>

using namespace std;

//errors made:

//no public tag in frisian class: added public tag
//void speak(void) to virtual void speak() = pure virtual function
//container[a].speak to container[a]->speak() for virtual functions

int main()
{

    vector<Animal *> container; // stores all the animals and how many the user has chosen here

    int number_of_objects; // stores the number of animals the user wants here

    cout << "Enter how many animals you want: ";
    cin >> number_of_objects;


    for (int i = 0; i < number_of_objects; ++i)
    {
        int user_choice; //stores the user's choice of animals here
        cout << "Select the animal of your choice: (1. Sheep, 2. Cow, 3. Frisian Cow)\n";
        cin >> user_choice;

        Animal * animal;

        switch (user_choice) // based on the user's choice, it adds the choices to a vector based on how many animals the user wants to add the to vector
        {
            case 1:
            animal = new Sheep();
            break;
            case 2:
            animal = new Cow();
            break;
            case 3:
            animal = new Frisian();
            break;
            default:
            cout << "That is not one of our choices, please select again!" << endl;
            return 1;
        }

        container.push_back(animal); //adds all the animals into a vector


    }

    for (int i = 0; i < container.size(); i++) //iterates through the vector and calls the speak command for each animal
    {
        container[i]->speak();
    }

    return 0;


}
