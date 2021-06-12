/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:41:08 by omimouni          #+#    #+#             */
/*   Updated: 2021/06/12 14:01:12 by omimouni         ###   ########.fr       */
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
	int			strlen;
	char		strlen_buff[33];
	char		*str;
	int			i;
}				t_buffer;
#endif
