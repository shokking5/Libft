/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acyrenna <acyrenna@school21.ru>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:27:17 by acyrenna          #+#    #+#             */
/*   Updated: 2021/01/09 17:27:19 by acyrenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_btol(unsigned long big)
{
	u_int32_t b0;
	u_int32_t b1;
	u_int32_t b2;
	u_int32_t b3;

	b0 = (big & 0x000000ff) << 24u;
	b1 = (big & 0x0000ff00) << 8u;
	b2 = (big & 0x00ff0000) >> 8u;
	b3 = (big & 0xff000000) >> 24u;
	return (b0 | b1 | b2 | b3);
}
