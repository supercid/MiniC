#include "minic.h"

unsigned long my_strlen(const char *s){
    const char *str;
    for (str = s; *str; ++str);
    return (str - s);
}
