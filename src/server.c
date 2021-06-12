/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 07:32:41 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 07:47:25 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	singalhandler(int signum)
{
	write(1, "Hello", 6);
}

int	main(int argc, char **argv)
{
	printf("%d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, singalhandler);
		usleep(1000);
	}
	return (0);
}