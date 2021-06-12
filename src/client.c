/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:34:21 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 09:11:04 by omimouni         ###   ########.fr       */
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
	
	// if (argv[2][0] == '1')
	// 	kill(pid, SIGUSR1);
	// if (argv[2][0] == '2')
	// 	kill(pid, SIGUSR2);
	return (0);
}
