#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) < (b) ? (b) : (a))
int lexicographic_sort(const char* a, const char* b) {
const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    return strcmp(*ia, *ib);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
 return lexicographic_sort(b, a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
      const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    int sum_a = 0, sum_b = 0;
    int count_a[26];
    int count_b[26];
    
    for (int i = 0; i < 26; i++) {
        count_a[i] = 0;
        count_b[i] = 0;
    }
    
    for (int i = 0; i < strlen(*ia); i++)
        count_a[(*ia)[i] - 'a'] = 1;
    
    for (int i = 0; i < strlen(*ib); i++)
        count_b[(*ib)[i] - 'a'] = 1;
    
    for (int i = 0; i < 26; i++) {
        sum_a += count_a[i];
        sum_b += count_b[i];
    }
    
    if ((sum_a - sum_b) == 0)
        return lexicographic_sort(a, b);
    else
        return (sum_a - sum_b);
}

int sort_by_length(const char* a, const char* b) {
const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    int ret;
    
    if ((ret = strlen(*ia) - strlen(*ib)) == 0)
        return lexicographic_sort(a, b);
    else
        return ret;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    qsort(arr, len, sizeof(char *), cmp_func);
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
