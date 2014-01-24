/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 15:45:24 by vlehuger          #+#    #+#             */
/*   Updated: 2014/01/23 16:17:52 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_sh2.h>

void				ft_shell(t_sh *p)
{
	p = p;
	while (42)
	{
		ft_putstr(PROMPT);
		ft_cmd(p);
	}
}