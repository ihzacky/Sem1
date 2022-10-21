#include <stdio.h>
#include <string.h>

char str[100];

int main(){

    scanf("%[^\n]s", &str);

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", str);
    printf("    return 0;\n");
    printf("}\n");

    return 0;
}