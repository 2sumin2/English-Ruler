#include <string>

using namespace std;

class Ruler {
public:
	int nInches;
	int tickLength;
	void drawOneTick(int tickLength, int tickLabel = -1);
	void drawTicks(int tickLength);
	void drawRuler(int nInches, int majorLength);
};
