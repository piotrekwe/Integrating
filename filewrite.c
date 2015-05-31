#include <stdio.h>

FILE* fptr;
char nazwaplikuwynikowego="results.txt";
fptr=fopen(nazwaplikuwynikowego,"w")
fprintf(fptr,"%f",c); //wypisuje c  - liczbe zmiennoprzecinkowa
fclose(fptr);
int main(void)
