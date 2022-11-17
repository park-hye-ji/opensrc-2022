#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "copy2.h"

int main(){
        char* str1 = "IoT hello. media labs";
        char* str2 = copy(str1);
        printf("%s\n",str2);
        free(str2);
        return 0;
}
