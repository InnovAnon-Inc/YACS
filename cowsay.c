#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	char const *cowsay;
	char *dashLength;
	size_t lnlen;
} cowsay_t;

void build_dashLength (char *dl, size_t lnlen) {
	memset (dl, (int) '-', lnlen);
	dl[lnlen] = '\0';
}

void init_cowsay (cowsay_t *cowsay, char const *cs, char *dl, size_t lnlen) {
	cowsay->cowsay = cs;
	cowsay->lnlen = strlen (cs);
	cowsay->dashLength = dl;
	build_dashLength (cowsay->dashLength, cowsay->lnlen);
}

int alloc_cowsay (cowsay_t *cowsay, char const *cs) {
	size_t lnlen = strlen (cs);
	char *dl = malloc (lnlen + 1);
	if (dl == NULL) return -1;
	init_cowsay (cowsay, cs, dl, lnlen);
	return 0;
}

void free_cowsay (cowsay_t *cowsay) {
	free (cowsay->dashLength);
}

char *build_cow (cowsay_t const *cowsay, char const *template) {
	size_t tsz = strlen (template) - 2 * 3 ;
	size_t outsz = tsz + cowsay->lnlen * 3;
	char *out = malloc (outsz + 1);
	if (outsz != snprintf (out, outsz, template,
		cowsay->dashLength, cowsay->cowsay, cowsay->dashLength)) {
		free (out);
		return NULL;
	}
	return out;
}

/* https://pastebin.com/f2e55ab5 */


int main(int argc, char* argv[]){
	cowsay_t cs;
	char *out;
	if (alloc_cowsay (&cs, "Hello, World!") != 0)
		return EXIT_FAILURE;
	out = build_cow (&cs,
		"--%s--\n"
		"< %s >\n"
		"--%s--\n"
		"  |  ^__^\n"
		"   - (oo)|_______\n"
		"     (__)|       )/|/\n"
		"         ||----w |\n"
		"         ||     ||\n");
	if (out == NULL) {
		free_cowsay (&cs);
		return EXIT_FAILURE;
	}
	puts (out);
	free (out);
	free_cowsay (&cs);
	return EXIT_SUCCESS;
}