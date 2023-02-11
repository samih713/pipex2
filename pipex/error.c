/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelra <sabdelra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:35:17 by sabdelra          #+#    #+#             */
/*   Updated: 2023/02/10 20:43:33 by sabdelra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_msg(char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}

void	argcheck(int argc)
{
	if (argc < 5)
	{
		write(2, "Invalid number of arguments\n", 29);
		exit (EXIT_FAILURE);
	}
}
