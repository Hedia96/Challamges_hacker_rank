#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);
/************************************************/
void swap(int arr[], int i,int index) 
{
int temp=arr[i];
arr[i]=arr[index];
arr[index]=arr[i];
}
/*************************************************/
int getindex_minvalue(int arr[], int startindex, int size) {
  int i = 0;
  int minvalue = arr[startindex];
  int minindex = startindex;
  for (i = startindex; i < size; i++) {
    if (arr[i] < minvalue) {
      minindex = i;
      minvalue = arr[i];
    }
  }
  return minindex;
}
/****************************************************************/
void selectionsort(int arr[],int size)
{
    int index=0;
    int i=0;
    for(i=0;i<size;i++)
    {
      index = getindex_minvalue(arr,i,size);
      swap(arr,i,index);
    }
   

}
// Complete the migratoryBirds function below.
int migratoryBirds(int arr_count, int* arr) 
{ int i=0;
int no_types=0;
    
    
/*sorting in desccending order*/
selectionsort(arr,arr_count);
/*get the number of repitation of specific element to know howmany types i have*/
for(i=0;i<arr_count-1;i++)
   {
    if(arr[i]!=arr[i+1])
    no_types++;

}
int *arrayP_types_repetition=(int *)malloc(no_types*sizeof(int));
 for(i=0;i<arr_count;i++)
 {
     
 }

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* arr_count_endptr;
    char* arr_count_str = ltrim(rtrim(readline()));
    int arr_count = strtol(arr_count_str, &arr_count_endptr, 10);

    if (arr_count_endptr == arr_count_str || *arr_count_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(rtrim(readline()));

    int* arr = malloc(arr_count * sizeof(int));

    for (int i = 0; i < arr_count; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int result = migratoryBirds(arr_count, arr);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}





#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);
/************************************************/
void swap(int arr[], int i,int index) 
{
int temp=arr[i];
arr[i]=arr[index];
arr[index]=arr[i];
}
/*************************************************/
int getindex_minvalue(int arr[], int startindex, int size) {
  int i = 0;
  int minvalue = arr[startindex];
  int minindex = startindex;
  for (i = startindex; i < size; i++) {
    if (arr[i] < minvalue) {
      minindex = i;
      minvalue = arr[i];
    }
  }
  return minindex;
}
/****************************************************************/
void selectionsort(int arr[],int size)
{
    int index=0;
    int i=0;
    for(i=0;i<size;i++)
    {
      index = getindex_minvalue(arr,i,size);
      swap(arr,i,index);
    }
   

}
// Complete the migratoryBirds function below.
int migratoryBirds(int arr_count, int* arr) 
{ int i=0;
int no_types=0;
    
    
/*sorting in desccending order*/
selectionsort(arr,arr_count);
/*get the number of repitation of specific element to know howmany types i have all 5 types*/


for(i=0;i<arr_count-1;i++)
   {
    if(arr[i]!=arr[i+1])
    no_types++;

}
//int *arrayP_types_repetition=(int *)malloc(no_types*sizeof(int));
 
 for(i=0;i<arr_count;i++)
 {
     int value=arr[i];
     int j;
     int num_repeitation=1;
     for (j = i+1; j < arr_count ; j++)
      {
       if (arr[j] == value)
       {
         num_repeitation++;
        }
        else
         break;
     }
     value = arr[j-1 ];
     arrayP_types_repetition[]
 }

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* arr_count_endptr;
    char* arr_count_str = ltrim(rtrim(readline()));
    int arr_count = strtol(arr_count_str, &arr_count_endptr, 10);

    if (arr_count_endptr == arr_count_str || *arr_count_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(rtrim(readline()));

    int* arr = malloc(arr_count * sizeof(int));

    for (int i = 0; i < arr_count; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int result = migratoryBirds(arr_count, arr);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
