#include <stdlib.h>
#include <stdio.h>

void make_couple(unsigned int tab[8][2], int row1up, int row2up, int row3up, int row4up, int row1down, int row2down, int row3down, int row4down,
		int col1left, int col2left, int col3left, int col4left, int col1right, int col2right, int col3right, int col4right);
void afficher_jeu(int jeu[4][4]);
void try_to_complete(int jeu[4][4]);
void rebelote(int tab[8][2], int jeu[4][4]);
void ft_putchar(char c);
char int_to_char(int nbr);
int ft_atoi(char *str);
int is_numeric(char c);
int puissance(int i, int n);
int char_to_num(char c);
int chck_fin(int jeu[4][4]);

int main (int ac, char **av)
{
	int jeu [4][4];
	int arg[16];
	unsigned int i;
	int j;

	i = 0;
	j = 0;


	unsigned int tab[8][2];

	if (ac == 0)
		return (0);

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


void try_to_complete(int jeu[4][4]) {
	//Fonctions qui vont remplir logiquement les lignes/colonnes contenant deja 3 cases remplies

	unsigned int i = 0;
	while(i < 4) {
		unsigned int count = 0;
		unsigned int tmp = 0;
		unsigned int j = 0;
		while(j < 4) {
			if (jeu[i][j] == 0)
				count++;
			tmp += jeu[i][j];
			j++;
		}
		if (count == 1) {
			unsigned int k = 0;
			while (k < 4) {
				if (jeu[i][k] == 0)
					jeu[i][k] = 10 - tmp;
				k++;
			}
		}
		i++;
	}
	i = 0;
	while(i < 4) {
		unsigned int count = 0;
		unsigned int tmp = 0;
		unsigned int j = 0;
		while(j < 4) {
			if (jeu[j][i] == 0)
				count++;
			tmp += jeu[j][i];
			j++;
		}
		if (count == 1) {
			unsigned int k = 0;
			while (k < 4) {
				if (jeu[k][i] == 0)
					jeu[k][i] = 10 - tmp;
				k++;
			}
		}
		i++;
	}
}

void rebelote(int tab[8][2], int jeu[4][4]) {
	const int MAX_COUPLE = 8;
	unsigned int i = 0;
	while (i < MAX_COUPLE) {
		unsigned int j = 0;
		while (j < 2) {
			if (tab[i][j] == 4) {
				unsigned int tmp = 0;
				if (j == 0) {
					unsigned int k = 0;
					while (k < 4) {
						if (i < MAX_COUPLE / 2)
							jeu[k][i] = ++tmp;
						else
							jeu[i - 4][k] = ++tmp;
						k++;
					}
				}
				else {
					int k = 3;
					while (k >= 0) {
						if (i < MAX_COUPLE / 2)
							jeu[k][i] = ++tmp;
						else
							jeu[i - 4][k] = ++tmp;
						k--;
					}
				}
			}
			else if (tab[i][j] == 1) {
				if (i < MAX_COUPLE / 2) {
					if (j == 0)
						jeu[0][i] = 4;
					else
						jeu[3][i] = 4;
				}
				else {
					if (j == 0)
						jeu[i - 4][0] = 4;
					else
						jeu[i - 4][3] = 4;
				}
			}
			else if (tab[i][0] == 2 && tab[i][1] == 1) {
				if (i < MAX_COUPLE / 2) {
					jeu[0][i] = 3;
					if (jeu[1][i] == 2)
						jeu[2][i] = 1;
					if (jeu[1][i] == 1)
						jeu[2][i] = 2;
				}
				else {
					jeu[i - 4][0] = 3;
					if (jeu[i - 4][1] == 2)
						jeu[i - 4][2] = 1;
					if (jeu[i - 4][1] == 1)
						jeu[i - 4][2] = 2;
				}
			}
			else if (tab[i][0] == 1 && tab[i][1] == 2) {
				if (i < MAX_COUPLE / 2) {
					jeu[3][i] = 3;
					if (jeu[2][i] == 2)
						jeu[1][i] = 1;
					else if (jeu[2][i] == 1)
						jeu[1][i] = 2;
				}
				else {
					jeu[i - 4][3] = 3;
					if (jeu[i - 4][2] == 2)
						jeu[i - 4][1] = 1;
					else if (jeu[i - 4][2] == 1)
						jeu[i - 4][1] = 2;
				}
			}
			else if (tab[i][0] == 2 && tab[i][1] == 3) {
				if (i < MAX_COUPLE / 2) {
					jeu[1][i] = 4;
					if (jeu[0][i] == 1) {
						jeu[2][i] = 3;
						jeu[3][i] = 2;
					}
					else if (jeu[0][i] == 2) {
						jeu[2][i] = 3;
						jeu[3][i] = 1;
					}
					else if (jeu[0][i] == 3) {
						jeu[2][i] = 2;
						jeu[3][i] = 1;
					}
					if (jeu[3][i] == 2) {
						jeu[2][i] = 3;
						jeu[0][i] = 1;
					}
					else if (jeu[3][i] == 1) {
						if (jeu[2][i] == 3)
							jeu[0][i] = 2;
						else if (jeu[2][i] == 2)
							jeu[0][i] = 3;
					}
				}
				else {
					jeu[i - 4][1] = 4;
					if (jeu[i - 4][0] == 1) {
						jeu[i - 4][2] = 3;
						jeu[i - 4][3] = 2;
					}
					else if (jeu[i - 4][0] == 2) {
						jeu[i - 4][2] = 3;
						jeu[i - 4][3] = 1;
					}
					else if (jeu[i - 4][0] == 3) {
						jeu[i - 4][2] = 2;
						jeu[i - 4][3] = 1;
					}
					if (jeu[i - 4][3] == 2) {
						jeu[i - 4][2] = 3;
						jeu[i - 4][0] = 1;
					}
					else if (jeu[i - 4][3] == 1) {
						if (jeu[i - 4][2] == 3)
							jeu[i - 4][0] = 2;
						else if (jeu[i - 4][2] == 2)
							jeu[i - 4][0] = 3;
					}
				}
			}
			else if (tab[i][0] == 3 && tab[i][1] == 2) {
				if (i < MAX_COUPLE / 2) {
					jeu[2][i] = 4;
					if (jeu[3][i] == 1) {
						jeu[1][i] = 3;
						jeu[0][i] = 2;
					}
					else if (jeu[3][i] == 2) {
						jeu[1][i] = 3;
						jeu[0][i] = 1;
					}
					else if (jeu[3][i] == 3) {
						jeu[1][i] = 2;
						jeu[0][i] = 1;
					}
					if (jeu[0][i] == 2) {
						jeu[1][i] = 3;
						jeu[3][i] = 1;
					}
					else if (jeu[0][i] == 1) {
						if (jeu[1][i] == 3)
							jeu[3][i] = 2;
						else if (jeu[1][i] == 2)
							jeu[3][i] = 3;
					}
				}
				else {
					jeu[i - 4][2] = 4;
					if (jeu[i - 4][3] == 1) {
						jeu[i - 4][1] = 3;
						jeu[i - 4][0] = 2;
					}
					else if (jeu[i - 4][3] == 2) {
						jeu[i - 4][1] = 3;
						jeu[i - 4][0] = 1;
					}
					else if (jeu[i - 4][3] == 3) {
						jeu[i - 4][1] = 2;
						jeu[i - 4][0] = 1;
					}
					if (jeu[i - 4][0] == 2) {
						jeu[i - 4][1] = 3;
						jeu[i - 4][3] = 1;
					}
					else if (jeu[i - 4][0] == 1) {
						if (jeu[i - 4][1] == 3)
							jeu[i - 4][3] = 2;
						else if (jeu[i - 4][1] == 2)
							jeu[i - 4][3] = 3;
					}
				}
			}
			j++;
		}
		i++;
	}

}

void afficher_jeu(int jeu[4][4]) {
	unsigned int i = 0;
	while( i < 4) {
		unsigned int j = 0;
		while(j < 4) {
			ft_putchar(int_to_char(jeu[j][i]));
					j++;
					}
					ft_putchar('\n');
					i++;
					}
					ft_putchar('\n');
					ft_putchar('\n');
					}


					int chck_fin(int jeu[4][4]) {
					unsigned int i = 0;
					while (i < 4) {
					unsigned int j = 0;
					while (j < 4) {
					if (jeu[i][j] == 0)
					return 0;
					j++;
					}
					i++;
					}
					return 1;
					}

void make_couple(unsigned int tab[8][2], 
		int row1left, int row2left, int row3left, int row4left,
		int row1right, int row2right, int row3right, int row4right,
		int col1up, int col2up, int col3up, int col4up,
		int col1down, int col2down, int col3down, int col4down) {



	tab[0][0] = row1left;
	tab[0][1] = row1right;
	tab[1][0] = row2left;
	tab[1][1] = row2right;
	tab[2][0] = row3left;
	tab[2][1] = row3right;
	tab[3][0] = row4left;
	tab[3][1] = row4right;
	tab[4][0] = col1up;
	tab[4][1] = col1down;
	tab[5][0] = col2up;
	tab[5][1] = col2down;
	tab[6][0] = col3up;
	tab[6][1] = col3down;
	tab[7][0] = col4up;
	tab[7][1] = col4down;

}



char int_to_char(int nbr) {
	return nbr + 48;
}
int ft_atoi(char *str) {
	int ret = 0, count = 0, i = 0;
	int tmp[10];
	int *pt_tmp = &tmp[0];
	int neg = 0;
	if (*str == 45) {
		neg = 1;
		*str++;
	}
	while (is_numeric(*str) && count++ < 10)
		*pt_tmp++ = char_to_num(*str++);
	while (count > 0) {
		if (tmp[i + 1] > 2 && count == 9)
			return 0;
		ret += tmp[i++] * puissance(10, --count);
	}
	if (neg)
		ret *= -1;
	return ret;
}






int is_numeric(char c) {
	if (c >= 48 && c < 58)
		return 1;
	return 0;
}
int char_to_num(char c) {
	if (c >= 48 && c < 58)
		return c - 48;
	else
		return NULL;
}
int puissance(int i, int n) {
	if (n == 0)
		return 1;
	else
		return i * puissance(i, n - 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
