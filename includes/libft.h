#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stddef.h>


void * ft_memset (void * ptr, int value, size_t num);

void * ft_bzero (void * s, size_t num);
void * ft_memcpy(void *dst, const void *src, size_t n);
void * ft_memccpy(void *dst, const void *src, int c, size_t n);
void * ft_memmove(void *dst, const void *src, size_t n);
#endif
