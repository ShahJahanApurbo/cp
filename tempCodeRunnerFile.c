#include<stdio.h>
// #include<conio.h>

int recognize_comment_type(int line,char com[3000]){
    int flag=0;
    int count = 0;
for(int i=0; com[i]!='\0'; i++){
    if(com[i]=='/'){
        if(com[i+1]=='/'){
            flag=1;
            while(com[i]!='\n'){
                if(com[i]=='\0')break;
                i++;
                count++;
            }
        }
        else if(com[i+1]=='*'){
            flag=2;
            for(int j=i+2; com[j]!='\0'; j++){
                if(com[j]!='*' && com[j+1]!='/'){
                    count++;
                }
            }
        }
    }
//     else if(com[i]=='*'){
/*fljkda;fjadsjfk*/
  if(flag==1){
        printf("Line:%d ", line);
        printf("It is a single line comment\n");
        printf("\nNumber of characters in the comment: %d\n\n", count);
    }
    else if(flag==2){
        printf("Line:%d ", line);
        printf("It is a multi line comment\n");
        printf("\nNumber of characters in the comment: %d\n\n", count);
    }
    return count;
}
}

int main(){
    char com[3000];
    int line = 1;
    int count = 0;
    while(fgets(com, 3000, stdin)!=NULL){
        recognize_comment_type(line,com);
        line++;
    }   
    
}