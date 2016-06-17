/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read_ls.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 20:19:42 by jerollin          #+#    #+#             */
/*   Updated: 2016/06/17 20:36:43 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		open_read_ls(char *path)
{
	DIR *rep;
	struct dirent *files;

	files = NULL;
	rep = opendir(path);
	if (rep == NULL)
		{
			ft_putstr("FAIL OPEN\n");
			exit(1);
		}
	ft_putstr("OPEN SUCCES\n");
	files = readdir(rep);
	if (closedir(rep) == -1)
	{
		ft_putstr("FAIL CLOSE\n");
		exit(-1);
	}
	ft_putstr("CLOSE SUCCES\n");
	return ;
}
