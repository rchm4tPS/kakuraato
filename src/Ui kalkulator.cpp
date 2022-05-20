#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y);
void tampilMainMenu();
void tampilKalkStandar();
void tampilKalkAkur();

void tampilMainMenu(){
 printf("\t\t\t\t==========================================================\n");
 printf("\t\t\t\t\tKAKURAATO\n");
 printf("\n");
 printf("\t\t\t\t\tPilihan Menu:\n");
 printf("\t\t\t\t\t1. Kalkulator Standar\n");
 printf("\t\t\t\t\t2. Kalkulator Akar Kuadrat\n");
 printf("\t\t\t\t\t3. Help\n");
 printf("\t\t\t\t\t4. History Penggunaan Kakuraato\n");
 printf("\n");
 printf("\t\t\t\t\t0. Exit\n");
 printf("\n\n");
 printf("\t\t\t\t\tMenu Yang Dipilih : [ ] ");
 printf("\n\n");
 printf("\t\t\t\t==========================================================\n");
}

void tampilKalkStandar(){
 system("cls");
 printf("\t\t\t\t==========================================================\n");
 printf("\t\t\t\t\tKalkulator Standar\n");
 printf("\n\n");
 printf("\t\t\t\t\tEkspresi\n\t\t\t\t\tMatematika\t :\n\t\t\t\t\tYang dihitung\n");
 printf("\n");
 printf("\t\t\t\t\tHasil\n\t\t\t\t\tPerhitungan\t :\n\t\t\t\t\tEkspresi\n");
 printf("\n\n");
 printf("\t\t\t\t\tSilakan tekan angka 0 untuk kembali ke home menu");
 printf("\n\n");
 printf("\t\t\t\t==========================================================\n");
}

void tampilKalkAkur(){
 system("cls");
 printf("\t\t\t\t==========================================================\n");
 printf("\t\t\t\t\tKalkulator Akar Kuadrat\n");
 printf("\n\n");
 printf("\t\t\t\t\tEkspresi\n\t\t\t\t\tMatematika\t :\n\t\t\t\t\tYang dihitung\n");
 printf("\n");
 printf("\t\t\t\t\tNilai Akar Ke-1\t :\n");
 printf("\t\t\t\t\tNilai Akar Ke-2\t :\n");
 printf("\n\n");
 printf("\t\t\t\t\tSilakan tekan angka 0 untuk kembali ke home menu");
 printf("\n\n");
 printf("\t\t\t\t==========================================================\n");
}

void gotoxy(int x, int y) {
    COORD coord;
     
    coord.X = x;
    coord.Y = y;
     
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tampilHelp(){
	FILE *help = NULL; 
	system("cls");
	printf("\t\t\t\t -------------\n");
	printf("\t\t\t\t    | HELP |\n");
	printf("\t\t\t\t -------------\n");
	char isiHelp[300];
	
	help = fopen("Help.txt", "r");
	if(help == NULL){
		printf("File Doesn't Exist");
	}else {
		while(fscanf(help,"%[^\n]%*c", isiHelp) == 1){
			printf("%s\n",isiHelp);
		}
	}
	fclose(help);
	printf("\n");
	printf("\n\nInput Number 0 For Back to Main Menu : ");
}

int main ()
{
	int input;
	tampilMainMenu();
	gotoxy(61,12);
	scanf("%d",&input);
	if(input == 1){
		tampilKalkStandar();
	}else if(input == 2){
		tampilKalkAkur();
	}else if(input == 3){
		tampilHelp();
	}else{
		return 0;
	}
}
