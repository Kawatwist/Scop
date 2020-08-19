/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsingv1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 14:46:55 by lomasse           #+#    #+#             */
/*   Updated: 2020/08/18 14:56:26 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/MtlReader.h"

void					name(char *line, t_material *ptr)
{
    int i;

    if (ptr->name)
    {
        ptr->next = malloc(sizeof(t_material));
        // Secure
        ptr->next->next = NULL;
        ptr->next->map_Kd = NULL;
        ptr->next->id = ptr->id + 1;
        ptr->next->name = ft_strdup(&(line[7]));
        i = ft_strlen(ptr->name) - 1;
        while (i > 0 && ptr->name[i] == '\r')
        {
            ptr->name[i] = 0;
            i--;
        }
    }
    else
    {
        ptr->name = ft_strdup(&(line[7]));
        i = ft_strlen(ptr->name) - 1;
        while (i > 0 && ptr->name[i] == '\r')
        {
            ptr->name[i] = 0;
            i--;
        }
    }
    
}

void					Ns(char *line, t_material *ptr)
{
    ptr->Ns = atof(&(line[2])); // Atof
}

void					Ka(char *line, t_material *ptr)
{
    ptr->Ka.x = atof(&(line[2])); // Atof
    ptr->Ka.y = atof(&(line[11])); // Atof
    ptr->Ka.z = atof(&(line[19])); // Atof
}

void					Kd(char *line, t_material *ptr)
{
    ptr->Kd.x = atof(&(line[2])); // Atof
    ptr->Kd.y = atof(&(line[11])); // Atof
    ptr->Kd.z = atof(&(line[19])); // Atof
}

void					Ks(char *line, t_material *ptr)
{
    ptr->Ks.x = atof(&(line[2])); // Atof
    ptr->Ks.y = atof(&(line[11])); // Atof
    ptr->Ks.z = atof(&(line[19])); // Atof
}