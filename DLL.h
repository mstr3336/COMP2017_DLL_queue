#ifndef DLL_H
#define DLL_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * @author mstr3336 -  Matthew Strasiotto
 * https://github.com/mstr3336/COMP2017_DLL_queue.git
 * Implementation of a doubly linked list not intended to be thread-safe
 * To be fixed
 * Licensed however the open license i set says. 
 * Don't plagarise this because you're allowed to use it if you reference it
 */

typedef struct node node_t;
typedef struct double_linked_list dll_t;

/**
 * 
 * Node that stores a pointer to some value
 */

struct node
{
	node_t * prev;
	node_t * next;
	void * val;
};

/*
 *Double linked list implementation, stores head, tail and size
 */
struct double_linked_list 
{
	node_t * head;
	node_t * tail;
	uint64_t size;
};

/*
 * Standard DLL operations include 
 * 
 * INSERT OPS
 * 	enqueue(list, void * val) - add_last
 * 	push(list, void* val) - add_first
 * REMOVE OPS
 * 	pop(list) - remove_first
 * 	remove_tail(list)
 *
 * POSITIONAL
 * 	next(list, node)
 * 	prev(list, node)
 * 
 * first(list)
 * last(list)
 *
 * hasNext? hasPrev?
 *
 * is_head()? Nah
 * is_tail()? Nah
 *
 * private insert(node_t * prev, node_t * next, void * val);
 * get_size;
 * 
 * INITIALIZE STUFF
 * init_dll()
 * aforementioned insert
 *
 */

dll_t * dll_init();
void dll_destroy(dll_t * list);

/*
 * Returns NULL if some error occurred
 * adds a new node to end of list
 *
 */

int dll_enqueue(dll_t * list, void * value);

/* 
 * Add new node to start of list
 * Return NULL if error
 */
int dll_push(dll_t * list, void * value);


/* 
 * Remove the node a 
 */
void * dll_pop(dll_t * list);




#endif