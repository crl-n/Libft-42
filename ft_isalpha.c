/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:50:44 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/30 15:21:40 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}