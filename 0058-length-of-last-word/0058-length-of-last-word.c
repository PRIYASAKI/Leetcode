int lengthOfLastWord(char* s) {
    int c=0;
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            c++;
        }
        if(s[i]!=' ' && i>0 &&  s[i-1]==' ')
        break;
    }
    return c;
    
}