#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sys/types.h>
// #include <dirent.h>
#include <sys/stat.h>
#include <ctime>

using namespace std;
// class Animal {
// protected:
//     string name;
//     double height;
//     double weight;

//     static int numOfAnimals;

// public:
//     string GetName() {return name;}

//     void SetName(string name) {this->name = name;}

//     double GetHeight(){return height;}
//     void setHeight(double height){this->height = height;}

//     double GetWeight(){return weight;}
//     void setWeight(double height){this->weight = weight;}

//     void SetAll(string, double, double);

//     Animal(string, double, double);

//     Animal();

//     ~Animal();

//     static int GetNumOfAnimals(){return numOfAnimals;}
//     void ToString();
// };

// int Animal::numOfAnimals = 0;

// void Animal::SetAll(string name, double height, double weight){
//     this->name = name;
//     this->weight = weight;
//     this->height = height;
//     Animal::numOfAnimals++;
// }

// Animal::Animal(string name, double height, double weight)
// {
//     this->name = name;
//     this->weight = weight;
//     this->height = height;
//     Animal::numOfAnimals++;
// }

// Animal::Animal(){
//     this->name = "";
//     this->weight = 0;
//     this->height = 0;
//     Animal::numOfAnimals++;
// }

// Animal::~Animal(){
//     cout << "Animal " << this->name << " destroyed\n";
// }

// void Animal::ToString(){
//     cout << this->name << " is " << 
//         this->height <<
//         " cms tall and " <<
//         this->weight <<
//         " kgs in weight\n";
// }

// class Dog: public Animal{
//     private:
//         string sound = "Woof";
//     public:
//         void MakeSound(){
//             cout << "The dog " <<
//                 this->GetName() << " says " <<
//                 this->sound << "\n";
//         }
//         Dog(string, double, double, string);
//         Dog(): Animal() {};
//         void ToString();
// };

// Dog::Dog(string name, double height,
//         double weight, string sound) : Animal(name, height, weight){
//             this->sound = sound;
// }

// void Dog::ToString(){
//     cout << this->GetName() << " is " << 
//         this->GetHeight() <<
//         " cms tall and " <<
//         this->GetWeight() <<
//         " cms tall and " <<
//         this->sound << "\n";
// }

class Warrior {
private:
    int attkMax;
    int blockMax;
public:
    string name;
    int health;
    Warrior(string name, int health, int attkmax, int blockMax){
        this->name = name;
        this->health = health;
        this->attkMax = attkMax;
        this->blockMax = blockMax;
    }

    int Attack(){
        return rand() % this->attkMax;
    }

    int Block(){
        return rand() % this->blockMax;
    }
};

class Battle{
public:
    static void StartFight(Warrior& warrior1,
                Warrior& warrior2){
        while(true){
            if(Battle::GetAttackResult(warrior1, warrior2)
                    .compare("Game Over") == 0)
            {
                cout << "Game Over\n";
                break;
            }
            if(Battle::GetAttackResult(warrior2, warrior1)
                    .compare("Game Over") == 0)
            {
                cout << "Game Over\n";
                break;
            }
        }
    }

    static GetAttackResult(Warrior& warriorA, Warrior& warriorB){
        int warriorAAttkAmt = warriorA.Attack();
        int warriorBBlockAmt = warriorA.Block();
        int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
        damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
        warriorB.health -= damage2WarriorB;

        printf("%s attcks %s and deals %d damage\n",
                warriorA.name.c_str(),
                warriorB.name.c_str(),
                damage2WarriorB);
        printf("%s is down to %d health\n", 
                warriorB.name.c_str(),
                warriorB.health);
        
        if(warriorB.health <== 0){
            printf("%s has Died and %s is victorius\n",
                    warriorB.name.c_str(),
                    warriorA.name.c_str());
        }
    }   
};



int main()
{
    // Animal fred;
    // fred.ToString();
    // fred.setHeight(33);
    // fred.setWeight(10);
    // fred.SetName("Fred");
    // fred.ToString();

    // Animal tom("Tom", 36, 15);
    // tom.ToString();

    // Dog spot("Spot", 38 ,16, "Woooof");
    // spot.ToString();

    // cout << "Number of Animals " << 
    //         Animal::GetNumOfAnimals() << "\n";

    srand(time(NULL));
    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 135, 25, 10);
    Battle::StartFight(thor, hulk);
    return 0;
}