/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:46:10 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/16 09:00:09 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	check(int n)
{
	if ((unsigned long)n > __LONG_MAX__)
		return (1);
	return (0);
}

static int	flret(int flag)
{
	if (flag > 0)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		n;
	char	*s;
	int		flag;

	flag = 1;
	s = (char *)str;
	while (*s == ' ' || *s == '\n' || *s == '\r' || *s == '\t'
		|| *s == '\v' || *s == '\f')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			flag = -1;
		s++;
	}
	n = 0;
	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		if (check(n))
			return (flret(flag));
		n = (n * 10) + (*s - '0');
		s++;
	}
	return (n * flag);
}
