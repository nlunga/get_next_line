/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:25:22 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/22 04:29:09 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef __GET_NEXT_LINE_H__
#define __GET_NEXT_LINE_H__
#define BUFF_SIZE 32
#include "./libft/libft.h"
//# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
