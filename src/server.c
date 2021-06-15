/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 07:32:41 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/15 13:26:12 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_buffer	*g_buff;

static void	mt_get_strlen()
{
	if (g_buff->i == 32 && !g_buff->flag_strlen)
	{
		g_buff->strlen_buff[32] = '\0';
		g_buff->strlen = bin2dec(g_buff->strlen_buff);
		g_buff->str = malloc(sizeof(char) * (g_buff->strlen + 1));
		g_buff->str[g_buff->strlen] = '\0';
		g_buff->i = 0;
		g_buff->flag_strlen = 1;
	}
}

static void mt_get_string()
{
	
}

int	main(int argc, char **argv)
{
	int	num;

	g_buff = malloc(sizeof(t_buffer));
	g_buff->i = 0;
	g_buff->flag_strlen = 0;
	printf("%d\n", getpid());
	while (1)
	{
		mt_get_strlen();
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
		pause();
	}
	return (0);
}
