#ifndef _COWSAY_H_
#define _COWSAY_H_

#include <stdlib.h>

typedef struct {
	char const *cowsay;
	char *dashLength;
	size_t lnlen;
} cowsay_t;

void build_dashLength (char *dl, size_t lnlen) ;

void init_cowsay (cowsay_t *cowsay, char const *cs, char *dl, size_t lnlen) ;

int alloc_cowsay (cowsay_t *cowsay, char const *cs) ;

void free_cowsay (cowsay_t *cowsay) ;

char *build_cow (cowsay_t const *cowsay, char const *template) ;

int ezcowsay (const char *str, const char *template,
	int (*cb) (char *)) ;

#endif /* _COWSAY_H_ */
