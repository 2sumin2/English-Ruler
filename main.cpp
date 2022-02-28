#include <stdio.h>
#include <iostream>
#include <string>
#include "Ruler.h"

using namespace std;

int main(void) {
	Ruler* ruler = new Ruler();

	cout << "enter Inch : ";
	cin >> ruler->nInches;
	cout << "enter major tick length : ";
	cin >> ruler->tickLength;

	ruler->drawRuler(ruler->nInches, ruler->tickLength);


	return EXIT_SUCCESS;
}