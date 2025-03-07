/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:14:47 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:15:10 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char rev = 0;
	for (int v = 0; v < 8; v++)
	{
		rev = (rev << 1) | (octet & 1);  
		octet >>= 1;
	}
	return rev;
}
