#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
    public:

    virtual void speak() = 0; // this is an abstract class because it can't be instantiated, and it must be a base class to be used for all other child classes
    virtual ~Animal() {} //my virtual destructor to get rid of the virtual objects later
};


class Sheep : public Animal //all of these child classes are types of animals so it derives from the parent class called animal
{
    public:

    void speak() override;
    virtual ~Sheep() {} // virtaul destructor so that compiler knows which child class to delete properly
};

class Cow : public Animal
{
    public:

    void speak() override;
    virtual ~Cow() {} // virtual destructor so that compiler deletes the correct child class object
};

class Frisian : public Cow  // frisian is a type of cow so i can inherit from cow
{
    public:

    void speak() override;
    ~Frisian() {}
};

#endif