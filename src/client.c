/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:34:21 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/15 10:53:38 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	mt_send_strlen(int pid, int	strlen)
{
	int	i;

	i = 31;
	while (i >= 0)
	{
		if ((strlen & (1 << i)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(100);
	}
}

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
	mt_send_strlen(pid, ft_strlen(argv[2]));
	return (0);
}
