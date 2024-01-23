#include<stdio.h>
#include<gsl/gsl_matrix.h>
#include"../include/tools.h"

#define W_FILENAME "W.txt"

int main(){
    gsl_matrix *W = matrix_read(W_FILENAME);

    matrix_print(W);
    
    gsl_matrix_free(W);

    return 0;
}