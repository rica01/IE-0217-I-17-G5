#include "functions.hpp"

void clearScreen(){
	//cout << string(100, '\n');
	cout << "\x1B[2J\x1B[H";
}

void moveScreen(){

}
void printScreen(char array[10], int i){

	for (int j = 0; j<10; j++){
	array[j] = (rand() % (126 +1 - 32) + 32);
	//cout << (char) array[j];
	
	printf("%c\n", array[j]);
	}	
}

void wait(unsigned int time){
	for(int i=0;i<=time*5000000;i++){}
}