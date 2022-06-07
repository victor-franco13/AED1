#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ponto Ponto;

Ponto *gera_ponto();
float setar_ponto(Ponto *pto, float N1, float N2);
float get_ponto(Ponto *pto, float *N1, float *N2);
void libera_ponto(Ponto **pto);
float distancia_ponto(Ponto *pto1, Ponto *pto2);