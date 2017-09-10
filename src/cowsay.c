#include <string.h>
#include <stdio.h>
#include <sys/types.h>

#include "cowsay.h"

extern int snprintf(char *str, size_t size, const char *format, ...) ;

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
	/* TODO */
	/*if (outsz > SSIZE_MAX) return NULL;*/
	if (out == NULL) return NULL;
	if ((ssize_t) outsz != snprintf (out, outsz, template,
		cowsay->dashLength, cowsay->cowsay, cowsay->dashLength)) {
		free (out);
		return NULL;
	}
	return out;
}

int ezcowsay (char const *str, char const *template,
	int (*cb) (char const *)){
	cowsay_t cs;
	char *out;
	if (alloc_cowsay (&cs, str) != 0)
		return -1;
	out = build_cow (&cs, template);
	if (out == NULL) {
		free_cowsay (&cs);
		return -2;
	}
	if (cb (out) != 0) {
		free (out);
		free_cowsay (&cs);
		return -3;
	}
	free (out);
	free_cowsay (&cs);
	return 0;
}

/* https://pastebin.com/f2e55ab5 */