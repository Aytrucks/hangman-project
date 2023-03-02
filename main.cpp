#include <iostream>
#include <vector>
#include "hangfunctions.h"
using namespace std;

int main() {
	greet();
	
	
	Print("Hang Man",true,true);
	std::cin.get();
	
	
	DrawHangman(5);
	std::cin.get();

}