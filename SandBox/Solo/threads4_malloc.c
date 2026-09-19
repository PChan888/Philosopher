/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads4_malloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai <kai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 01:09:46 by kai               #+#    #+#             */
/*   Updated: 2026/09/20 02:29:01 by kai              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <pthread.h>
#include <stdio.h>

// assigning a malloc'd int to each thread id.
void *thread(void *arg)
{
    
}

int main (void)
{
    int n;
    int i;
    

    n = 8;
    i = 0;
    pthread_t *t;
    t = malloc(sizeof(pthread_t) * n);
    if (!t)
        return(NULL);
    
}