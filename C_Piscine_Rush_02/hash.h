/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:22:02 by jko               #+#    #+#             */
/*   Updated: 2020/02/08 21:25:43 by jko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_H
# define HASH_H

# define BIG_PRIME_NUM 4999

int		get_hash_index(char *str);
void	init_hash(t_dict **hash);
t_dict	*put_dict(t_dict **hash, t_dict *new_dict);
t_dict	*get_dict(t_dict **hash, char *key);
void	free_hash(t_dict **hash);

#endif
