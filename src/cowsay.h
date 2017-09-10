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
__attribute__ ((nonnull (1), nothrow)) ;

void init_cowsay (cowsay_t *cowsay, char const *cs, char *dl, size_t lnlen)
__attribute__ ((nonnull (1, 2, 3), nothrow)) ;

int alloc_cowsay (cowsay_t *cowsay, char const *cs)
__attribute__ ((nonnull (1, 2), nothrow)) ;

void free_cowsay (cowsay_t *cowsay)
__attribute__ ((nonnull (1), nothrow)) ;

char *build_cow (cowsay_t const *cowsay, char const *template)
__attribute__ ((nonnull (1, 2), nothrow)) ;

int ezcowsay (char const *str, char const *template,
	__attribute__ ((nonnull (1))) int (*cb) (char const *))
__attribute__ ((nonnull (1, 2, 3))) ;

#ifdef __cplusplus
}
#endif

#endif /* _COWSAY_H_ */
