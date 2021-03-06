#ifndef _SINGLE_LL_H
#define _SINGLE_LL_H

typedef struct Snode_s
{
    int data;
    struct Snode_s *next;
}SLL_node_st;

typedef struct
{
    unsigned int length;
    int max;
    int min;
    int total; 
    SLL_node_st *head;
}SLL_st;

void create_single_LL(SLL_st *L_List);
void append_single_LL(SLL_st *L_List, int x);
void pop_single_LL(SLL_st *L_List);
void insert_single_LL(SLL_st *L_List, int x, int pos);
void remove_single_LL(SLL_st *L_List, int pos);
void print_single_LL(SLL_st *L_List);
void delete_single_LL(SLL_st *L_List);


#endif