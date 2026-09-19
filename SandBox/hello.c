/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai <kai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:27:11 by kai               #+#    #+#             */
/*   Updated: 2026/09/14 21:10:58 by kai              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <pthread.h>
#include <stdio.h>

// shows disorders in thread execution, as main thread may finish before 
// the hello thread runs
void *hello(void *arg)
{
    (void)arg;
    printf("thread running\n");
    return (NULL);
}

int main(void)
{
    pthread_t tid;

    pthread_create(&tid, NULL, hello, NULL);
//   pthread_join(tid, NULL);
    printf("main done\n");
    return (0);
}

//Test with: cc hello.c -o hello
// ./hello 