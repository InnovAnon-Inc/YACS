#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	char const *cowsay;
	char const *dashLength;
	size_t lnlen;
} cowsay_t;

char *build_dashLength (size_t lnlen) {
	size_t i;
	char *ret = malloc (lnlen + 1);
	if (ret == NULL) return NULL;
	for (i = 0; i != lnlen; i++)
		ret[i] = '-';
	ret[i] = '\0';
	return ret;
}

int init_cowsay (cowsay_t *cowsay, char *cs) {
	cowsay->cowsay = cs;
	cowsay->lnlen = strlen (cs);
	cowsay->dashLength = build_dashLength (cowsay->lnlen);
	if (cowsay->dashLength == NULL) return -1;
	return 0;
}

char *build_cow (cowsay_t *cowsay) {
	const char template[] = "--%s--\n"
		"< %s >\n"
		"--%s--\n"
		"  |  ^__^\n"
		"   - (oo)|_______\n"
		"     (__)|       )/|/\n"
		"         ||----w |\n"
		"         ||     ||\n";
	size_t tsz = sizeof (template) - 2 * 3 - 1;
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
	init_cowsay (&cs, "Hello, World!");
	puts (build_cow (&cs));
	/*return EXIT_SUCCESS;*/
	return 0;
}