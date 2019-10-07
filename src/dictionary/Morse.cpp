/*
 * Morse.cpp
 *
 *  Created on: Oct 6, 2019
 *      Author: Bagaskara
 */

#include <iostream>
#include <string>
#include <Windows.h>
#include "Morse.h"

const int FREQUENCY = 400; // Frequency it operates on
const int SHORT_BEEP = 120; // Duration 120ms
const int LONG_BEEP = 200; // Duration 200ms

void dot() { // Short sound
	Beep(FREQUENCY, SHORT_BEEP);
}

void dash() { // Long sound
	Beep(FREQUENCY, LONG_BEEP);
}

void Morse::translateAlphabets(char input) {
    std::string output;
	switch (input) {
	case 'A': output = ".-"; break; // Alphabets
	case 'B': output = "-..."; break;
	case 'C': output = "-.-."; break;
	case 'D': output = "-.."; break;
	case 'E': output = "."; break;
	case 'F': output = "..-."; break;
	case 'G': output = "--."; break;
	case 'H': output = "...."; break;
	case 'I': output = ".."; break;
	case 'J': output = ".---"; break;
	case 'K': output = "-.-"; break;
	case 'L': output = ".-.."; break;
	case 'M': output = "--"; break;
	case 'N': output = "-."; break;
	case 'O': output = "---"; break;
	case 'P': output = ".--."; break;
	case 'Q': output = "--.-"; break;
	case 'R': output = ".-."; break;
	case 'S': output = "..."; break;
	case 'T': output = "-"; break;
	case 'U': output = "..-"; break;
	case 'V': output = "...-"; break;
	case 'W': output = ".--"; break;
	case 'X': output = "-..-"; break;
	case 'Y': output = "-.--"; break;
	case 'Z': output = "--.."; break;
	case '1': output = ".----"; break; // Numbers
	case '2': output = "..---"; break;
	case '3': output = "...--"; break;
	case '4': output = "....-"; break;
	case '5': output = "....."; break;
	case '6': output = "-...."; break;
	case '7': output = "--..."; break;
	case '8': output = "---.."; break;
	case '9': output = "----."; break;
	case '0': output = "-----"; break;
	case '.': output = ".-.-.-"; break; // Symbols
	case ',': output = "--..--"; break;
	case '?': output = "..--.."; break;
	case '/': output = "-..-."; break;
	case '@': output = ".--.-."; break;
	default: output = "/"; break;
	}

	for (char c : output) { // For each dot and dashes
		if (c == '.') {
			std::cout << c << std::flush;
			dot();
		} else if (c == '-') {
			std::cout << c << std::flush;
			dash();
		} else {
			std::cout << c << std::flush;
			Sleep(500);
		}
	} 	Sleep(200);
	std::cout << " " << std::flush; // Separate each morse alphabets

}
