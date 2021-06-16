/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:41:41 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/16 08:54:58 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_buffer	*g_buff;

static void	signal_handler(int signum)
{
	int	i;

	if (g_buff->count == 8)
	{
		g_buff->count = 0;
		i = 7;
		while (i > 0)
			g_buff->ch[i++] = 0;
	}
	if (signum == SIGUSR1)
		g_buff->ch[g_buff->count] = '1';
	else if (signum == SIGUSR2)
		g_buff->ch[g_buff->count] = '0';
	g_buff->count += 1;
}

int	main(void)
{
	int		pid;
	char	c;

	g_buff = malloc(sizeof(t_buffer));
	g_buff->count = 0;
	pid = getpid();
	printf("%d\n", pid); // TODO: Use legal functions
	while (1)
	{
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
		if (g_buff->count == 8)
		{
			c = bin2dec(g_buff->ch);
			write(1, &c, 1);
		}
		pause();
	}
	return (0);
}
