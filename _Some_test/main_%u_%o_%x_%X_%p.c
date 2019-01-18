/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_%i.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/13 20:20:24 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 15:05:23 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int main ()
{
	char c = 'i';
	unsigned int d = 42;
	short sh = 65;
	long l = 101;
	long long ll = 10142;
	char *str = "hello world";
	
	/*
	**		Tout les test avec Usigned int et adresse 
	*/

	dprintf (1, "\n\n\033[33m2- Some test with %%o %%u %%x %%y %%p:\n");
	
	/*
	**			%o only
	*/

	dprintf (1, "\n%%o test :\n");
	
	dprintf(1, "real %%o: %o|\n", d);
	ft_printf("Mine %%o: %o|\n", d);
	
	dprintf(1, "real %%#o: %#o|\n", d);
	ft_printf("Mine %%#o: %#o|\n", d);

	dprintf(1, "real %%#0o: %#0o|\n", d);
	ft_printf("Mine %%#0o: %#0o|\n", d);

	dprintf(1, "real %%#5o: %#5o|\n", d);
	ft_printf("Mine %%#5o: %#5o|\n", d);

	dprintf(1, "real %%#.5o: %#.5o|\n", d);
	ft_printf("Mine %%#.5o: %#.5o|\n", d);

	dprintf(1, "real %%#-o: %#-o|\n", d);
	ft_printf("Mine %%#-o: %#-o|\n", d);

	dprintf(1, "real %%#-5o: %-#5o|\n", d);
	ft_printf("Mine %%#-5o: %#-5o|\n", d);

	dprintf(1, "real %%#-.5o: %#-.5o|\n", d);
	ft_printf("Mine %%#-.5o: %#-.5o|\n", d);

	dprintf(1, "real %%#-9.5o: %#-9.5o|\n", d);
	ft_printf("Mine %%#-9.5o: %#-9.5o|\n", d);

	dprintf(1, "real %%#-5.9o: %#-5.9o|\n", d);
	ft_printf("Mine %%#-5.9o: %#-5.9o|\n", d);

	dprintf(1, "real %%#-5.0o: %#-5.0o|\n", d);
	ft_printf("Mine %%#-5.0o: %#-5.0o|\n", d);

	dprintf(1, "real %%#-1.0o: %#-1.0o|\n", 0);
	ft_printf("Mine %%#-1.0o: %#-1.0o|\n", 0);

	dprintf(1, "real %%#08o: %#08o|\n", 42);
	ft_printf("Mine %%#08o: %#08o|\n", 42);

	dprintf(1, "real %%#08o: %#08o|\n", 0);
	ft_printf("Mine %%#08o: %#08o|\n", 0);

	dprintf(1, "real %%#8o: %#8o|\n", 0);
	ft_printf("Mine %%#8o: %#8o|\n", 0);

	dprintf(1, "real %%5.o: %5.o|\n", 0);
	ft_printf("Mine %%5.o: %5.o|\n", 0);

	dprintf(1, "real %%5.0o: %5.0o|\n", 0);
	ft_printf("Mine %%5.0o: %5.0o|\n", 0);

	dprintf(1, "real %%5.0o: %5.0o|\n", 42);
	ft_printf("Mine %%5.0o: %5.0o|\n", 42);

	dprintf(1, "real %%5.0o: %5.0o|\n", 0);
	ft_printf("Mine %%5.0o: %5.0o|\n", 0);

	/*
	**			%u only
	*/
	dprintf (1, "\n%%u test :\n");
	
	dprintf(1, "real %%u: %u|\n", d);
	ft_printf("Mine %%u: %u|\n", d);
	
	dprintf(1, "real %%u: %u|\n", d);
	ft_printf("Mine %%u: %u|\n", d);

	dprintf(1, "real %%0u: %0o|\n", d);
	ft_printf("Mine %%0u: %0o|\n", d);

	dprintf(1, "real %%5u: %5u|\n", d);
	ft_printf("Mine %%5u: %5u|\n", d);

	dprintf(1, "real %%.5u: %.5u|\n", d);
	ft_printf("Mine %%.5u: %.5u|\n", d);

	dprintf(1, "real %%-u: %-u|\n", d);
	ft_printf("Mine %%-u: %-u|\n", d);

	dprintf(1, "real %%-5u: %-5u|\n", d);
	ft_printf("Mine %%-5u: %-5u|\n", d);

	dprintf(1, "real %%-9.1u: %-9.1u|\n", d);
	ft_printf("Mine %%-9.1u: %-9.1u|\n", d);

	dprintf(1, "real %%5.u: %5.u|\n", 0);
	ft_printf("Mine %%5.u: %5.u|\n", 0);

	dprintf(1, "real %%5.0u: %5.0u|\n", 0);
	ft_printf("Mine %%5.0u: %5.0u|\n", 0);

	/*
	**			%x only
	*/

	dprintf (1, "\n%%x test :\n");
	
	dprintf(1, "real %%x: %x|\n", d);
	ft_printf("Mine %%x: %x|\n", d);
	
	dprintf(1, "real %%#x: %#x|\n", d);
	ft_printf("Mine %%#x: %#x|\n", d);

	dprintf(1, "real %%#0x: %#0x|\n", d);
	ft_printf("Mine %%#0x: %#0x|\n", d);

	dprintf(1, "real %%#5x: %#5x|\n", d);
	ft_printf("Mine %%#5x: %#5x|\n", d);

	dprintf(1, "real %%#.5x: %#.5x|\n", d);
	ft_printf("Mine %%#.5x: %#.5x|\n", d);

	dprintf(1, "real %%#-x: %#-x|\n", d);
	ft_printf("Mine %%#-x: %#-x|\n", d);

	dprintf(1, "real %%#-5x: %-#5x|\n", d);
	ft_printf("Mine %%#-5x: %#-5x|\n", d);

	dprintf(1, "real %%#-.5x: %#-.5x|\n", d);
	ft_printf("Mine %%#-.5x: %#-.5x|\n", d);

	dprintf(1, "real %%#9.5x: %#9.5x|\n", d);
	ft_printf("Mine %%#9.5x: %#9.5x|\n", d);

	dprintf(1, "real %%#5.9x: %#5.9x|\n", d);
	ft_printf("Mine %%#5.9x: %#5.9x|\n", d);
	
	dprintf(1, "real %%x: %x|\n", 0);
	ft_printf("Mine %%x: %x|\n", 0);

	dprintf(1, "real %%5.x: %5.x|\n", 0);
	ft_printf("Mine %%5.x: %5.x|\n", 0);

	dprintf(1, "real %%#08x: %#08x|\n", 42);
	ft_printf("Mine %%#08x: %#08x|\n", 42);

	dprintf(1, "real %%#08x: %#08x|\n", 0);
	ft_printf("Mine %%#08x: %#08x|\n", 0);

	dprintf(1, "real %%#8x: %#8x|\n", 0);
	ft_printf("Mine %%#8x: %#8x|\n", 0);

	dprintf(1, "real %%#8x: %#8x|\n", 42);
	ft_printf("Mine %%#8x: %#8x|\n", 42);
	
	dprintf(1, "real %%#5.0x: %#5.0x|\n", 42);
	ft_printf("Mine %%#5.0x: %#5.0x|\n", 42);

	dprintf(1, "real %%#5.0x: %#5.0x|\n", 0);
	ft_printf("Mine %%#5.0x: %#5.0x|\n", 0);

	dprintf(1, "real %%5.0x: %5.0x|\n", 0);
	ft_printf("Mine %%5.0x: %5.0x|\n", 0);

	dprintf(1, "real %%5.0x: %5.0x|\n", 42);
	ft_printf("Mine %%5.0x: %5.0x|\n", 42);

	dprintf(1, "real %%-5.0x: %-5.0x|\n", 42);
	ft_printf("Mine %%-5.0x: %-5.0x|\n", 42);

	dprintf(1, "real %%-5.0x: %-5.0x|\n", 0);
	ft_printf("Mine %%-5.0x: %-5.0x|\n", 0);

	/*
	**		%X only ;
	*/

	dprintf (1, "\n%%X test :\n");
	
	dprintf(1, "real %%X: %X|\n", d);
	ft_printf("Mine %%X: %X|\n", d);
	
	dprintf(1, "real %%#X: %#X|\n", d);
	ft_printf("Mine %%#X: %#X|\n", d);

	dprintf(1, "real %%#0X: %#0X|\n", d);
	ft_printf("Mine %%#0X: %#0X|\n", d);

	dprintf(1, "real %%#5X: %#5X|\n", d);
	ft_printf("Mine %%#5X: %#5X|\n", d);

	dprintf(1, "real %%#.5X: %#.5X|\n", d);
	ft_printf("Mine %%#.5X: %#.5X|\n", d);

	dprintf(1, "real %%#-X: %#-X|\n", d);
	ft_printf("Mine %%#-X: %#-X|\n", d);

	dprintf(1, "real %%#-5X: %-#5X|\n", d);
	ft_printf("Mine %%#-5X: %#-5X|\n", d);

	dprintf(1, "real %%#-.5X: %#-.5X|\n", d);
	ft_printf("Mine %%#-.5X: %#-.5X|\n", d);

	dprintf(1, "real %%#9.5X: %#9.5X|\n", d);
	ft_printf("Mine %%#9.5X: %#9.5X|\n", d);

	dprintf(1, "real %%#5.9X: %#5.9X|\n", d);
	ft_printf("Mine %%#5.9X: %#5.9X|\n", d);

	dprintf(1, "real %%X: %X|\n", 0);
	ft_printf("Mine %%X: %X|\n", 0);

	dprintf(1, "real %%#08X: %#08X|\n", 42);
	ft_printf("Mine %%#08X: %#08X|\n", 42);

	dprintf(1, "real %%#08X: %#08X|\n", 0);
	ft_printf("Mine %%#08X: %#08X|\n", 0);

	dprintf(1, "real %%#8X: %#8X|\n", 0);
	ft_printf("Mine %%#8X: %#8X|\n", 0);
	
	dprintf(1, "real %%#5.0X: %#5.0X|\n", 42);
	ft_printf("Mine %%#5.0X: %#5.0X|\n", 42);

	dprintf(1, "real %%#5.0X: %#5.0X|\n", 0);
	ft_printf("Mine %%#5.0X: %#5.0X|\n", 0);

	dprintf(1, "real %%5.0X: %5.0X|\n", 0);
	ft_printf("Mine %%5.0X: %5.0X|\n", 0);

	dprintf(1, "real %%5.0X: %5.0X|\n", 42);
	ft_printf("Mine %%5.0X: %5.0X|\n", 42);

	/*
	**			%p only
	*/

	dprintf(1, "\n%%p test :\n");

	dprintf(1, "real %%p: %p|\n", str);
	ft_printf("Mine %%p: %p|\n", str);


	dprintf(1, "real %%-p: %-p|\n", str);
	ft_printf("Mine %%-p: %-p|\n", str);

	dprintf(1, "real %%-5p: %-5p|\n", str);
	ft_printf("Mine %%-5p: %-5p|\n", str);

	dprintf(1, "real %%5p: %5p|\n", str);
	ft_printf("Mine %%5p: %5p|\n", str);

	/*
	**			Sone %h.. test onnly
	*/

	ft_printf("\nSome %%h.. test :\n");

	dprintf(1, "real %%hd: %hd|\n", (short int)-128);
	ft_printf("Mine %%hd: %hd|\n", (short int)-128);

	dprintf(1, "real %%hhd: %hhd|\n", (char)-128);
	ft_printf("Mine %%hhd: %hhd|\n", (char)-128);

	dprintf(1, "real %%hd: %hd|\n", (short int)0);
	ft_printf("Mine %%hd: %hd|\n", (short int)0);

	dprintf(1, "real %%hhd: %hhd|\n", (char)0);
	ft_printf("Mine %%hhd: %hhd|\n", (char)0);

	dprintf(1, "real %%hd: %hd|\n", (short int)128);
	ft_printf("Mine %%hd: %hd|\n", (short int)128);

	dprintf(1, "real %%hhd: %hhd|\n", (char)128);
	ft_printf("Mine %%hhd: %hhd|\n", (char)128);

	dprintf(1, "real %%hd: %hd|\n", (short int)127);
	ft_printf("Mine %%hd: %hd|\n", (short int)127);

	dprintf(1, "real %%hhd: %hhd|\n", (char)127);
	ft_printf("Mine %%hhd: %hhd|\n", (char)127);

	dprintf(1, "real %%hd: %hd|\n", (short int)129);
	ft_printf("Mine %%hd: %hd|\n", (short int)129);

	dprintf(1, "real %%hhd: %hhd|\n", (char)129);
	ft_printf("Mine %%hhd: %hhd|\n", (char)129);

	/*
	**			More test : :)
	*/

	dprintf(1, "\nMore test :) :\n");

	dprintf(1, "real %%#x: %#x|\n", 0);
	ft_printf("Mine %%#x: %#x|\n", 0);

	dprintf(1, "real %%#X: %#X|\n", 0);
	ft_printf("Mine %%#X: %#X|\n", 0);

	dprintf(1, "real %%lx: %lx|\n", 4294967296);
	ft_printf("Mine %%lx: %lx|\n", 4294967296);

	dprintf(1, "real %%lX: %lX|\n", 4294967296);
	ft_printf("Mine %%lX: %lX|\n", 4294967296);
}
