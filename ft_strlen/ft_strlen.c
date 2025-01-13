/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:24:42 by rd-agost          #+#    #+#             */
/*   Updated: 2025/01/13 13:25:58 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
 */

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	
	while(str)
		i++;
	return(i);
}