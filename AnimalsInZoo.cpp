#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo()
{
  numAnimals = 0;
}

AnimalsInZoo::AnimalsInZoo(Animal animalIn)
{
  animal = animalIn;
  numAnimals = 1;
}

void AnimalsInZoo::display()
{
  cout << "Number of Animals: " << numAnimals << endl;
  if(numAnimals == 1)
  {
      animal.display();
  }
}
