/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads22.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai <kai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 22:32:51 by kai               #+#    #+#             */
/*   Updated: 2026/09/20 00:42:52 by kai              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <pthread.h>
#include <stdint.h>

// pthread_self() version gets the thread unique ID and print it as an integer
// (void)arg; is used to avoid unused parameter warning
// %ju is used to print the pthread_t type as an unsigned integer
// loop is for how many time will print the thread id.

void *thread(void *arg)
{
    pthread_t id;
    int i;

    (void)arg;
    id = pthread_self();
    i = 0;
    while ( i < 5)
    {
        printf("I am thread %ju\n", (uintmax_t)id);
        i++;
    }
    return (NULL);
}

// main function creates two threads named t1 & t2.
// pthread_create() is used to create the threads 
// &t1 in the pthread_create() function is 
// the reference to the thread variable.
int main (void)
{
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1, NULL, thread, NULL);
    pthread_create(&t2, NULL, thread, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return (0);
}

// can also do:
// this just removes the need for the id var and prints 
// the pthread_self() directly in the printf statement
// void *thread(void *arg)
// {
//     pthread_t id;
//     int i;

//     (void)arg;
//     i = 0;
//     while ( i < 5)
//     {
//         printf("I am thread %ju\n", (uintmax_t)pthread_self());
//         i++;
//     }
//     return (NULL);
// }

// int main (void)
// {
//     pthread_t t1;
//     pthread_t t2;

//     pthread_create(&t1, NULL, thread, NULL);
//     pthread_create(&t2, NULL, thread, NULL);
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);
//     return (0);
// }
