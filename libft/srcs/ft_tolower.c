/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcojan <dcojan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 14:07:03 by dcojan            #+#    #+#             */
/*   Updated: 2014/03/27 14:07:03 by dcojan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_tolower(int value)
{
	if (value < 0101 || value > 0132)
		return (value);
	return (value - 0101 + 0141);
}