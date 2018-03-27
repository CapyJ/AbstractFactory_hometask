#pragma once

#include <iostream>

using namespace std;

class AbstractHerbivore {
public:
	virtual void Eat() = 0;
	virtual bool IsAlive() { return Weight > (InitialWeight * 0.3); }

	virtual int GetWeight() const { return Weight; }
	virtual void Gotcha() { Weight -= 10; }

private:
	int InitialWeight;
	int Weight;
};

class Wildebeest : public AbstractHerbivore {
public:
	Wildebeest() :
		Weight(30),
		InitialWeight(30)
	{
		cout << "Wildebeest created" << endl;
	}
	virtual void Eat() override {
		Weight += 10;
		cout << "Wildebeest eat" << endl;
	}

private:
	int InitialWeight;
	int Weight;
};

class Bison : public AbstractHerbivore {
public:
	Bison() :
		Weight(50),
		InitialWeight(50)
	{
		cout << "Bison created" << endl;
	}
	virtual void Eat() override {
		Weight += 10;
		cout << "Bison eat" << endl;
	}

private:
	int InitialWeight;
	int Weight;
};

class Elk : public AbstractHerbivore {
public:
	Elk() :
		Weight(30),
		InitialWeight(30)
	{
		cout << "Elk created" << endl;
	}
	virtual void Eat() override {
		Weight += 10;
		cout << "Elk eat" << endl;
	}

private:
	int InitialWeight;
	int Weight;
};