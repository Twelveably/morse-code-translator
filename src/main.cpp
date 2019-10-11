#include <iostream>
#include "dictionary/Morse.h"
#include "Translator.h"

bool program_;

int main() {
	program_ = true;

	Translator translator;
	while (program_) { // Puts program in a loop
		translator.convertTextToMorse(); // Execute
	}
	return 0;
}
