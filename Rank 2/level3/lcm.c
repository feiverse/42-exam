/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:25:25 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:25:30 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	gcd(unsigned int a, unsigned int b)
{
	while (b)
	{
		unsigned int m = b;
		b = a % b;
		a = m;
	}
	return a;
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if ((int)a < 0 || (int)b < 0)  
		return 0;
	if (a == 0 || b == 0)
		return 0;
	return (a / gcd(a, b)) * b;
}
