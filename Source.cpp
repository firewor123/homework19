#include <iostream>
using namespace std;
class Animal
{
private:

public:
	virtual void voice()
	{

	}
};

class Dog : public Animal
{
	void voice() override
	{
		std::cout << "Woof!";
	}
};

class Cat : public Animal
{
	void voice() override
	{
		std::cout << "Meow!";
	}
};

class Cow : public Animal
{
	void voice() override
	{
		std::cout << "Moo!";
	}
};

int main()
{
	Animal* animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	for (Animal* a : animals)
		a->voice();
}