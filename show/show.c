//
// Created by gwj33 on 2022/6/23.
//

#include "show.h"
#include <stdio.h>

__declspec(dllexport) int show(char *s)
{
    printf("%s\n", s);
    return 0;
}