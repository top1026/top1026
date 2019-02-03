
#define list_entry(ptr, type, member) \
    ((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))

#define list_for_each(pos, head) \
    for (pos = head->next; pos != head; pos = pos->next)

struct list_head {
    struct list_head *prev, *next;
};

void init_head(struct list_head *head);
void add_list(struct list_head *head, struct list_head *node);
void del_list(struct list_head *node);
int list_empty(struct list_head *head);
