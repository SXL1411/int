#include <stdio.h>
#include <string.h>
char c[6][9] = {
'-','-','*','*','-','*','*','-','-',
'-','*','-','-','*','-','-','*','-',
'-','*','-','-','-','-','-','*','-',
'-','-','*','-','-','-','*','-','-',
'-','-','-','*','-','*','-','-','-',
'-','-','-','-','*','-','-','-','-'
};
int main() {
	int x,y,w,h;
	scanf("%d%d%d%d",&y,&x,&w,&h);
	if(!(y+w>=2 && y+w<=10) || !(x+h>=2 && x+h<=7)) {
		printf("Input Error\n");
		return 0;
	}
	if(!(y>=1 && y<=9) || !(x>=1 && x<=6) || !(w>=1 && w<=9) || !(h>=1 && h<=6)) {
		printf("Input Error\n");
		return 0;
	}
	x--;y--;
	for(int i = x ; i < x+h ; ++i) {
		for(int j = y ; j < y+w ; ++j) printf("%c",c[i][j]);
		printf("\n");
	}
}
