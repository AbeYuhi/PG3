#include<iostream>
#include<memory>
#include "Dog.h"
#include "Cat.h"
#include "Animal.h"

int main() {
	
	std::unique_ptr<Animal> animals[2];

	animals[0] = std::make_unique<Dog>();
	animals[1] = std::make_unique<Cat>();
	
	for (int i = 0; i < 2; i++) {
		animals[i]->Bark();
	}

	return 0;
}