/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:52:38 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 15:52:41 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_tolower(int c){

    if(c >= 65 && c <= 90){
        c = c + 32;
        return(c);
    }
    else{
        return c;
    }

}

// int main(){
    
//     char ex[] = "b";
    
//     printf ("c = %d \n",ft_tolower(ex[0]));
// }