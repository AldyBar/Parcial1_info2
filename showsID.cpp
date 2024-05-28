#include "showsID.h"
#include <stdio.h>
#include <stdint.h>

void showIDs(){                              // Funcion para mostrar los IDs de todos los equipos en la red
    uint64_t *v;
    int max= 65535;
    v = new uint64_t[max];
    FILE *f = fopen ("network_structure.dat", "rb"); //abre el archivo
    uint64_t header;
     fread (&header, sizeof (uint64_t), 1, f);
     uint64_t id = header >> 48;
     v[id]= id;
     int i=0;
    for (i; i< max; i++)
    {
        if (v[i] != 0)
        {
            printf ("ID%d: %d\n", i, v[i]);
          }
    };
    fclose (f);
 }
