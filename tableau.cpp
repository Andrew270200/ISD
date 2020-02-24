#include <iostream>
using namespace std;
#include <cmath>
int main ()
{
	int age [] = { 20,21,22};
	int taille = sizeof(age)/sizeof(int); //to know how many elements in age if unknown
	for (int i = 0; i < taille; i++)
		cout << age[i] << endl ;
	return 0;
}
