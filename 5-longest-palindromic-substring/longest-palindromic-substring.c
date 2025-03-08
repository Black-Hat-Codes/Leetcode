bool is_palindrome(char *s,int i,int j)
{
    for(int k=i,t=j; k<t; k++,t--)
    {
        if(s[k]!=s[t])
        return 0;
    }
    return 1;
}
char* longestPalindrome(char* s) {
    char *new_str=NULL;
    int string_length=0;
    for(int i=0; s[i]!='\0'; i++)
        string_length++;
    int l=0;
    int max_length=0;
    for(int i=0; i<string_length; i++)
    {
        for(int j=i; j<string_length; j++)
        {
            if(is_palindrome(s,i,j)){
                int new_length=j-i+1;
                if(new_length>max_length){
                    max_length=new_length;
                    // if(new_str)
                    // {
                    //     free(new_str);
                    // }
                new_str=(char *)malloc((max_length+1)*sizeof(char));
                strncpy(new_str , s+i, max_length);
                new_str[max_length]='\0';
                }
            }
        }
    }
    return new_str;
}