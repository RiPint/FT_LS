/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 20:07:05 by jerollin          #+#    #+#             */
/*   Updated: 2016/06/17 20:36:47 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include <stdlib.h>
# include <dirent.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

void        open_read_ls(char *path);
void		ft_putstr(char const *str);

#endif
