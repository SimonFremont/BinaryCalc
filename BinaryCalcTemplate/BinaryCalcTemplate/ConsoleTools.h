#pragma once

#include <windows.h> 
#include <time.h>
#include <conio.h>
#include <string.h>

HANDLE hStdout, hStdin;
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
WORD wOldColorAttrs;
CHAR chBuffer[256];
DWORD cRead, cWritten, fdwMode, fdwOldMode;
DWORD Mode;
DWORD wOldMode;

// attend la frappe d'une touche parmi celles sp�cifi�es en param�tre
// ex: car =  readChar("onON");
char readChar(const char* filtre);
// permet d'utiliser les fonctions GotoXY et PlotChar (un seul appel en d�but de programme)
int OpenConsole();
// CloseConsole() doit �tre appel�e apr�s la derni�re utilisation de GotoXY et PlotChar
int CloseConsole();
// renvoie la taille de la console
COORD GetConsoleSize();
// d�place le curseur en X,Y position du prochain affichage
void GotoXY(unsigned short int X, unsigned short int Y);
// affiche un caract�re � la position du curseur
int PlotChar(char SomeChar);
// renvoie une valeur enti�re al�atoire rang_min<= x < rang_max
int RangedRand(int range_min, int range_max);
// affiche un invers� vid�o de la zone de la taille (lenght x height) en postion pos pdt le tps duration en ms
int blink(COORD pos, DWORD length, DWORD height, DWORD duration);