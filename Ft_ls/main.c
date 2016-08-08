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
	char	*optiontype;
	int	argnum;
	int	option;
	int	argletter;
	
	optiontype = malloc(sizeof(char) * 100);
	argletter = 0;
	argnum = 1;
	path = NULL;
	while (argnum != argc)
        {
		if (argv[argnum][0] == '-')
		{
			while(argv[argnum][argletter])
			{
				optiontype[argletter] = argv[argnum][argletter];
				argletter++;
			}
			optiontype[argletter] = '\0';
		}
		if (argv[argnum][0] != '-')
			path = argv[argnum];
		argnum++;
	}
	if (path == NULL)
		path = ".";
	open_read_ls(path);
}
