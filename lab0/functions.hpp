#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdlib.h> //rand
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <queue>
#include <unistd.h>


using namespace std;


void clearScreen();
void moveScreen();
void printScreen(char* array, int i);
void wait(unsigned int time);
void printLine(char* temp, int ancho);

#endif



