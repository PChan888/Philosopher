/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads1_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai <kai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 23:42:35 by kai               #+#    #+#             */
/*   Updated: 2026/09/20 01:12:53 by kai              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <pthread.h>
#include <stdio.h>

void *thread(void *arg)
{
    char *id;
    int i;
    
    id = (char *)arg;
    i = 0;
    while ( i < 5)
    {
        printf("I am thread %s\n", id);
        i++;
    }
    return (NULL);
}

// passing a string literal as thread id.
// string literals are already char*, 
// so no cast is needed unlike the int/array version
int main (void)
{
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1, NULL, thread, "1");
    pthread_create(&t2, NULL, thread, "2");
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return (0);
}
