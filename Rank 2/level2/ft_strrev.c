/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:04:56 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:06:06 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char v, *done = str;
	if (!str)
		return str;

	while (*done) 
		done++;
	done--;  

	while (str < done)
	{
		v = *str;
		*str++ = *done;
		*done-- = v;
	}
	return str;
}
