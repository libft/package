/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftc__calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 2022/09/17 13:09:12 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftc__stdlib.h"
#include "ftc__string.h"

#include <stddef.h>

#include "ftc__internal_memory.h"

void	*ftc__calloc(size_t count, size_t size)
{
	const size_t	total_size = count * size;
	void *const		result = ftc__malloc(total_size);

	if (result)
		return (ftc__memset(result, 0, total_size));
	return (NULL);
}
