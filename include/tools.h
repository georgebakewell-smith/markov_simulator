#ifndef TOOLS_H
#define TOOLS_H

#include<gsl/gsl_matrix.h>


gsl_matrix *matrix_read(char *filename);
void matrix_print(gsl_matrix *matrix);

#endif