#include<stdio.h>
void printBonjour(){
    printf("Bonjour");
}

void printNamaste(){
    printf("Namaste");
}
int main(){
    char ch;
    printf("Enter Nationality:");
    scanf("%c",&ch);
    if(ch=='f'){
        printBonjour();
    }else{
        printNamaste();
    }
    return 0;
}

