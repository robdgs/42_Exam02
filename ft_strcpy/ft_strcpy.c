/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:14:12 by rd-agost          #+#    #+#             */
/*   Updated: 2025/01/13 13:19:45 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
char *strcpy(char *dest, const char *src);

 */

char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0'; // !!!!!
	return (s1);
}