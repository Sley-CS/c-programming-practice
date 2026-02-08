char test_extension(const char *file_name, const char extension){
        char *s = file_name,*t = extension;
            while (*s)
                if(*s++ == '.')
                    break;
                if(*s == '\0')
                    //printf("no extension found");
                    return false; 
                for ( ;*s; s++)
                        if(toupper(*s) == toupper(*t))
                            t++;
                        else if(*s == *t)
                                return true;
                             else
                                return false;
        }
        
// NOTE: I plan to improve the function very soon to make it effective
// this function takes into account that extensions 
//  can sometimes be 4 characters long or even less, for that
// reason it looks for the dot(.) character first instead of the 
// NULL(\0) character. 