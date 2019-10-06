#include <iostream>
#include "dictionary/Morse.h"
#include "Translator.h"

bool program;

int main() {
	program = true;

	while (program) {
		Translator translator;

		translator.convertTextToMorse();
	}
	return 0;
}
