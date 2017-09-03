#include <stdio.h>

#include "cowsay.h"

int main (int argc, char *argv[]){
	if (ezcowsay ("It's dangerous to go alone, take this!",
		"--%s--\n"
		"< %s >\n"
		"--%s--\n"
		"\n"
		"          o-)-(:::::::::::::::>﻿\n",
		puts) != 0)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}