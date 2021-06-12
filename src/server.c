/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 07:32:41 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 09:07:03 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_buffer	*g_buff;

int	main(int argc, char **argv)
{
	int num;

	g_buff = malloc(sizeof(t_buffer));
	num = 255;
	// TODO: HOT LEARN BITWISE
	int	i;
	i = 31;
	while (i >= 0)
	{
		write(1, (num&(1<<i)) ? "1" : "0", 1);
		if (i % 8 == 0 && i)
			write(1, "|", 1);
		i--;
	}
	return (0);
}