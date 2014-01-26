/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 19:02:22 by vlehuger          #+#    #+#             */
/*   Updated: 2014/01/26 13:15:14 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_sh2.h>

void			ft_test_cmd_exec(t_cmd *cmd, t_sh *p);

void			ft_exec_cmd(t_sh *p)
{
	ft_test_cmd_exec(p->cmd, p);
}

void			ft_test_cmd_exec(t_cmd *cmd, t_sh *p)
{
	while (cmd)
	{
		if (cmd->split_type == PIPE && ft_valid_redir(cmd->cmd_line, '|') == 0)
			ft_test_pipe_cmd(cmd->split_cmd, p);
		else
			ft_test_exec_redir(cmd, p);
		cmd = cmd->next;
	}
}
