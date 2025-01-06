// 2024004501 이현수

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    char result[1000];
    int marker[1000] = {0};
    int k = 0, tmp;
    int count[26] = {0}; 
    
    scanf("%s", str);
    
    for(int i = 0; str[i]; i++) {
        if(isalpha(str[i])) {
            char ch = tolower(str[i]);
            result[k++] = ch;
            count[ch - 'a']++; 
        }
    }

    for (int i = 0; i < k; i++) {
        tmp = (int)result[i] - 'a';
        if (count[tmp] > 0 && marker[tmp] == 0) {
            printf("%c; %d\n", 'a' + tmp, count[tmp]);
            marker[tmp] = 1;
        }
    }
    
    
    return 0;
}