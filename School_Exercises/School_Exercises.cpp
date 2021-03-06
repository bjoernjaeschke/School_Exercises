// School_Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// @author Björn Jaeschke

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int EinMalEins();
int KeepWindowOpen();

int main()
{
	srand(time(NULL));

	while(EinMalEins() == 1);

	return 0;
}

int EinMalEins() {

	int presentedCalculations = 0, correctlySolvedCalculations = 0, integer1, integer2, userInput;
	const int MAX_AMOUNT_CALCULATIONS = 10, MAX_RANGE_OF_INTEGERS = 10;
	cout << "\n10 Einmaleinsaufgaben\nGib die richtige Loesung ein!\n\n";

	for (; presentedCalculations < MAX_AMOUNT_CALCULATIONS; presentedCalculations++) {
		integer1 = rand() % MAX_RANGE_OF_INTEGERS + 1;
		integer2 = rand() % MAX_RANGE_OF_INTEGERS + 1;
		printf("%d * %d = ", integer1, integer2);
		cin >> userInput;
		if (userInput == integer1 * integer2) {
			cout << "Richtig!\n\n";
			correctlySolvedCalculations++;
		}
		else {
			cout << "\nFalsch!\n\n";
		}
	}

	printf("Du hast %d von %d Aufgaben richtig gelöst.\n", correctlySolvedCalculations, MAX_AMOUNT_CALCULATIONS);
	if (correctlySolvedCalculations == MAX_AMOUNT_CALCULATIONS) {
		cout << "Eine perfekte Lösung! Aber schaffst du das nochmal?";
	}
	else if (correctlySolvedCalculations > MAX_AMOUNT_CALCULATIONS) {
		cout << "Irgendwie hast du mehr Punkte erreicht, als du solltest. Vielleicht bist du einfach zu gut.\nDu darfst es trotzdem gerne nochmal probieren.";
	}
	else {
		cout << "Leider hast du nicht alle Aufgaben richtig gelöst! Versuche es nochmal.";
	}
	cout << "\nNochmal probieren? (y/n)\n";
	char yesno;
	cin >> yesno;
	if (yesno == 'y') {
		return 1;
	}
	else {
		cout << "Ende des Programmes.\n";
		return 0;
	}
}

int KeepWindowOpen() {
	getchar(); getchar();
	return 0;
}
