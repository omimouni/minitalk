/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 07:32:41 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 14:11:52 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_buffer	*g_buff;

unsigned int	bin2dec(char *bin)
{
	unsigned int num;

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

void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		g_buff->strlen_buff[g_buff->i] = '1';
	else if (signum == SIGUSR2)
		g_buff->strlen_buff[g_buff->i] = '0';
	g_buff->i += 1;
	
}

int	main(int argc, char **argv)
{
	int num;
	
	g_buff = malloc(sizeof(t_buffer));
	g_buff->i = 0;
	printf("%d\n", getpid());
	while (1)
	{
		if (g_buff->i == 32)
		{
			g_buff->strlen_buff[32] = '\0';
			printf("String size : %d \n", bin2dec(g_buff->strlen_buff));
			g_buff->i = 0;
		}
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
		pause();
	}
	return (0);
}