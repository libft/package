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
#include "ftc_string.h"

#include <stddef.h>
#include <stdint.h>

#include "ftc_internal_memory.h"
#include "wrap_stdlib.h"

void	ftc_free(void *ptr)
{
	t_memory_block	*old;
	void			*result;

	if (!ptr)
		return ;
	old = (t_memory_block *)((intptr_t)(ptr)
			- (intptr_t)(&((t_memory_block *) 0)->actual));
	wrap_free(old);
}
