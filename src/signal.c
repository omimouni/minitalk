/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:14:54 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 14:18:30 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

extern t_buffer	*g_buff;

void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		g_buff->strlen_buff[g_buff->i] = '1';
	else if (signum == SIGUSR2)
		g_buff->strlen_buff[g_buff->i] = '0';
	g_buff->i += 1;
}
