/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin2dec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:14:24 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/16 10:18:18 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

unsigned int	bin2dec(char *bin)
{
	unsigned int	num;

	num = 0;
	while (*(bin) != 0)
	{
		if (*bin == '0')
			num <<= 1;
		else if (*bin == '1')
		{
			num <<= 1;
			num += 1;
		}
		else
			break ;
		bin++;
	}
	return (num);
}
