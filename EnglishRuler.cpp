#include <iostream>
#include <string>
#include "Ruler.h"

using namespace std;

void Ruler::drawOneTick(int tickLength, int tickLabel) {
	for (int i = 0; i < tickLength; i++)
		cout << "-";
	if (tickLabel >= 0) cout << " " << tickLabel;
		cout << "\n";
}
void Ruler::drawTicks(int tickLength) {
	if (tickLength > 0) {
		drawTicks(tickLength - 1);
		drawOneTick(tickLength, -1);
		drawTicks(tickLength - 1);
	}
}
void Ruler::drawRuler(int nInches, int majorLength) {
	drawOneTick(majorLength, 0);
	for (int i = 1; i <= nInches; i++) {
		drawTicks(majorLength - 1);
		drawOneTick(majorLength, i);
	}
}