bool rotateString(char* s, char* goal) {
    if(strlen(s)!=strlen(goal)) return 0;
    char temp[2*strlen(s)+1];
    return strstr(strcat(strcpy(temp,s),s),goal)?true:false;
    
}