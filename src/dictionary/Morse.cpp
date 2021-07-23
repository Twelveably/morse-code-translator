#include <iostream>
#include <string>
#include <Windows.h>
#include <cctype>
#include "Morse.h"

const int FREQUENCY_ = 400; // Frequency it operates on
const int SHORT_BEEP_ = 100; // Duration 120ms
const int LONG_BEEP_ = 200; // Duration 200ms

void dot() { // Short sound
	Beep(FREQUENCY_, SHORT_BEEP_);
}

void dash() { // Long sound
	Beep(FREQUENCY_, LONG_BEEP_);
}

void Morse::translateAlphabets(char _input) {
    std::string output_;
	switch (_input) {
	case 'A': output_ =".-"; break; // Alphabets
	case 'B': output_ ="-..."; break;
	case 'C': output_ ="-.-."; break;
	case 'D': output_ ="-.."; break;
	case 'E': output_ ="."; break;
	case 'F': output_ ="..-."; break;
	case 'G': output_ ="--."; break;
	case 'H': output_ ="...."; break;
	case 'I': output_ =".."; break;
	case 'J': output_ =".---"; break;
	case 'K': output_ ="-.-"; break;
	case 'L': output_ =".-.."; break;
	case 'M': output_ ="--"; break;
	case 'N': output_ ="-."; break;
	case 'O': output_ ="---"; break;
	case 'P': output_ =".--."; break;
	case 'Q': output_ ="--.-"; break;
	case 'R': output_ =".-."; break;
	case 'S': output_ ="..."; break;
	case 'T': output_ ="-"; break;
	case 'U': output_ ="..-"; break;
	case 'V': output_ ="...-"; break;
	case 'W': output_ =".--"; break;
	case 'X': output_ ="-..-"; break;
	case 'Y': output_ ="-.--"; break;
	case 'Z': output_ ="--.."; break;
	case '1': output_ =".----"; break; // Numbers
	case '2': output_ ="..---"; break;
	case '3': output_ ="...--"; break;
	case '4': output_ ="....-"; break;
	case '5': output_ ="....."; break;
	case '6': output_ ="-...."; break;
	case '7': output_ ="--..."; break;
	case '8': output_ ="---.."; break;
	case '9': output_ ="----."; break;
	case '0': output_ ="-----"; break;
	case '.': output_ =".-.-.-"; break; // Symbols
	case ',': output_ ="--..--"; break;
	case '?': output_ ="..--.."; break;
	case '/': output_ ="-..-."; break;
	case '@': output_ =".--.-."; break;
	case '!': output_ ="-.-.--"; break;
	case ':': output_ ="---..."; break;
	case ';': output_ ="-.-.-"; break;
	case '\'': output_ =".----."; break;
	case '=': output_ ="-...-"; break;
	case ' ': output_ ="/"; break;
	default: output_ =" "; break;
	}

	for (char c_ : output_) { // For each dot and dashes
		switch(c_){
		case '.':
			std::cout << c_ << std::flush;
			dot();
			break;
		case '-':
			std::cout << c_ << std::flush;
			dash();
			break;
		default:
			std::cout << c_ << std::flush;
			Sleep(500);
			break;
		}
	} Sleep(70);
	std::cout << " " << std::flush; // Separate each morse alphabets
	Sleep(100);

}
