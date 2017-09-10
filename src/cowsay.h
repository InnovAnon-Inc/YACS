#ifndef _COWSAY_H_
#define _COWSAY_H_

#ifdef __cplusplus
extern "C" {
#endif

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

char *build_cow (cowsay_t const *cowsay, char const *template)
__attribute__ ((format (printf, 2, 1))) ;

int ezcowsay (char const *str, char const *template,
	int (*cb) (char const *))
__attribute__ ((format (printf, 2, 1))) ;

#ifdef __cplusplus
}
#endif

#endif /* _COWSAY_H_ */
