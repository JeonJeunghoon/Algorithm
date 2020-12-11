/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leetcode_array01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeunjeon <jeunjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:43:06 by jeunjeon          #+#    #+#             */
/*   Updated: 2020/12/11 10:43:21 by jeunjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i = 0;
    int len = 0;
    int temp = 0;

    if (numsSize > 10000)
            return (-1);
    while (i < numsSize)
    {
		while (nums[i++] == 1)
			temp++;
        len = len > temp ? len : temp;
        temp = 0;
    }
    return (len);
}

int main(void)
{
	int	arr[] = {1, 0, 1, 1, 0, 1};
	printf("%d\n", findMaxConsecutiveOnes(arr, 1));
	return (0);
}