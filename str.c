 int strLen(char *s1){
    int len=0;
    while(*s1++){
        len++;
    }
    return len;
} char *strcat(char *s1,char *s2){
       char *temp=s1;
       while(*s1){
           s1++;
       }
       while(*s2){
           *s1++=*s2++;
       }
       return temp;
} char *strcpy(char *s1,char *s2){
     char *temp=s1;
      while(*s2){
          *s1++=*s2++;
      }
     *s1='\0';
     return temp;
} 
int main() {
  char str1[100]="helloww";
  char str2[100]="worldssokf";
  printf("%d",strLen(str1));
  printf("%s",strcpy(str1,str2));
return 0;
}
