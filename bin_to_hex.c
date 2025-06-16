#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char binToHexChar(const char *binGroup) {
    int decimalValue = (int)strtol(binGroup, NULL, 2);

    if (decimalValue >= 0 && decimalValue <= 9) {
        return (char)('0' + decimalValue);
    } else if (decimalValue >= 10 && decimalValue <= 15) {
        return (char)('A' + (decimalValue - 10));
    }
    return '0';
}

int main() {
    char binaryString[100];
    char hexString[30];
    int i, j = 0;
    int len;

    printf("Digite a string binaria: ");
    scanf("%s", binaryString);

    len = strlen(binaryString);

    hexString[j++] = '0';
    hexString[j++] = 'x';

    int padding = 0;
    if (len % 4 != 0) {
        padding = 4 - (len % 4);
    }

    if (padding > 0) {
        char tempGroup[5] = "0000";
        for (i = 0; i < padding; i++) {
            tempGroup[4 - padding + i] = binaryString[i];
        }
        tempGroup[4] = '\0';
        hexString[j++] = binToHexChar(tempGroup);
    }

    for (i = padding; i < len; i += 4) {
        char tempGroup[5];
        strncpy(tempGroup, binaryString + i, 4);
        tempGroup[4] = '\0';

        hexString[j++] = binToHexChar(tempGroup);
    }

    hexString[j] = '\0';

    printf("Representacao hexadecimal: %s\n", hexString);

    return 0;
}
