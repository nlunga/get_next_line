/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:24:02 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/22 10:18:13 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"
#define BUFF_SIZE 32
/*
int		get_next_line(const int fd, char **line)
{

}*/

int main(void)
{
	int ret;
	char buf[BUFF_SIZE];
	
	while (1)
	{
		ret = read(0, buf, BUFF_SIZE);
		if(ret < BUFF_SIZE)
		{
			buf[ret] = '\0';
			ft_putendl(buf);
			break;
		}
		else
			ft_putendl(buf);
	}
	//sleep(20);
	return (0);
}
