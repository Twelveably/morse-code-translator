/*
 * translator.cpp
 *
 *  Created on: Oct 6, 2019
 *      Author: Bagaskara
 */

#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include "translator.h"
#include "dictionary/Morse.h"

void Translator::convertTextToMorse() {
	Morse morse;

	std::string input;
	std::cout << "Input: ";
	std::getline(std::cin, input);

	std::transform(input.begin(), input.end(), input.begin(), ::toupper);

	std::cout << "Output: " << std::flush;
	for (char c : input) {
		morse.translateAlphabets(c);
	}

	std::cout << "\n";
}
