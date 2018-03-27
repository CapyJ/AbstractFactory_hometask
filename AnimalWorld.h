#pragma once

#include "Continent.h"

#include <vector>

class AnimalWorld {
public:

	AnimalWorld(ContinentFactory* factory, int NumOfAnimals) {
		for (int i = 0; i < NumOfAnimals; i++) {
			herbivore.push_back(factory->CreateHerbivore());
			carnivore.push_back(factory->CreateCarnivore());
		}
	}
	~AnimalWorld() {
		for (AbstractCarnivore* c: carnivore) {
			delete c;
		}
		for (AbstractHerbivore* h: herbivore) {
			delete h;
		}
	}
	void FeedCarnivore() {
		for (unsigned int i = 0; i < carnivore.size(); i++) {
			carnivore[i]->Eat(herbivore[i]);
}
	}
	void FeedHerbivore() {
		for (AbstractHerbivore* h: herbivore) {
			h->Eat();
		}
	}

private:
	vector<AbstractCarnivore*> carnivore;
	vector<AbstractHerbivore*> herbivore;
};
