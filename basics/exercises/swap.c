#define L = 80 

int main(void){
    
    char mssge[L] = {''}, rev_mssge[L] = {''};
    bool is_palindrome; 
    int count = 0, i = 0; 
    
    // read mssge
        while(i < L) {
            mssge[i] = getchar();
            if(mssge[i] == '\n')
                break; i++; 
}
    // copy mssge in reverse
        for (count = i; count >= 0; count--)
            rev_mssge[count] = mssge[count];
            
        for (; i < L && mssge[i] != '\n'; i++ )
            if(mssge[i] == rev_mssge[i])
                is_palindrome = true;
            else{
                is_palindrome = false;
                break;
            }
            
    // check for palindrome
         if(is_palindrome)
            printf("Palindrome\n");
         else
            printf("Not a Palindrome\n");
            
         return 0;
}

// comments are comming soon. 