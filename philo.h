/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai <kai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 00:28:39 by kai               #+#    #+#             */
/*   Updated: 2026/08/07 00:50:50 by kai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>

// struct for whole system.
// nb_philos    = how many philosophers entered
// time_to_die  = time taken till death 
// time_to_eat  = time it will take to sleep
// must_eat     = how many meals must be eaten no long math
// start_time   = 
//
typedef struct s_data
{
    int             nb_philos;
    long            time_to_die;
    long            time_to_eat;
    long            time_to_sleep;
    int             must_eat;
    long            start_time;
    int             stopped;
    
}

