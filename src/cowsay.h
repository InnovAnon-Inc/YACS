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
	char const *cs,
	char *dl,
	size_t lnlen)
__attribute__ ((nonnull (1, 2, 3), nothrow)) ;

int alloc_cowsay (
	cowsay_t *cowsay,
	char const *cs)
__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result)) ;

void free_cowsay (cowsay_t *cowsay)
__attribute__ ((nonnull (1), nothrow)) ;

char *build_cow (
	cowsay_t const *cowsay,
	char const *template)
__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result)) ;

typedef __attribute__ ((nonnull (1), warn_unused_result))
	int (*ezcowsaycb_t) (char const *) ;

int ezcowsay (
	char const *str,
	char const *template,
	ezcowsaycb_t cb)
__attribute__ ((nonnull (1, 2, 3), warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _COWSAY_H_ */
