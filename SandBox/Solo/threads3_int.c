/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads3_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai <kai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 03:36:27 by kai               #+#    #+#             */
/*   Updated: 2026/09/20 02:31:15 by kai              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <pthread.h>
#include <stdio.h>


// 2 concepts added in this version:
// 1. Using int to id each thread instead of pthread_t or char *
// 2. Using an array of pthread_t to create multiple threads instead of just 2
void *thread(void *arg)
{
    int *id;
    int i;

    id = (int *)arg;
    i = 0;
    while ( i < 5)
    {
        printf("I am thread %d\n", *id);
        i++;
    }
    return (NULL);
}

// array for pthread_t and id[n] to create multiple threads.
// id[n] is an array of int to hold the id for each thread.
int main (void)
{
    int n;
    int i;
    
    n = 8;
    i = 0;
    pthread_t t[n];
    int id[n];

    while (i < n)
    {
        id[i] = i;
        pthread_create(&t[i], NULL, thread, &id[i]);
        i++;
    }
    
    i = 0;
    while( i < n)
    {
        pthread_join(t[i], NULL);
        i++;
    }
    return (0);
}
