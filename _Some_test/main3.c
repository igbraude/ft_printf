/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main3.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 17:10:37 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 15:18:12 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int main (int argc, char **argv)
{
	int ent = 42;
	unsigned int en = 42;
	short int e = 42;
	long  enti = 42;
	long long entie = 42;
	double deci = 31499.159;
	long double decim = 31499.159;
	char *str = "Hello World";
	char c = 'i';
	int tab[]= {0, 1, 2, 3};

/*
**			PARTI OBLIGATOIRE
*/

ft_printf ("Partie OBLIGATOIRE\n");

/*
**			Conversion uniquement
*/

ft_printf ("\nConversion : \n");

/*
**			Conversion c, s, p, d, i, o, u, x, X
*/

ft_printf ("\nchar : c = %c\n", c);
ft_printf ("char * : str =  %s\n", str);
ft_printf ("p : adresse str = %p\n", str);
ft_printf ("d : int = %d\n", ent);
ft_printf ("i : int = %i\n", ent);
ft_printf ("o : unsigned int octal : %o\n", en);
ft_printf ("u : unsigned int signed : %u\n", en);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule : %#x\n", en);
ft_printf ("X : unsined int hexadecimal, lettre en majuscule : %X\n", en);

/*
**			Converion avec modificateur de longueur hh, h, l, ll
*/

ft_printf ("\nConversion avec modificateur de longeur: \n");

/*
**			Flag hh : prend un char et donne la valeur ascii du caractere.
*/

ft_printf ("\nFlag hh :\n");
ft_printf ("d : int = %hhd\n", c);
ft_printf ("i : int = %hhi\n", c);
ft_printf ("o : unsigned int octal : %hho\n", c);
ft_printf ("u : unsigned int signed : %hhu\n", c);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule : %hhx\n", c);
ft_printf ("X : unsined int hexadecimal, lettre en majuscule : %hhX\n", c);

/*
**			Flag h : prend un short int et donne la valeur en short int.
*/

ft_printf ("\nFlag h :\n");
ft_printf ("d : int = %hd\n", e);
ft_printf ("i : int = %hi\n", e);
ft_printf ("o : unsigned int octal : %ho\n", e);
ft_printf ("u : unsigned int signed : %hu\n", e);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule : %hx\n", e);
ft_printf ("X : unsined int hexadecimal, lettre en majuscule : %hX\n", e);

/*
**			Flag l : prend un long et donne un long (win_t ou wchar_t)
*/

ft_printf ("\nFlag l :\n");
ft_printf ("d : int = %ld\n", enti);
ft_printf ("i : int = %li\n", enti);
ft_printf ("o : unsigned int octal : %lo\n", enti);
ft_printf ("u : unsigned int signed : %lu\n", enti);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule : %lx\n", enti);
ft_printf ("X : unsined int hexadecimal, lettre en majuscule : %lX\n", enti);

/*
**			Flag ll : prend un long long  et donne un long long .
*/

ft_printf ("\nFlag ll :\n");
ft_printf ("d : int = %lld\n", entie);
ft_printf ("i : int = %lli\n", entie);
ft_printf ("o : unsigned int octal : %llo\n", entie);
ft_printf ("u : unsigned int signed : %llu\n", entie);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule : %llx\n", entie);
ft_printf ("X : unsined int hexadecimal, lettre en majuscule : %llX\n", entie);

/*
**			Flag l et L pour les float, conversion f
*/

ft_printf ("\nFlag l et L pour les float:\n");
ft_printf ("f : float : %lf\n", deci);
ft_printf ("L : float : %Lf\n", decim);
printf ("l vrai printf : %.6Lf\n", decim);

/*
**			% % : aucune Conversion
*/

ft_printf ("\nchar : c = %%\n");

/*
**			FLAG # : 
*/

double decima = 2.34;
int null = 0;

ft_printf ("\nFlag # :\n");
ft_printf ("o : unsigned int octal : %#o\n", en);
ft_printf ("o null : unsigned octal : %#o\n", null);
ft_printf ("o : unsigned int octal : precision 0 :  %#.0o\n", en);
ft_printf ("o : unsigned int octal : precision 5 :  %#.5o\n", en);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule : %#x\n", en);
ft_printf ("X : unsined int hexadecimal, lettre en majuscule : %#X\n", en);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule, precision 0 : %#.0x\n", en);
ft_printf ("x : unsigned int hexadecimal, lettre en minuscule, precision 5 : %#.5x\n", en);
ft_printf ("f : float : %#f\n", deci);
ft_printf ("f : float sans decimal : %#.0f\n", decima);


	return (0);
}
