/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjohnnie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:51:28 by tjohnnie          #+#    #+#             */
/*   Updated: 2020/11/01 17:51:29 by tjohnnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char ch)
{
	if (ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r'
		|| ch == ' ')
		return (1);
	return (0);
}
