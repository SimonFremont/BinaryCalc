#pragma once
#include <stdbool.h>
// Base de calcul courante
typedef enum { Hexa, Dec, Oct, Bin } base;
base currentBase;
// taille de codage courante
typedef enum { Byte=1, Word=2, DWord=4, QWord=8 } mode;
mode currentMode;
// Op�rande 1 : valeur quand byte
char Op1Val_byte;
bool Op1Val_valid;
// Op�rande 2 : valeur quand unsigned char
char Op2Val_byte;
bool Op2Val_valid;
// initialisation de la calculatrice
int initCalc();
// nettoyage de l'�cran
int clearScreen(void);
// force l'�valuation de l'expression en cours
int evaluate();


int afficherCalculatrice(void );
#define POSX 0	// position absolue de la calculatrice 
#define POSY 0
#define POSXBRAOPEN 0
#define POSYBRAOPEN 28
#define POSXBRACLOS 5
#define POSYBRACLOS 28
#define POSXSIGN 10
#define POSYSIGN 28
#define POSXZERO 15
#define POSYZERO 28
#define POSXDOT 20
#define POSYDOT 28
#define POSXEQUAL 25
#define POSYEQUAL 28


#define POSXE 0
#define POSYE 25
#define POSXF 5
#define POSYF 25
#define POSXONE 10
#define POSYONE 25
#define POSXTWO 15
#define POSYTWO 25
#define POSXTHREE 20
#define POSYTHREE 25
#define POSXPLUS 25
#define POSYPLUS 25
