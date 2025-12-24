#include <stdio.h>
#include <string.h>

char *str_find(char *a, char *b){
    for (int i=strlen(b); i>=0; i--) {
        if (a[strlen(a) - i] != b[strlen(b)-i]) {
            return "No";
        }
    }
    return "Yes";
}

int main(){
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    printf("%s", str_find(a, b));
    return 0;
}