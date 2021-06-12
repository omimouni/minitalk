/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 07:32:41 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 14:29:20 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_buffer	*g_buff;

int	main(int argc, char **argv)
{
	int	num;

	g_buff = malloc(sizeof(t_buffer));
	g_buff->i = 0;
	printf("%d\n", getpid());
	while (1)
	{
		if (g_buff->i == 32)
		{
			g_buff->strlen_buff[32] = '\0';
			printf("String size : %d \n", bin2dec(g_buff->strlen_buff));
			g_buff->i++;
		}
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
		pause();
	}
	return (0);
}
