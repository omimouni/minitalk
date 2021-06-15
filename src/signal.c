/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:14:54 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/15 19:01:01 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

extern t_buffer	*g_buff;

static void	handle_strlen(int signum)
{
	if (signum == SIGUSR1)
		g_buff->strlen_buff[g_buff->i] = '1';
	else if (signum == SIGUSR2)
		g_buff->strlen_buff[g_buff->i] = '0';
	g_buff->i += 1;
}

static void handle_string(int signum)
{

	if (signum == SIGUSR1)
		g_buff->char_buff[g_buff->i] = '1';
	else if (signum == SIGUSR2)
		g_buff->char_buff[g_buff->i] = '0';
	g_buff->i++;
	
	if (g_buff->i <= 7)
		g_buff->i += 1;
	else
	{
		write(1, "Hello\n", 6);
		g_buff->i = 0;
	}
}

void	signal_handler(int signum)
{
	if (!g_buff->flag_strlen)
		handle_strlen(signum);
	else
		handle_string(signum);
}
