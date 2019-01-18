/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_%c_%d.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/16 16:43:02 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 19:10:16 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 17:04:41 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/16 16:42:57 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

/*
**		Test main sans undefined behavor et plusieurs argument
*/

int main ()
{
	char c = 'i';
	int d = -42;
	short sh = 65;
	long l = 101;
	long long ll = 10142;
	/*
	**		Tout les test avec c
	*/

	printf ("1 - Some test with %%c :\n");
	
	dprintf(1, "\nreal %%c: %c|\n", c);
	ft_printf("Mine %%c: %c|\n", c);
	
	dprintf(1, "real %%5c: %5c|\n", c);
	ft_printf("Mine %%5c: %5c|\n", c);
	
	dprintf(1, "real %%-5c: %-5c|\n", c);
	ft_printf("Mine %%-5c: %-5c|\n", c);
	
	dprintf(1, "real %%-5c: %-5c|\n", c);
	ft_printf("Mine %%-5c: %-5c|\n", c);
	
	/*
	**		Tout les test avec d
	*/

	dprintf (1, "\n\n\033[32m2- Some test with %%d :\n");

	/*
	**			%d only
	*/

	dprintf (1, "\n%%d test :\n");
	
	dprintf(1, "real %%d: %d|\n", d);
	ft_printf("Mine %%d: %d|\n", d);
	
	dprintf(1, "real %%5d: %5d|\n", d);
	ft_printf("Mine %%5d: %5d|\n", d);
	
	dprintf(1, "real %%.5d: %.5d|\n", d);
	ft_printf("Mine %%.5d: %.5d|\n", d);
	
	dprintf(1, "real %%5.9d: %5.9d|\n", d);
	ft_printf("Mine %%5.9d: %5.9d|\n", d);
	
	dprintf(1, "real %%9.5d: %9.5d|\n", d);
	ft_printf("Mine %%9.5d: %9.5d|\n", d);
	
	dprintf(1, "real %%-d: %-d|\n", d);
	ft_printf("Mine %%-d: %-d|\n", d);
	
	dprintf(1, "real %%-5d: %-5d|\n", d);
	ft_printf("Mine %%-5d: %-5d|\n", d);
	
	dprintf(1, "real %%-.5d: %-.5d|\n", d);
	ft_printf("Mine %%-.5d: %-.5d|\n", d);
	
	dprintf(1, "real %%-9.5d: %-9.5d|\n", d);
	ft_printf("Mine %%-9.5d: %-9.5d|\n", d);
	
	dprintf(1, "real %%-5.9d: %-5.9d|\n", d);
	ft_printf("Mine %%-5.9d: %-5.9d|\n", d);
	
	dprintf(1, "real %%+d: %+d|\n", d);
	ft_printf("Mine %%+d: %+d|\n", d);
	
	dprintf(1, "real %%+5d: %+5d|\n", d);
	ft_printf("Mine %%+5d: %+5d|\n", d);

	dprintf(1, "real %%+.5d: %+.5d|\n", d);
	ft_printf("Mine %%+.5d: %+.5d|\n", d);
	
	dprintf(1, "real %%+-5d: %+-5d|\n", d);
	ft_printf("Mine %%+-5d: %+-5d|\n", d);
	
	dprintf(1, "real %%-+5d: %-+5d|\n", d);
	ft_printf("Mine %%-+5d: %-+5d|\n", d);

	dprintf(1, "real %%-+5d: %-+5d|\n", d);
	ft_printf("Mine %%-+5d: %-+5d|\n", d);

	dprintf(1, "real %%0d: %0d|\n", d);
	ft_printf("Mine %%0d: %0d|\n", d);

	dprintf(1, "real %%05d: %05d|\n", d);
	ft_printf("Mine %%05d: %05d|\n", d);

	dprintf(1, "real %%0.5d: %0.5d|\n", d);
	ft_printf("Mine %%0.5d: %0.5d|\n", d);

	dprintf(1, "real %%09.5d: %09.5d|\n", d);
	ft_printf("Mine %%09.5d: %09.5d|\n", d);

	dprintf(1, "real %%05.9d: %05.9d|\n", d);
	ft_printf("Mine %%05.9d: %05.9d|\n", d);

	dprintf(1, "real %%0+5d: %0+5d|\n", d);
	ft_printf("Mine %%0+5d: %0+5d|\n", d);

	dprintf(1, "real %% d: % d|\n", d);
	ft_printf("Mine %% d: % d|\n", d);

	dprintf(1, "real %% d: % d|\n", d);
	ft_printf("Mine %% d: % d|\n", d);

	dprintf(1, "real %% d: % d|\n", d);
	ft_printf("Mine %% d: % d|\n", d);

	dprintf(1, "real %% 5d: % 5d|\n", d);
	ft_printf("Mine %% 5d: % 5d|\n", d);

	dprintf(1, "real %% .5d: % .5d|\n", d);
	ft_printf("Mine %% .5d: % .5d|\n", d);

	dprintf(1, "real %% 0.5d: % 0.5d|\n", d);
	ft_printf("Mine %% 0.5d: % 0.5d|\n", d);

	dprintf(1, "real %% -.5d: % -.5d|\n", d);
	ft_printf("Mine %% -.5d: % -.5d|\n", d);

	dprintf(1, "real %% 05d: % 05d|\n", d);
	ft_printf("Mine %% 05d: % 05d|\n", d);

	dprintf(1, "real %% -5d: % -5d|\n", d);
	ft_printf("Mine %% -5d: % -5d|\n", d);

	dprintf(1, "real %% 9.5d: % 9.5d|\n", d);
	ft_printf("Mine %% 9.5d: % 9.5d|\n", d);

	dprintf(1, "real %% 5.9d: % 5.9d|\n", d);
	ft_printf("Mine %% 5.9d: % 5.9d|\n", d);

	dprintf(1, "real %% 5.9d: % -5.9d|\n", d);
	ft_printf("Mine %% 5.9d: % -5.9d|\n", d);

	dprintf(1, "real %% -5.9d: % -5.9d|\n", d);
	ft_printf("Mine %% -5.9d: % -5.9d|\n", d);

	dprintf(1, "real %% 05.9d: % 05.9d|\n", d);
	ft_printf("Mine %% 05.9d: % 05.9d|\n", d);
	
	/*
	**		avec le flag hh
	*/

	dprintf (1, "\n%%hhd test --> signed char :\n");
	
	dprintf (1, "\n%%d test :\n");
	
	dprintf(1, "real %%hhd: %hhd|\n", c);
	ft_printf("Mine %%hhd: %hhd|\n", c);
	
	dprintf(1, "real %%5hhd: %5hhd|\n", c);
	ft_printf("Mine %%5hhd: %5hhd|\n", c);
	
	dprintf(1, "real %%.5hhd: %.5hhd|\n", c);
	ft_printf("Mine %%.5hhd: %.5hhd|\n", c);
	
	dprintf(1, "real %%5.9hhd: %5.9hhd|\n", c);
	ft_printf("Mine %%5.9hhd: %5.9hhd|\n", c);
	
	dprintf(1, "real %%9.5hhd: %9.5hhd|\n", c);
	ft_printf("Mine %%9.5hhd: %9.5hhd|\n", c);
	
	dprintf(1, "real %%-hhd: %-hhd|\n", c);
	ft_printf("Mine %%-hhd: %-hhd|\n", c);
	
	dprintf(1, "real %%-5hhd: %-5hhd|\n", c);
	ft_printf("Mine %%-5hhd: %-5hhd|\n", c);
	
	dprintf(1, "real %%-.5hhd: %-.5hhd|\n", c);
	ft_printf("Mine %%-.5hhd: %-.5hhd|\n", c);
	
	dprintf(1, "real %%-9.5hhd: %-9.5hhd|\n", c);
	ft_printf("Mine %%-9.5hhd: %-9.5hhd|\n", c);
	
	dprintf(1, "real %%-5.9hhd: %-5.9hhd|\n", c);
	ft_printf("Mine %%-5.9hhd: %-5.9hhd|\n", c);
	
	dprintf(1, "real %%+hhd: %+hhd|\n", c);
	ft_printf("Mine %%+hhd: %+hhd|\n", c);
	
	dprintf(1, "real %%+5hhd: %+5hhd|\n", c);
	ft_printf("Mine %%+5hhd: %+5hhd|\n", c);

	dprintf(1, "real %%+.5hhd: %+.5hhd|\n", c);
	ft_printf("Mine %%+.5hhd: %+.5hhd|\n", c);
	
	dprintf(1, "real %%+-5hhd: %+-5hhd|\n", c);
	ft_printf("Mine %%+-5hhd: %+-5hhd|\n", c);
	
	dprintf(1, "real %%-+5hhd: %-+5hhd|\n", c);
	ft_printf("Mine %%-+5hhd: %-+5hhd|\n", c);

	dprintf(1, "real %%-+5hhd: %-+5hhd|\n", c);
	ft_printf("Mine %%-+5hhd: %-+5hhd|\n", c);

	dprintf(1, "real %%0hhd: %0hhd|\n", c);
	ft_printf("Mine %%0hhd: %0hhd|\n", c);

	dprintf(1, "real %%05hhd: %05hhd|\n", c);
	ft_printf("Mine %%05hhd: %05hhd|\n", c);

	dprintf(1, "real %%0.5hhd: %0.5hhd|\n", c);
	ft_printf("Mine %%0.5hhd: %0.5hhd|\n", c);

	dprintf(1, "real %%09.5hhd: %09.5hhd|\n", c);
	ft_printf("Mine %%09.5hhd: %09.5hhd|\n", c);

	dprintf(1, "real %%05.9hhd: %05.9hhd|\n", c);
	ft_printf("Mine %%05.9hhd: %05.9hhd|\n", c);

	dprintf(1, "real %%0+5hhd: %0+5hhd|\n", c);
	ft_printf("Mine %%0+5hhd: %0+5hhd|\n", c);

	dprintf(1, "real %% hhd: % hhd|\n", c);
	ft_printf("Mine %% hhd: % hhd|\n", c);

	dprintf(1, "real %% 5hhd: % 5hhd|\n", c);
	ft_printf("Mine %% 5hhd: % 5hhd|\n", c);

	dprintf(1, "real %% .5hhd: % .5hhd|\n", c);
	ft_printf("Mine %% .5hhd: % .5hhd|\n", c);

	dprintf(1, "real %% 0.5hhd: % 0.5hhd|\n", c);
	ft_printf("Mine %% 0.5hhd: % 0.5hhd|\n", c);

	dprintf(1, "real %% -.5hhd: % -.5hhd|\n", c);
	ft_printf("Mine %% -.5hhd: % -.5hhd|\n", c);

	dprintf(1, "real %% 05hhd: % 05hhd|\n", c);
	ft_printf("Mine %% 05hhd: % 05hhd|\n", c);

	dprintf(1, "real %% -5hhd: % -5hhd|\n", c);
	ft_printf("Mine %% -5hhd: % -5hhd|\n", c);

	dprintf(1, "real %% 9.5hhd: % 9.5hhd|\n", c);
	ft_printf("Mine %% 9.5hhd: % 9.5hhd|\n", c);

	dprintf(1, "real %% 5.9hhd: % 5.9hhd|\n", c);
	ft_printf("Mine %% 5.9hhd: % 5.9hhd|\n", c);

	dprintf(1, "real %% 5.9hhd: % -5.9hhd|\n", c);
	ft_printf("Mine %% 5.9hhd: % -5.9hhd|\n", c);

	dprintf(1, "real %% -5.9hhd: % -5.9hhd|\n", c);
	ft_printf("Mine %% -5.9hhd: % -5.9hhd|\n", c);

	dprintf(1, "real %% 05.9hhd: % 05.9hhd|\n", c);
	ft_printf("Mine %% 05.9hhd: % 05.9hhd|\n", c);

	/*
	**		avec le flag h
	*/

	dprintf (1, "\n%%hd test -->short:\n");
	
	dprintf(1, "real %%hd: %hd|\n", sh);
	ft_printf("Mine %%hd: %hd|\n", sh);

	dprintf(1, "real %%5hd: %5hd|\n", sh);
	ft_printf("Mine %%5hd: %5hd|\n", sh);
	
	dprintf(1, "real %%.5hd: %.5hd|\n", sh);
	ft_printf("Mine %%.5hd: %.5hd|\n", sh);
	
	dprintf(1, "real %%5.9hd: %5.9hd|\n", sh);
	ft_printf("Mine %%5.9hd: %5.9hd|\n", sh);
	
	dprintf(1, "real %%9.5hd: %9.5hd|\n", sh);
	ft_printf("Mine %%9.5hd: %9.5hd|\n", sh);
	
	dprintf(1, "real %%-hd: %-hd|\n", sh);
	ft_printf("Mine %%-hd: %-hd|\n", sh);
	
	dprintf(1, "real %%-5hd: %-5hd|\n",sh);
	ft_printf("Mine %%-5hd: %-5hd|\n", sh);
	
	dprintf(1, "real %%-.5hd: %-.5hd|\n", sh);
	ft_printf("Mine %%-.5hd: %-.5hd|\n", sh);
	
	dprintf(1, "real %%-9.5hd: %-9.5hd|\n", sh);
	ft_printf("Mine %%-9.5hd: %-9.5hd|\n", sh);
	
	dprintf(1, "real %%-5.9hd: %-5.9hd|\n", sh);
	ft_printf("Mine %%-5.9hd: %-5.9hd|\n", sh);
	
	dprintf(1, "real %%+hd: %+hd|\n", sh);
	ft_printf("Mine %%+hd: %+hd|\n", sh);
	
	dprintf(1, "real %%+5hd: %+5hd|\n", sh);
	ft_printf("Mine %%+5hd: %+5hd|\n", sh);

	dprintf(1, "real %%+.5hd: %+.5hd|\n", sh);
	ft_printf("Mine %%+.5hd: %+.5hd|\n", sh);
	
	dprintf(1, "real %%+-5hd: %+-5hd|\n", sh);
	ft_printf("Mine %%+-5hd: %+-5hd|\n", sh);
	
	dprintf(1, "real %%-+5hd: %-+5hd|\n", sh);
	ft_printf("Mine %%-+5hd: %-+5hd|\n", sh);

	dprintf(1, "real %%-+5hd: %-+5hd|\n", sh);
	ft_printf("Mine %%-+5hd: %-+5hd|\n", sh);

	dprintf(1, "real %%0hd: %0hd|\n", sh);
	ft_printf("Mine %%0hd: %0hd|\n", sh);

	dprintf(1, "real %%05hd: %05hd|\n", sh);
	ft_printf("Mine %%05hd: %05hd|\n", sh);

	dprintf(1, "real %%0.5hd: %0.5hd|\n", sh);
	ft_printf("Mine %%0.5hd: %0.5hd|\n", sh);

	dprintf(1, "real %%09.5hd: %09.5hd|\n", sh);
	ft_printf("Mine %%09.5hd: %09.5hd|\n", sh);

	dprintf(1, "real %%05.9hd: %05.9hd|\n", sh);
	ft_printf("Mine %%05.9hd: %05.9hd|\n", sh);

	dprintf(1, "real %%0+5hd: %0+5hd|\n", sh);
	ft_printf("Mine %%0+5hd: %0+5hd|\n", sh);

	dprintf(1, "real %% hd: % hd|\n", sh);
	ft_printf("Mine %% hd: % hd|\n", sh);

	dprintf(1, "real %% 5hd: % 5hd|\n", sh);
	ft_printf("Mine %% 5hd: % 5hd|\n", sh);

	dprintf(1, "real %% .5hd: % .5hd|\n", sh);
	ft_printf("Mine %% .5hd: % .5hd|\n", sh);

	dprintf(1, "real %% 0.5hd: % 0.5hd|\n", sh);
	ft_printf("Mine %% 0.5hd: % 0.5hd|\n", sh);

	dprintf(1, "real %% -.5hd: % -.5hd|\n", sh);
	ft_printf("Mine %% -.5hd: % -.5hd|\n", sh);

	dprintf(1, "real %% 05hd: % 05hd|\n", sh);
	ft_printf("Mine %% 05hd: % 05hd|\n", sh);

	dprintf(1, "real %% -5hd: % -5hd|\n", sh);
	ft_printf("Mine %% -5hd: % -5hd|\n", sh);

	dprintf(1, "real %% 9.5hd: % 9.5hd|\n", sh);
	ft_printf("Mine %% 9.5hd: % 9.5hd|\n", sh);

	dprintf(1, "real %% 5.9hd: % 5.9hd|\n", sh);
	ft_printf("Mine %% 5.9hd: % 5.9hd|\n", sh);

	dprintf(1, "real %% 5.9hd: % -5.9hd|\n", sh);
	ft_printf("Mine %% 5.9hd: % -5.9hd|\n", sh);

	dprintf(1, "real %% -5.9hd: % -5.9hd|\n", sh);
	ft_printf("Mine %% -5.9hd: % -5.9hd|\n", sh);

	dprintf(1, "real %% 05.9hd: % 05.9hd|\n", sh);
	ft_printf("Mine %% 05.9hd: % 05.9hd|\n", sh);

	/*
	**		flag l :
	*/

	dprintf (1, "\n%%ld test -->long:\n");
	
	dprintf(1, "real %%ld: %ld|\n", l);
	ft_printf("Mine %%ld: %ld|\n", l);

	dprintf(1, "real %%5ld: %5ld|\n", l);
	ft_printf("Mine %%5ld: %5ld|\n", l);
	
	dprintf(1, "real %%.5ld: %.5ld|\n", l);
	ft_printf("Mine %%.5ld: %.5ld|\n", l);
	
	dprintf(1, "real %%5.9ld: %5.9ld|\n", l);
	ft_printf("Mine %%5.9ld: %5.9ld|\n", l);
	
	dprintf(1, "real %%9.5ld: %9.5ld|\n", l);
	ft_printf("Mine %%9.5ld: %9.5ld|\n", l);
	
	dprintf(1, "real %%-ld: %-ld|\n", l);
	ft_printf("Mine %%-ld: %-ld|\n", l);
	
	dprintf(1, "real %%-5ld: %-5ld|\n",l);
	ft_printf("Mine %%-5ld: %-5ld|\n", l);
	
	dprintf(1, "real %%-.5ld: %-.5ld|\n", l);
	ft_printf("Mine %%-.5ld: %-.5ld|\n", l);
	
	dprintf(1, "real %%-9.5ld: %-9.5ld|\n", l);
	ft_printf("Mine %%-9.5ld: %-9.5ld|\n", l);
	
	dprintf(1, "real %%-5.9ld: %-5.9ld|\n", l);
	ft_printf("Mine %%-5.9ld: %-5.9ld|\n", l);
	
	dprintf(1, "real %%+ld: %+ld|\n", l);
	ft_printf("Mine %%+ld: %+ld|\n", l);
	
	dprintf(1, "real %%+5ld: %+5ld|\n", l);
	ft_printf("Mine %%+5ld: %+5ld|\n", l);

	dprintf(1, "real %%+.5ld: %+.5ld|\n", l);
	ft_printf("Mine %%+.5ld: %+.5ld|\n", l);
	
	dprintf(1, "real %%+-5ld: %+-5ld|\n", l);
	ft_printf("Mine %%+-5ld: %+-5ld|\n", l);
	
	dprintf(1, "real %%-+5ld: %-+5ld|\n", l);
	ft_printf("Mine %%-+5ld: %-+5ld|\n", l);

	dprintf(1, "real %%-+5ld: %-+5ld|\n", l);
	ft_printf("Mine %%-+5ld: %-+5ld|\n", l);

	dprintf(1, "real %%0ld: %0ld|\n", l);
	ft_printf("Mine %%0ld: %0ld|\n", l);

	dprintf(1, "real %%05ld: %05ld|\n", l);
	ft_printf("Mine %%05ld: %05ld|\n", l);

	dprintf(1, "real %%0.5ld: %0.5ld|\n", l);
	ft_printf("Mine %%0.5ld: %0.5ld|\n", l);

	dprintf(1, "real %%09.5ld: %09.5ld|\n", l);
	ft_printf("Mine %%09.5ld: %09.5ld|\n", l);

	dprintf(1, "real %%05.9ld: %05.9ld|\n", l);
	ft_printf("Mine %%05.9ld: %05.9ld|\n", l);

	dprintf(1, "real %%0+5ld: %0+5ld|\n", l);
	ft_printf("Mine %%0+5ld: %0+5ld|\n", l);

	dprintf(1, "real %% ld: % ld|\n", l);
	ft_printf("Mine %% ld: % ld|\n", l);

	dprintf(1, "real %% 5ld: % 5ld|\n", l);
	ft_printf("Mine %% 5ld: % 5ld|\n", l);

	dprintf(1, "real %% .5ld: % .5ld|\n", l);
	ft_printf("Mine %% .5ld: % .5ld|\n", l);

	dprintf(1, "real %% 0.5ld: % 0.5ld|\n", l);
	ft_printf("Mine %% 0.5ld: % 0.5ld|\n", l);

	dprintf(1, "real %% -.5ld: % -.5ld|\n", l);
	ft_printf("Mine %% -.5ld: % -.5ld|\n", l);

	dprintf(1, "real %% 05ld: % 05ld|\n", l);
	ft_printf("Mine %% 05ld: % 05ld|\n", l);

	dprintf(1, "real %% -5ld: % -5ld|\n", l);
	ft_printf("Mine %% -5ld: % -5ld|\n", l);

	dprintf(1, "real %% 9.5ld: % 9.5ld|\n", l);
	ft_printf("Mine %% 9.5ld: % 9.5ld|\n", l);

	dprintf(1, "real %% 5.9ld: % 5.9ld|\n", l);
	ft_printf("Mine %% 5.9ld: % 5.9ld|\n", l);

	dprintf(1, "real %% 5.9ld: % -5.9ld|\n", l);
	ft_printf("Mine %% 5.9ld: % -5.9ld|\n", l);

	dprintf(1, "real %% -5.9ld: % -5.9ld|\n", l);
	ft_printf("Mine %% -5.9ld: % -5.9ld|\n", l);

	dprintf(1, "real %% 05.9ld: % 05.9ld|\n", l);
	ft_printf("Mine %% 05.9ld: % 05.9ld|\n", l);

	/*
	**		Flag l : 
	*/
	dprintf (1, "\n%%lld test -->long long:\n");
	
	dprintf(1, "real %%lld: %lld|\n", ll);
	ft_printf("Mine %%lld: %lld|\n", ll);

	dprintf(1, "real %%5ld: %5lld|\n", ll);
	ft_printf("Mine %%5ld: %5lld|\n", ll);
	
	dprintf(1, "real %%.5lld: %.5lld|\n", ll);
	ft_printf("Mine %%.5lld: %.5lld|\n", ll);
	
	dprintf(1, "real %%5.9lld: %5.9lld|\n", ll);
	ft_printf("Mine %%5.9lld: %5.9lld|\n", ll);
	
	dprintf(1, "real %%9.5lld: %9.5lld|\n", ll);
	ft_printf("Mine %%9.5lld: %9.5lld|\n", ll);
	
	dprintf(1, "real %%-lld: %-lld|\n", ll);
	ft_printf("Mine %%-lld: %-lld|\n", ll);
	
	dprintf(1, "real %%-5lld: %-5lld|\n",ll);
	ft_printf("Mine %%-5lld: %-5lld|\n", ll);
	
	dprintf(1, "real %%-.5lld: %-.5lld|\n", ll);
	ft_printf("Mine %%-.5lld: %-.5lld|\n", ll);
	
	dprintf(1, "real %%-9.5lld: %-9.5lld|\n", ll);
	ft_printf("Mine %%-9.5lld: %-9.5lld|\n", ll);
	
	dprintf(1, "real %%-5.9lld: %-5.9lld|\n", ll);
	ft_printf("Mine %%-5.9lld: %-5.9lld|\n", ll);
	
	dprintf(1, "real %%+lld: %+lld|\n", ll);
	ft_printf("Mine %%+lld: %+lld|\n", ll);
	
	dprintf(1, "real %%+5lld: %+5lld|\n", ll);
	ft_printf("Mine %%+5lld: %+5lld|\n", ll);

	dprintf(1, "real %%+.5lld: %+.5lld|\n", ll);
	ft_printf("Mine %%+.5lld: %+.5lld|\n", ll);
	
	dprintf(1, "real %%+-5lld: %+-5lld|\n", ll);
	ft_printf("Mine %%+-5lld: %+-5lld|\n", ll);
	
	dprintf(1, "real %%-+5lld: %-+5lld|\n", ll);
	ft_printf("Mine %%-+5lld: %-+5lld|\n", ll);

	dprintf(1, "real %%-+5lld: %-+5lld|\n", ll);
	ft_printf("Mine %%-+5lld: %-+5lld|\n", ll);

	dprintf(1, "real %%0lld: %0lld|\n", ll);
	ft_printf("Mine %%0lld: %0lld|\n", ll);

	dprintf(1, "real %%05lld: %05lld|\n", ll);
	ft_printf("Mine %%05lld: %05lld|\n", ll);

	dprintf(1, "real %%0.5lld: %0.5lld|\n", ll);
	ft_printf("Mine %%0.5lld: %0.5lld|\n", ll);

	dprintf(1, "real %%09.5lld: %09.5lld|\n", ll);
	ft_printf("Mine %%09.5lld: %09.5lld|\n", ll);

	dprintf(1, "real %%05.9lld: %05.9lld|\n", ll);
	ft_printf("Mine %%05.9lld: %05.9lld|\n", ll);

	dprintf(1, "real %%0+5lld: %0+5lld|\n", ll);
	ft_printf("Mine %%0+5lld: %0+5lld|\n", ll);

	dprintf(1, "real %% lld: % lld|\n", ll);
	ft_printf("Mine %% lld: % lld|\n", ll);

	dprintf(1, "real %% 5lld: % 5lld|\n", ll);
	ft_printf("Mine %% 5lld: % 5lld|\n", ll);

	dprintf(1, "real %% .5lld: % .5lld|\n", ll);
	ft_printf("Mine %% .5lld: % .5lld|\n", ll);

	dprintf(1, "real %% 0.5lld: % 0.5lld|\n", ll);
	ft_printf("Mine %% 0.5lld: % 0.5lld|\n", ll);

	dprintf(1, "real %% -.5lld: % -.5lld|\n", ll);
	ft_printf("Mine %% -.5lld: % -.5lld|\n", ll);

	dprintf(1, "real %% 05lld: % 05lld|\n", ll);
	ft_printf("Mine %% 05lld: % 05lld|\n", ll);

	dprintf(1, "real %% -5lld: % -5lld|\n", ll);
	ft_printf("Mine %% -5lld: % -5lld|\n", ll);

	dprintf(1, "real %% 9.5lld: % 9.5lld|\n", ll);
	ft_printf("Mine %% 9.5lld: % 9.5lld|\n", ll);

	dprintf(1, "real %% 5.9lld: % 5.9lld|\n", ll);
	ft_printf("Mine %% 5.9lld: % 5.9lld|\n", ll);

	dprintf(1, "real %% 5.9lld: % -5.9lld|\n", ll);
	ft_printf("Mine %% 5.9lld: % -5.9lld|\n", ll);

	dprintf(1, "real %% -5.9lld: % -5.9lld|\n", ll);
	ft_printf("Mine %% -5.9lld: % -5.9lld|\n", ll);

	dprintf(1, "real %% 05.9lld: % 05.9lld|\n", ll);
	ft_printf("Mine %% 05.9lld: % 05.9lld|\n", ll);

	dprintf (1, "\nSome empty return :\n");
	dprintf(1, "real %%.0d: %.0d|\n", 0);
	ft_printf("Mine %%.0d: %.0d|\n", 0);

	dprintf(1, "real %%.0hd: %.0hd|\n", (short)0);
	ft_printf("Mine %%.0hd: %.0hd|\n", (short)0);

	dprintf(1, "real %%.0ld: %.0ld|\n", (long)0);
	ft_printf("Mine %%.0ld: %.0ld|\n", (long)0);

	dprintf(1, "real %%.0lld: %.0lld|\n", (long long)0);
	ft_printf("Mine %%.0lld: %.0lld|\n", (long long)0);

	dprintf(1, "real %% .0d: % .0d|\n", 0);
	ft_printf("Mine %% .0d: % .0d|\n", 0);

	dprintf(1, "real %% 5.0d: % 5.0d|\n", 0);
	ft_printf("Mine %% 5.0d: % 5.0d|\n", 0);

	dprintf(1, "real %% -5.0d: % -5.0d|\n", 0);
	ft_printf("Mine %% -5.0d: % -5.0d|\n", 0);

	dprintf(1, "\nMore test : :)\n");
	dprintf(1, "real %% -5.2d: % 5.2d|\n", 156);
	ft_printf("Mine %% -5.2d: % 5.2d|\n", 156);

	dprintf(1, "real %% -2.5d: % 2.5d|\n", 156);
	ft_printf("Mine %% -2.5d: % 2.5d|\n", 156);

	dprintf(1, "real %%+12.5d: %+12.5d|\n", -646);
	ft_printf("Mine %%+12.5d: %+12.5d|\n", -646);

	dprintf(1, "real %% -12.5d: % -12.5d|\n", -646);
	ft_printf("Mine %% -12.5d: % -12.5d|\n", -646);

	dprintf(1, "real %% -12.5d: % -12.5d|\n", 646);
	ft_printf("Mine %% -12.5d: % -12.5d|\n", 646);

	dprintf(1, "real %%+12.5d: %+12.5d|\n", -6499);
	ft_printf("Mine %%+12.5d: %+12.5d|\n", -6499);

	dprintf(1, "real %%d: %d|\n", 0);
	ft_printf("Mine %%d: %d|\n", 0);

	dprintf(1, "real %%llX: %llX|\n", (unsigned long long)4294967296);
	ft_printf("Mine %%llX: %llX|\n", (unsigned long long)4294967296);

	dprintf(1, "real %%lX: %lX|\n", 4294967296);
	ft_printf("Mine %%lX: %lX|\n", 4294967296);

	dprintf(1, "real %%llx: %llx|\n", (unsigned long long)4294967296);
	ft_printf("Mine %%llx: %llx|\n", (unsigned long long)4294967296);

	dprintf(1, "real %%lx: %lx|\n", 4294967296);
	ft_printf("Mine %%lX: %lx|\n", 4294967296);

	dprintf(1, "real %%hx: %hx|\n", (unsigned short)4294967296);
	ft_printf("mine %%hx: %hx|\n", (unsigned short)4294967296);

	dprintf(1, "real %%hhx: %hhx|\n", (char)4294967296);
	ft_printf("mine %%hhx: %hhx|\n", (char)4294967296);

	dprintf(1, "real %%hx: %hx|\n", (unsigned short)32767);
	ft_printf("Mine %%hx: %hx|\n", (unsigned short)32767);

	dprintf(1, "real %%hx: %hx|\n", (unsigned short)65536);
	ft_printf("Mine %%hx: %hx|\n", (unsigned short)65536);

	dprintf(1, "real %%hhX: %hhX|\n", (unsigned char)32767);
	ft_printf("Mine %%hhX: %hhX|\n", (unsigned char)32767);


	dprintf(1, "real %%hx: %hx|\n", (unsigned short)127);
	ft_printf("Mine %%hx: %hx|\n", (unsigned short)127);

	dprintf(1, "real %%hhX: %hhX|\n", (char)127);
	ft_printf("Mine %%hhX: %hhX|\n", (char)127);

	dprintf(1, "real %%ho: %ho|\n", (unsigned short)4294967296);
	ft_printf("Mine %%ho: %ho|\n", (unsigned short)4294967296);

	dprintf(1, "real %%hho: %hho|\n", (char)4294967296);
	ft_printf("Mine %%hho: %hho|\n", (char)4294967296);

	dprintf(1, "real %%hu: %hu|\n", (unsigned short)4294967296);
	ft_printf("Mine %%hu: %hu|\n", (unsigned short)4294967296);

	dprintf(1, "real %%hhu: %hhu|\n", (char)4294967296);
	ft_printf("Mine %%hhu: %hhu|\n", (char)4294967296);

	dprintf(1, "real %%o: %o|\n", 0);
	ft_printf("Mine %%o: %o|\n", 0);

	dprintf(1, "real %%0.0o: %0.0o|\n", 0);
	ft_printf("Mine %%0.0o: %0.0o|\n", 0);

	dprintf(1, "real %%.0u: %.0u|\n", 0);
	ft_printf("mine %%.0u: %.0u|\n", 0);

	dprintf(1, "real %%.o: %.o|\n", 42);
	ft_printf("Mine %%.o: %.o|\n", 42);

	dprintf(1, "real %%05d: %05d|\n", -42);
	ft_printf("Mine %%05d: %05d|\n", -42);

	dprintf(1, "real %%05d: %05d|\n", 42);
	ft_printf("Mine %%05d: %05d|\n", 42);

	dprintf(1, "real %%0d: %0d|\n", 42);
	ft_printf("Mine %%0d: %0d|\n", 42);

	dprintf(1, "real %%0d: %0d|\n", -42);
	ft_printf("Mine %%0d: %0d|\n", -42);

	dprintf(1, "real %%03d: %03d|\n", -42);
	ft_printf("Mine %%03d: %03d|\n", -42);

	dprintf(1, "real %%0d: %0d|\n", -42);
	ft_printf("Mine %%0d: %0d|\n", -42);

	dprintf(1, "real %%.d: %.d|\n", 42);
	ft_printf("Mine %%.d: %.d|\n", 42);

	dprintf(1, "real %%.0d: %.0d|\n", 43);
	ft_printf("Mine %%.0d: %.0d|\n", 43);

	dprintf(1, "real %%5.d: %5.d|\n", 42);
	ft_printf("Mine %%5.d: %5.d|\n", 42);

	dprintf(1, "real %%5.0d: %5.0d|\n", 43);
	ft_printf("Mine %%5.0d: %5.0d|\n", 43);

	dprintf(1, "real %%5.0d: %5.0d|\n", 43);
	ft_printf("Mine %%5.0d: %5.0d|\n", 43);

	dprintf(1, "real %%hhd: %hhd|\n", (char)128);
	ft_printf("Mine %%hhd: %hhd|\n", (char)128);

	dprintf(1, "real %%hd: %hd|\n", (short)32768);
	ft_printf("Mine %%hd: %hd|\n", (short)32768);
}
