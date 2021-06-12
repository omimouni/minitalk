/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:34:21 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 11:54:45 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;
	
	if (argc != 3)
	{
		write(1, "Provice valid arguments.\n", 26);
		exit(-1);
	}

	pid = atoi(argv[1]);
	str = argv[2];

	// SEND STRING SIZE
	int	strl;
	int	i;

	strl = ft_strlen(str);
	i = 31;
	while (i >= 0)
	{
		if ((strl&(1<<i)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(100);
	}
	return (0);
}
