#ifndef MINIC_H_
#define MINIC_H_

unsigned long my_strlen(const char *s);
int my_strcmp(const char *s1, const char *s2);

unsigned long my_strlen(const char *s){
    const char *str;
    for (str = s; *str; ++str);
    return (str - s);
}

int my_strcmp (const char *s1, const char *s2) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (*p1 != '\0') {
        if (*p2 == '\0') return  1;
        if (*p2 > *p1)   return -1;
        if (*p1 > *p2)   return  1;

        p1++;
        p2++;
    }

    if (*p2 != '\0') return -1;

    return 0;
}

#endif