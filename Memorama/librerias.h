#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>

enum MENU{OPC1 = 1, OPC2, OPC3, OPC4, OPC5, OPC6, OPC7};
int opc = 0, x=0, y=0;
int numeros[20]; 
int color[20];

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void cambiarPosicion();
void obtenerValores();
void imprimirNumeros();
void gotoxy(int, int);
void desactivarMaximizar();
void ocultarCursor();
void mostrarCursor();
void unJugador1();
void unJugador2();
void unJugador3();
void centrarTexto(const char *, int);
void menu1(int, int, int, int);
void menu2(int, int, int, int);
void menu3(int, int, int, int);
void cargando1();
void cargando2();
void cargando3();
void jugarJugador1(char);
void jugarJugador2(char);
void jugarJugador3(char);
char jugador1(const char *, char );
char jugador2(const char *, char );
char jugador3(const char *, char );
void diseno1();
void diseno2();
void diseno3();
void menuJugar1();
void menuJugar2();
void menuJugar3();
void menuConfiguracion1();
void menuConfiguracion2();
void menuConfiguracion3();
void menuInicial();
void menuDia();
void menuNoche();

#include "decoracion.h"
#include "funciones.h"
#include "menus.h"
