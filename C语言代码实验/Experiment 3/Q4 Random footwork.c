#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void generate_random_walk(char walk[12][12]);
void generate_random_walk(char walk[12][12]) {
	int i=1, j=1,order=0;
	int i_1, j_1;
	char alphabet = 'A';
	int move;
	for (i = 1; i < 11; i++) {
		for (j = 0; j < 10; j++) 
			walk[i][j]='.';
	}
	i = 1, j = 1;
	srand((unsigned)time(NULL));
	for (; order < 26; order++) {
			i_1 = i, j_1 = j;                
			while (walk[i_1][j_1]!='.'||i_1>9||i_1<0||j_1<0||j_1>9) {
				i_1 = i, j_1 = j;
				move = rand() % 4;
				switch (move) {
				case 0:i_1++; break;
				case 1:i_1--; break;
				case 2:j_1++; break;
				default:j_1--; break;
				}
			}
			i = i_1, j = j_1;
			walk[i][j] = alphabet;
			if (walk[i + 1][j] != '.'&&walk[i - 1][j] != '.'&&walk[i][j + 1] != '.'&&walk[i][j - 1] != '.')
				return -1;
			else
				alphabet++;
	}
}
void print_array(char walk[10][10]);
void print_array(char walk[10][10]) {
	int i, j;
	for (i=1; i < 11; i++) {
		for (j=1; j < 11; j++) {
			printf("  %c", walk[i][j]);
		}
		printf("\n");
	}
	return 2;
}
int	main(){
	char walk[12][12] ;
	generate_random_walk(walk);
	print_array(walk);
	system("pause");
	return 0;
}


