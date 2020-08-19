/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:21:24 by lomasse           #+#    #+#             */
/*   Updated: 2018/12/02 15:23:03 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnlen(char *str, int len)
{
	char *ptr;

	ptr = str;
	while (len-- || *str)
		str++;
	return (ptr - str);
}
