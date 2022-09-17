/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftc__malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 2022/09/17 13:11:54 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftc__stdlib.h"

#include <stddef.h>

#include "ftc__internal_memory.h"
#include "wrap__stdlib.h"

void	*ftc__malloc(size_t size)
{
	void					*result;
	t_memory_block *const	tmp
		= (t_memory_block *)wrap__malloc(sizeof(t_memory_block) + size);

	if (!tmp)
		return (NULL);
	tmp->capacity = size;
	tmp->size = size;
	result = tmp->actual;
	return (result);
}
