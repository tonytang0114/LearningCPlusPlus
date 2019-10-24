// preprocessor directive
// Include this header in multiple different files
#ifndef ANIMAL_H
// Make sure we read the following line only one time
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal();
    Animal(const Animal& orig);
    virtual ~Animal();
    std::string name;

private:
};

#endif /* ANIMAL_H */