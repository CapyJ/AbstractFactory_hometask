#include"AnimalWorld.h"

int main() {

	ContinentFactory* AfricaFactory = new Africa;
	ContinentFactory* AmericaFactory = new NorthAmerica;
	ContinentFactory* EurasiaFactory = new Eurasia;

	AnimalWorld w(EurasiaFactory, 2);
	w.FeedCarnivore();
	w.FeedHerbivore();
	

	system("pause");
	return 0;
}