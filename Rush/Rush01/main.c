#include <stdlib.h>
#include <stdio.h>

void make_couple(unsigned int tab[8][2], int row1up, int row2up, int row3up, int row4up, int row1down, int row2down, int row3down, int row4down,int col1left, int col2left, int col3left, int col4left, int col1right, int col2right, int col3right, int col4right);

int chck_fin(int jeu[4][4]);

void afficher_jeu(int jeu[4][4]);

void try_to_complete(int jeu[4][4]);

void rebelote(int tab[8][2], int jeu[4][4]);



int	ft_atoi(char *str);

int main (int ac, char **av)
{	
	int jeu [4][4];
	int arg[16];
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	
	
	unsigned int tab[8][2];

	while(av[1][i])
	{
		if(av[1][i] <= '4' && av[1][i] >= '0')		
			arg[i] = av[1][i] - 48;
		i++;
	}


	make_couple(tab,arg[8], arg[9],arg[10],arg[11],arg[12],arg[13],arg[14],arg[15],arg[0],arg[1],arg[2],arg[3],arg[4],arg[5],arg[6],arg[7]);

	while(i<4)
	{
		while(j < 4){
			jeu[i][j] = 0;
			j++;
		}
		i++;
	}
while (!chck_fin(jeu)) 
	{
rebelote(tab, jeu);
try_to_complete(jeu);
afficher_jeu(jeu);
if (i++ == 10)
break;

	} 
	afficher_jeu(jeu);
	getchar();
	return (0);

}
