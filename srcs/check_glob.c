/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_glob.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 14:01:46 by grebett           #+#    #+#             */
/*   Updated: 2014/03/27 14:01:46 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh.h>

void					check_glob(char **ctab)
{
	int					i;

	i = 1;
	while (ctab[i] && ctab[i][0] == '-')
		i++;
	while (ctab[i])
		i++;
}