/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:40:47 by rd-agost          #+#    #+#             */
/*   Updated: 2025/01/13 13:44:29 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
 */

int	main(int ac, char **av)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 1;
	if (ac ==2)
	{
		str = av[1];
		while (str[i] != '\0')
		{
			j = 1;
			if (str[i] >= 'A' && str[i] <= 'Z')
				j = str[i] - 64;
			if (str[i] >= 'a' && str[i] <= 'z')
				j = str[i] - 96;
			while (j >= 1)
			{
				write(1, &str[i], 1);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//can also be hardcoded lol