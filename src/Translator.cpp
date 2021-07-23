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
#include <Windows.h>
#include "translator.h"
#include "dictionary/Morse.h"

void Translator::convertTextToMorse() {
	Morse morse;

	system("Color A");
	std::string input_;
	std::cout << "Input: "; // Ask for input
	std::getline(std::cin, input_);

	std::transform(input_.begin(), input_.end(), input_.begin(), ::toupper);

	std::cout << "Output: " << std::flush; // Show output

	Sleep(1000);

	for (char c : input_) {
		morse.translateAlphabets(c);
	}

	std::cout << "\n";
}
