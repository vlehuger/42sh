/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 15:57:33 by vlehuger          #+#    #+#             */
/*   Updated: 2014/02/06 14:38:34 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_sh2.h>

void			ft_get_cmd(t_sh *p)
{
	char		*line;

	get_next_line(0, &line);
	if (line[0])
	{
		p->cmd = ft_get_args(line);
		free(line);
	}
	else
		p->cmd = NULL;
}
