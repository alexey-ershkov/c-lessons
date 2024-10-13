#include <iostream>
#include <string>

class Animal
{
private:
    int weight;

public:
    void breathe()
    {
        std::cout << "animal is breahing" << std::endl;
    };

    void setWeight(int animal_weight)
    {
        if (animal_weight < 0)
        {
            throw std::out_of_range("Animal weight can't be negative");
        };

        this->weight = animal_weight;
    }
    std::string getWeight()
    {
        return std::to_string(this->weight) + " kg";
    };

    virtual void makeSound() = 0;

    void doAnimalActions () {
        this->breathe();
        this->makeSound();
    }
};

class Cat: public Animal {
public: 
    void makeSound() {
        std::cout << "meow" << std::endl;
    }

    void doLazy() {
        std::cout << "cat is doing nothing" << std::endl;
    }
};

class Dog: public Animal {
public:    
    void makeSound() {
        std::cout << "bark" << std::endl;
    }

    void runAfterCar() {
        std::cout << "dog is running after car" << std::endl;
    }
};

int main()
{
    auto animal = new Dog();
    animal->setWeight(7);
    animal->doAnimalActions();
    animal->runAfterCar();
}