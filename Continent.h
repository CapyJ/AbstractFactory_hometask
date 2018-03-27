#pragma once

#include "Herbivore.h"
#include "Carnivore.h"

class ContinentFactory {
public:
	virtual AbstractHerbivore* CreateHerbivore() = 0;
	virtual AbstractCarnivore* CreateCarnivore() = 0;
};

class Africa : public ContinentFactory {
public:
	virtual AbstractHerbivore* CreateHerbivore() override {
		return new Wildebeest();
	}
	virtual AbstractCarnivore* CreateCarnivore() override {
		return new Lion();
	}
};

class NorthAmerica : public ContinentFactory {
public: 
	virtual AbstractHerbivore* CreateHerbivore() {
		return new Bison();
	}
	virtual AbstractCarnivore* CreateCarnivore() {
		return new Wolf();
	}
};

class Eurasia : public ContinentFactory {
public:
	virtual AbstractHerbivore* CreateHerbivore() {
		return new Elk();
	}
	virtual AbstractCarnivore* CreateCarnivore() {
		return new Tiger();
	}
};

