/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:34:21 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 14:17:01 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int	pid;
	int	strl;
	int	i;

	if (argc != 3)
	{
		write(1, "Provice valid arguments.\n", 26);
		exit(-1);
	}
	pid = atoi(argv[1]);
	strl = ft_strlen(argv[2]);
	i = 31;
	while (i >= 0)
	{
		if ((strl & (1 << i)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(100);
	}
	return (0);
}
