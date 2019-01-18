/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/06 09:05:13 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 16:07:24 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int main(int argc, const char *argv[])
{
	int ent = 42;
	int null = 0;
	unsigned int en = 42;
	short int e = 42;
	long int enti = 42;
	long long entie = 42;
	double deci = 31499.159;
	long double decim = 31499.159;
	char *str = "Hello World";
	char c = 'i';
	int tab[]= {0, 1, 2, 3};

/*
**			PARTI OBLIGATOIRE
*/

printf ("Partie OBLIGATOIRE\n");

/*
**			Conversion uniquement
*/

printf ("\nConversion : \n");

/*
**			Conversion c, s, p, d, i, o, u, x, X
*/

printf ("\nchar : c = %c\n", c);
printf ("char * : str =  %s\n", str);
printf ("p : adresse str = %p\n", str);
printf ("d : int = %d\n", ent);
printf ("i : int = %i\n", ent);
printf ("o : unsigned int octal : %o\n", en);
printf ("u : unsigned int signed : %u\n", en);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %x\n", en);
printf ("X : unsined int hexadecimal, lettre en majuscule : %X\n", en);

/*
**			Converion avec modificateur de longueur hh, h, l, ll
*/

printf ("\nConversion avec modificateur de longeur: \n");

/*
**			Flag hh : prend un char et donne la valeur ascii du caractere.
*/

printf ("\nFlag hh :\n");
printf ("d : int = %hhd\n", c);
printf ("i : int = %hhi\n", c);
printf ("o : unsigned int octal : %hho\n", c);
printf ("u : unsigned int signed : %hhu\n", c);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %hhx\n", c);
printf ("X : unsined int hexadecimal, lettre en majuscule : %hhX\n", c);

/*
**			Flag h : prend un short int et donne la valeur en short int.
*/

printf ("\nFlag h :\n");
printf ("d : int = %hd\n", e);
printf ("i : int = %hi\n", e);
printf ("o : unsigned int octal : %ho\n", e);
printf ("u : unsigned int signed : %hu\n", e);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %hx\n", e);
printf ("X : unsined int hexadecimal, lettre en majuscule : %hX\n", e);

/*
**			Flag l : prend un long int et donne un long int (win_t ou wchar_t)
*/

printf ("\nFlag l :\n");
printf ("d : int = %ld\n", enti);
printf ("i : int = %li\n", enti);
printf ("o : unsigned int octal : %lo\n", enti);
printf ("u : unsigned int signed : %lu\n", enti);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %lx\n", enti);
printf ("X : unsined int hexadecimal, lettre en majuscule : %lX\n", enti);

/*
**			Flag ll : prend un long long int et donne un long long int.
*/

printf ("\nFlag ll :\n");
printf ("d : int = %lld\n", entie);
printf ("i : int = %lli\n", entie);
printf ("o : unsigned int octal : %llo\n", entie);
printf ("u : unsigned int signed : %llu\n", entie);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %llx\n", entie);
printf ("X : unsined int hexadecimal, lettre en majuscule : %llX\n", entie);

/*
**			Flag l et L pour les float, conversion f
*/

printf ("\nFlag l et L pour les float:\n");
printf ("f : float : %f\n", deci);
printf ("lf : float : %lf\n", deci);
printf ("Lf : float : %Lf\n", decim);

/*
**			% % : aucune Conversion
*/

printf ("\nchar : c = %%\n");

/*
**			Conversion avec attribut
*/

printf ("\nConversion avec attribut: \n");

/*
**			FLAG # : 
*/

double decima = 2.34;
printf ("\nFlag # :\n");
printf ("o : unsigned int octal : %#o\n", en);
printf ("o null : unsigned octal : %#o\n",null);
printf ("o : unsigned int octal : precision 0 :  %#.0o\n", en);
printf ("o : unsigned int octal : precision 5 :  %#.5o\n", en);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %#x\n", en);
printf ("X : unsined int hexadecimal, lettre en majuscule : %#X\n", en);
printf ("x : unsigned int hexadecimal, lettre en minuscule, precision 0 : %#.0x\n", en);
printf ("x : unsigned int hexadecimal, lettre en minuscule, precision 5 : %#.5x\n", en);
printf ("f : float : %#f\n", deci);
printf ("f : float sans decimal : %#.0f\n", decima);

/*
**			FLAG 0 :
*/

printf("\nFlag 0 :\n");
printf ("d : int = %0d\n", ent);
printf ("i : int = %0i\n", ent);
printf ("o : unsigned int octal : %0o\n", en);
printf ("u : unsigned int signed : %0u\n", en);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %0x\n", en);
printf ("X : unsined int hexadecimal, lettre en majuscule : %0X\n", en);
printf ("f : float : %0f\n", deci);

/*
**			Flag - :
*/

printf ("\nFlag - :\n");
printf ("\nchar : c = %-c\n", c);
printf ("char * : str =  %-s\n", str);
printf ("p : adresse str = %-p\n", str);
printf ("d : int = %-d\n", ent);
printf ("i : int = %-i\n", ent);
printf ("o : unsigned int octal : %-o\n", en);
printf ("u : unsigned int signed : %-u\n", en);
printf ("x : unsigned int hexadecimal, lettre en minuscule : %-x\n", en);
printf ("X : unsined int hexadecimal, lettre en majuscule : %-X\n", en);
printf ("f : float : %-f\n", deci);

/*
**			PARTI BONUS
*/

printf ("\nPartie BONUS :\n");

/*
**			FLAG #
*/



	return 0;
}
