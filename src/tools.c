#include<stdio.h>
#include<gsl/gsl_matrix.h>

gsl_matrix *matrix_read(FILE *file, gsl_matrix *matrix){
    /* Creates a matrix of dimensions specified in the file and writes data to it */

    /* Reads number of rows and columns */
    int rows, cols;
    fscanf(file, "%d %d", &rows, &cols);
    matrix = gsl_matrix_alloc(rows, cols);

    /* Writes data */
    for(size_t i = 0; i < matrix->size1; ++i){
        for(size_t j = 0; j < matrix->size2; ++j){
            double element;           
            fscanf(file, "%lf", &element);
            gsl_matrix_set(matrix, i, j, element);
        }
    }

    return matrix;    
}

void matrix_print(gsl_matrix *matrix){
    /* Prints a given matrix to the terminal */
    for(int i = 0;i<matrix->size1;++i){
        for(int j=0;j<matrix->size2;++j){
            printf("%lf\t", gsl_matrix_get(matrix, i, j));
        }
        printf("\n");
    }
}