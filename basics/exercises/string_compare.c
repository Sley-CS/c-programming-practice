int strcmp (char *s, char *s2){
    while(*s1++ == *s2++)
        if(*s == '\0')
            return 0; 
    return *s1 - *s2;
} 


// this function compare two strings and return either a positive or negative value. 
// ... I'll come back to explain its mechanism