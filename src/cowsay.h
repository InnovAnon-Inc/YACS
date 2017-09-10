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

void build_dashLength (char *dl, size_t lnlen)
__attribute__ ((nonnull (1))) ;

void init_cowsay (cowsay_t *cowsay, char const *cs, char *dl, size_t lnlen)
__attribute__ ((nonnull (1, 2, 3))) ;

int alloc_cowsay (cowsay_t *cowsay, char const *cs)
__attribute__ ((nonnull (1, 2))) ;

void free_cowsay (cowsay_t *cowsay)
__attribute__ ((nonnull (1))) ;

char *build_cow (cowsay_t const *cowsay, char const *template)
__attribute__ ((nonnull (1, 2))) ;

int ezcowsay (char const *str, char const *template,
	int (*cb) (char const *))
__attribute__ ((nonnull (1, 2, 3))) ;

#ifdef __cplusplus
}
#endif

#endif /* _COWSAY_H_ */
