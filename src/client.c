/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:40:53 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/16 08:49:34 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;
	int		i;

	pid = atoi(argv[1]);
	str = argv[2];
	while (*str)
	{
		i = 7;
		while (i >= 0)
		{
			if (*str & (1 << i))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i--;
			usleep(60);
		}
		str++;
	}

	return (0);
}
