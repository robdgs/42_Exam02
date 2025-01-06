/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:25:17 by rd-agost          #+#    #+#             */
/*   Updated: 2025/01/06 16:17:07 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void search_and_replace(char *str, char to_find, char to_replace)
{
  int i = 0;

  while(str[i] != '\0' )
  {
	if(str[i] == to_find)
		str[i] = to_replace;
	write(1, &str[i],1);
	i++;
  } 
  write(1, "\n", 1);
}

int main (int ac, char **av)
{
	
	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		search_and_replace(av[1],av[2][0],av[3][0]);
	}
	else 
		write(1, "\n",1);

}

/* 
Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.
 */