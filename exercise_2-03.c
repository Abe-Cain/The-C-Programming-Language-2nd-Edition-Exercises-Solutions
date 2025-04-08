#include <stdio.h>
#include <ctype.h>

int htoi(char s[]); 

int main() 
{
    char hex_str[] = "0x2F";
    int result = htoi(hex_str);
    printf("Hexadecimal %s to decimal is %d\n", hex_str, result);
    
    return 0;
}

int htoi(char s[])
{
    int i = 0, result = 0;
    
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }
    
    for (; s[i] != '\0'; i++) {
        char c = s[i];
        
        int digit;
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        } else {
            break;  
        }
        
        result = result * 16 + digit;
    }
    
    return result;
}
