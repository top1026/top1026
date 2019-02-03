
#include <list.h>

void init_head(struct list_head *head)
{
    head->prev = head;
    head->next = head;
}

int list_empty(struct list_head *head)
{
	return (head->next == head);
}

static void __add_list(struct list_head *node, struct list_head *prev, struct list_head *next)
{
    prev->next = node;
    node->prev = prev;
    node->next = next;
    next->prev = node;
}

static void add_list_head(struct list_head *head, struct list_head *node)
{
    __add_list(node, head, head->next);
}

static void add_list_tail(struct list_head *head, struct list_head *node)
{
    __add_list(node, head->prev, head);
}

void add_list(struct list_head *head, struct list_head *node)
{
    add_list_head(head, node);
}

static void __del_list(struct list_head *prev, struct list_head *next)
{
    prev->next = next;
    next->prev = prev; 
}

void del_list(struct list_head *node)
{
    __del_list(node->prev, node->next);
}

