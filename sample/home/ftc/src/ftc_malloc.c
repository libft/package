/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftc_stdlib.h"

#include <stddef.h>

#include "ftc_internal_memory.h"
#include "wrap_stdlib.h"

void	*ftc_malloc(size_t size)
{
	void			*result;
	t_memory_block	*tmp;

	tmp = (t_memory_block *)wrap_malloc(sizeof(t_memory_block) + size);
	if (!tmp)
		return (NULL);
	tmp->capacity = size;
	tmp->size = size;
	result = tmp->actual;
	return (result);
}
