#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void *a, const void *b) {
    // a와 b는 배열 요소(char*)를 가리키는 포인터이므로 char**로 캐스팅 필요
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(void) {
    const char *words[] = {"banana", "apple", "ant", "orange"};
    int size = 4;

    qsort(words, size, sizeof(const char *), cmp_str);

    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
