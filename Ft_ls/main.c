/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 19:40:08 by jerollin          #+#    #+#             */
/*   Updated: 2016/06/17 20:36:45 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			main(int  argc, char *argv[])
{
	char	*path;
	int	argnum;
	int	option;
	
	argnum = 1;
	path = NULL;
	while (argnum != argc)
        {
		if (argv[argnum][0] == '-')
		{
			option = 1;
                        ft_putstr("!------YES RASTA FA RI-------!");
			ft_putstr("\n");
		}
		if (argv[argnum][0] != '-')
			path = argv[argnum];
		argnum++;
	}
	if (path == NULL)
		path = ".";
	open_read_ls(path);
}
