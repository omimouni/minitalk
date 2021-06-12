/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:34:21 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 07:31:52 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;

	if (argc != 0)
	{
		write(1, "Provice valid arguments.\n", 27);
		exit(-1);
	}
	return (0);
}
