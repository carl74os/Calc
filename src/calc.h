#include <stdbool.h>
#include <stddef.h>

#ifndef CALC_H
#define CALC_h

extern int         add(int x, int y);
extern int         sub(int x, int y);
extern int         mul(int x, int y);
extern int         div(int x, int y);
extern int         mod(int x, int y);
extern int         power_two(int x);
extern int         power(int x, int n);
extern bool        is_equal(int x, int y);
extern bool        is_greater(int x, int y);
extern bool        is_smaller(int x, int y);
extern void        fill_single_digit_positive_number(int arr[], size_t size);
extern const char *true_as_string(void);
extern const char *false_as_string(void);

#endif