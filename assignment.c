int firstUniqChar(char* s) {
    int arr[26];
    for(int i=0;s[i]!='\0';i++){
        arr[s[i]-'a']+=1;
    }
    for(int j=0;s[j]!='\0';j++){
        if(arr[s[j]-'a']==1){
            return j;
        }
    }
    return -1;
}