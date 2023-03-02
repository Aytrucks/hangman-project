#include <iostream>
#include "hangfunctions.h"
#include <vector>
using namespace std;

void greet() {
	std::cout << "Hello! Welcome to Hangman (Click Enter to Continue)" << std::endl;
	std::cin.get();
	std::cout << "In Hangman, the objective is to guess the word in time to save the man from being hanged\n" << std::endl;
	std::cout << "You are able to guess the entirety of the alphabet by inputting any alphabetical character" << std::endl;
	std::cout << "For each wrong letter, the man gains a limb. When the man gains all his limbs, that is considered Game Over" << std::endl;
	std::cin.get();
	std::cout << "+---+\n";
	std::cout << "|             O\n";
	std::cout << "|            /|\\\n";
	std::cout << "|             |\n";
	std::cout << "|            / \\\n";
	std::cout << "|\n";
	std::cout << "This is the pole and this is Jeffrey. It is up to you to save Jeffrey from certain doom." << std::endl;
	std::cout << "You will have 7 attempts to save Jeffrey, or else he will cease.\n";
	std::cout << "Good Luck!";
	std::cin.get();
}

void Print(string string, bool top, bool bot){
	if (top) {
		cout << "-----------------------------------------------"<<endl;
		cout << "|";
	}
	else {
		cout << "|";
	}
	bool front = true;
	
	for (int i = string.length(); i < 45; i++) {
		if (front) {
			string = string + " ";
		}
		else {
			
			string = " " + string;
		}
		front = !front;
	}


	cout << string.c_str();


	if (bot) {
		cout << "|"<<endl;
		cout << "-----------------------------------------------" << endl;
	}
	else {
		cout << "|" << endl;
	}
}

void DrawHangman(int fail) {

	Print("|", false, false);
	Print("|", false, false);
	
	if (fail >= 1) {
		Print("O", false, false);
	}
	else {
		Print(" ", false, false);
	
	}
	if (fail == 2) {
		Print("|", false, false);
	}
	if (fail == 3) {
		Print("/|", false, false);
	}
	if (fail >= 4) {
		Print("/|\\", false, false);
	}
	else {
		Print(" ", false, false);
	}


	if (fail >= 5) {
		Print("|", false, false);
	}
	else {
		Print(" ", false, false);
	}

	if (fail == 6) {
		Print("/ ", false, false);
	}
	if (fail >= 7) {
		Print("/ \\", false, false);
	}
	else {
		Print(" ", false, false);
	}
	
	Print("+-----------+", false, false);
	Print("|           |", false, false);
}

void displayfail(int fails) {
	if (fails == 0) {
		std::cout << "+---+\n";
		std::cout << "|   \n";
		std::cout << "|  \n";
		std::cout << "|   \n";
		std::cout << "|  \n";
		std::cout << "|\n";
	}
	if (fails == 1) {
		std::cout << "+---+\n";
		std::cout << "|   O\n";
		std::cout << "|  \n";
		std::cout << "|   \n";
		std::cout << "|  \n";
		std::cout << "|\n";
	}
	if (fails == 2) {
		std::cout << "+---+\n";
		std::cout << "|   O\n";
		std::cout << "|   +\n";
		std::cout << "|   \n";
		std::cout << "|  \n";
		std::cout << "|\n";
	}
	if (fails == 3) {
		std::cout << "+---+\n";
		std::cout << "|   O\n";
		std::cout << "|  -+\n";
		std::cout << "|   \n";
		std::cout << "|  \n";
		std::cout << "|\n";
	}
	if (fails == 4) {
		std::cout << "+---+\n";
		std::cout << "|   O\n";
		std::cout << "|  -+-\n";
		std::cout << "|   \n";
		std::cout << "|  \n";
		std::cout << "|\n";
	}
	if (fails == 5) {
		std::cout << "+---+\n";
		std::cout << "|   O\n";
		std::cout << "|  -+-\n";
		std::cout << "|   |\n";
		std::cout << "|  \n";
		std::cout << "|\n";
	}
	if (fails == 6) {
		std::cout << "+---+\n";
		std::cout << "|   O\n";
		std::cout << "|  -+-\n";
		std::cout << "|   |\n";
		std::cout << "|  / \n";
		std::cout << "|\n";
	}
	if (fails == 7) {
		std::cout << "+---+\n";
		std::cout << "|   O\n";
		std::cout << "|  -+-\n";
		std::cout << "|   |\n";
		std::cout << "|  / \\\n";
		std::cout << "|\n";
	}
}