/**
 * @file sequential_search.h
 * @author Miroslav Tichavský
 */

#ifndef sequential_search
#define sequential_search

#define MAX 100

typedef struct T_table
{
    telement element[MAX];
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

int initialize_table(p_ttable table)
{
    table->element_count = 0;
}

int search(p_ttable table,int key)
{
    
}

#endif