#include <stdio.h>
#include <string.h>
#define MAX_LEN 11

void checkRetry(char buffer[]);
int validate(char *str1, char *str2);

int main () {
    char password[MAX_LEN];
    char check[MAX_LEN];
    char buffer[MAX_LEN];

    while (1) {
        fgets(password, MAX_LEN, stdin);
        fgets(check, MAX_LEN, stdin);

        if ((strlen(password) >= 5 && strlen(password) <= 10)
            && (strlen(check) >= 5 && strlen(check) <= 10)) {
            if (validate(password, check)) {
                printf("Done\n");
                break;
            } else {
                checkRetry(buffer);
            }
        }
        else {
            checkRetry(buffer);
        }
    }
}

int validate(char *str1, char *str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    
    if (str1[len1-1] == '\n') str1[--len1] = '\0';
    if (str2[len2-1] == '\n') str2[--len2] = '\0';
    
    if (len1 != len2) return 0;
    
    // 문자열 비교
    for (size_t i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            return 0; // 문자열이 다르면 0 반환
        }
    }
    
    return 1; // 문자열이 같으면 1 반환
}

void checkRetry(char buffer[]) {
    while (1) {
        printf("Retry\n");
        if (fgets(buffer, MAX_LEN, stdin) == NULL) {
            continue;
        }
        buffer[strcspn(buffer, "\n")] = '\0'; 
        if (strcmp(buffer, "retry") == 0) {
            break;
        }
    }
}
