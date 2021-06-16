/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:41:08 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/16 08:34:29 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "utils/utils.h"

# include <unistd.h>
# include <sys/types.h>
# include <stdlib.h>
# include <stdio.h> // TODO: remove later
# include <signal.h>

typedef struct	s_buffer {
	char	ch[8];
	int		count;
}	t_buffer;

#endif
