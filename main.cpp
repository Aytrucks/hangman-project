#include <iostream>
#include <vector>
#include "hangfunctions.h"
using namespace std;

int main() {
	greet();
	
	/*const char* theword = "placeho";
	const char* useranswer = "_______";
	int fails = 0;
	vector<char> incorrect;
	bool attempt = false;
	char guess;

	while (useranswer != theword && fails < 7) {
		displayfail(fails);
	}*/
	for (int i = 0; i < 8; i++) {
		displayfail(i);
		
		std::cin.get();
	}
	
}
