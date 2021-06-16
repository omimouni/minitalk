/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:19:43 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/16 10:21:07 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static char	*reset(void)
{
	char	*ret;

	ret = (char *)malloc(2);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

static int	calculate(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	set_n(unsigned int *tmp, int n)
{
	if (n < 0)
	{
		*tmp = -n;
		return (1);
	}
	*tmp = (unsigned int)n;
	return (0);
}

char	*ft_itoa(int n)
{
	int				len;
	int				signe;
	unsigned int	tmp;
	char			*ret;

	len = 0;
	signe = 0;
	tmp = n;
	if (n == 0)
		return (ret = reset());
	else
		signe = set_n(&tmp, n);
	len = calculate(tmp);
	ret = (char *)malloc(len + signe + 1);
	*(ret + len-- + signe) = '\0';
	while (tmp > 0)
	{
		*(ret + len + signe) = tmp % 10 + '0';
		len--;
		tmp /= 10;
	}
	if (signe)
		*ret = '-';
	return (ret);
}
