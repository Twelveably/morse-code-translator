#include <iostream>
#include "dictionary/Morse.h"
#include "Translator.h"

bool program;

int main() {
	program = true;

	Translator translator;
	while (program) { // Puts program in a loop
		translator.convertTextToMorse(); // Execute
	}
	return 0;
}
