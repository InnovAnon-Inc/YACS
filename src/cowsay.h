#ifndef _COWSAY_H_
#define _COWSAY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h>

#include <glitter.h>

typedef struct {
	char const *cowsay;
	char *dashLength;
	size_t lnlen;
} cowsay_t;

void build_dashLength (char *dl, size_t lnlen)
__attribute__ ((nonnull (1), nothrow)) ;

void init_cowsay (
	cowsay_t *restrict cowsay,
	char const *restrict cs,
	char *restrict dl,
	size_t lnlen)
__attribute__ ((nonnull (1, 2, 3), nothrow)) ;

int alloc_cowsay (
	cowsay_t *restrict cowsay,
	char const *restrict cs)
__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result)) ;

void free_cowsay (cowsay_t *cowsay)
__attribute__ ((nonnull (1), nothrow)) ;

char *build_cow (
	cowsay_t const *restrict cowsay,
	char const *restrict template)
__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result)) ;

typedef __attribute__ ((nonnull (1), warn_unused_result))
	int (*restrict ezcowsaycb_t) (char const *) ;

int ezcowsay (
	char const *restrict str,
	char const *restrict template,
	ezcowsaycb_t cb)
__attribute__ ((nonnull (1, 2, 3), warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _COWSAY_H_ */
