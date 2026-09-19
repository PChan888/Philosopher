/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai <kai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 21:25:54 by kai               #+#    #+#             */
/*   Updated: 2026/09/14 22:39:50 by kai              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <pthread.h>
#include <stdio.h>

// init counter
int counter = 0;

// so thread is add: counter and i start at 0 but never over 100000
void *add(void *arg)
{
    (void)arg;
    int i = 0;
    while (i < 100000)
    {
        counter ++;
        i++;
    }
    return (NULL);
}

//make two threads t1 and t2 they both run function add
int main(void)
{
    pthread_t t1;
    pthread_t t2;
    
    pthread_create(&t1, NULL, add, NULL);
    pthread_create(&t2, NULL, add, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("counter = %d\n", counter);
    return (0);
}


