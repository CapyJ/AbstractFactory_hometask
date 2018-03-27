#pragma once

#include "Herbivore.h"

class AbstractCarnivore {
public:
	virtual void Eat(AbstractHerbivore* herbivore) = 0;

private:
	int Power;
};

class Lion : public AbstractCarnivore {
public:
	Lion() :
		Power(100)
	{
		cout << "Lion created" << endl;
	}
	virtual void Eat(AbstractHerbivore* herbivore) override {
		if (Power >= herbivore->GetWeight()) {
			Power += 10;
			herbivore->Gotcha();
		} else {
			Power -= 10;
		}
		cout << "Lion eat" << endl;
	}
private:
	int Power;
};

class Wolf : public AbstractCarnivore {
public:
	Wolf() : 
		Power(70) 
	{
		cout << "Wolf created" << endl;
	}
	virtual void Eat(AbstractHerbivore* herbivore) override {
		if (Power >= herbivore->GetWeight()) {
			Power += 10;
			herbivore->Gotcha();
		} else {
			Power -= 10;
		}
		cout << "Wolf eat" << endl;
	}
private:
	int Power;
};

class Tiger : public AbstractCarnivore {
public:
	Tiger() :
		Power(100)
	{
		cout << "Tiger created" << endl;
	}
	virtual void Eat(AbstractHerbivore* herbivore) override {
		if (Power >= herbivore->GetWeight()) {
			Power += 10;
			herbivore->Gotcha();
		}
		else {
			Power -= 10;
		}
		cout << "Tiger eat" << endl;
	}

private:
	int Power;
};