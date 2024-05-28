#include <stdio.h>
#include <stdint.h>
#include "showsID.h"

int main() {

    FILE *f = fopen ("network_structure.dat", "rb"); //abre el archivo
    uint64_t header;
    fread (&header, sizeof (uint64_t), 1, f);
    uint64_t id = header >> 48 ; 
    uint64_t lower = (header << 16) >> 48;                                
    uint64_t type = (header << 32) >> 56; 
    uint64_t info = (header << 40) >> 56;   
    uint64_t upper = (header << 48) >> 48;   
    uint64_t n_campos = lower;
    showIDs();
//for (int i=0, i< n-campos, i++)
    fclose (f); // cierra
    return 0; 
}