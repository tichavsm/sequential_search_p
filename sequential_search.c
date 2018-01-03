/**
 * @file sequential_search.c
 * @author Miroslav Tichavský
 */


// Dynamically alokated search table
typedef struct T_table
{
    struct T_Element *element;
    int element_count;
} ttable, *p_ttable;

typedef struct T_Element
{
    struct T_data;
    int key;
} telement,*p_telement;

typedef struct T_Data
{
    char name[50];
    char surname[50];
} tdata, *p_tdata;
