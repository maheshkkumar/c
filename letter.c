#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count, length;

int main(void){
    char str[1000];
    int t, value;
    scanf("%d", &t);
    while(t--){
        scanf("%s", str);
        value = palindrome(str);
        printf("%d\n", value);
    }
    return;
}

int palindrome(char str[]){
    int flag;
    count = 0;
    while(pal(str)!=1)
    {
        int len = strlen(str);
        if(flag == 1){
            return count;
        }
        else{
            if(str[len]=='a'){
                len--;
           }
            else{
                str[len]--;
                ++count;
            }
        }
    }
    return count;
}

int pal(char str[]){
    char rev[10000];
    int flag, i;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0 ; i--)
    {
        rev[length - i - 1] = str[i];
    }
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (rev[i] != str[i])
            flag = 0;
    }
    if (flag == 1)
    {
        printf("It's a palindrome\n");
        return 1;
    }
    return 0;
}
