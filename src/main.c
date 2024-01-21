#include<stdio.h>
#include<gsl/gsl_matrix.h>
#include"../include/tools.h"


int main(){
    gsl_matrix *W;

    /* Extract matrix from file */
    FILE *W_txt_file;
    char W_filename[] = "W.txt";
    W_txt_file = fopen(W_filename, "r");

    if(W_txt_file != NULL){ 
        W = matrix_read(W_txt_file, W);
    }else{
        printf("Error opening %s\n", W_filename);
    }

    matrix_print(W);

    fclose(W_txt_file);
    gsl_matrix_free(W);

    return 0;
}

