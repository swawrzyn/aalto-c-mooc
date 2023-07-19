#include <stdlib.h>
#include "queue.h"
#include "queuepriv.h"

Queue *Queue_init(void)
{
	Queue *q = calloc(1, sizeof(Queue));
	return q;
}

int Queue_enqueue(Queue *q, const char *id, const char *name)
{
	(void)q;
	(void)id;
	(void)name;
	return 0;
}

char *Queue_firstID(Queue *q)
{
	if (q && q->first)
		return q->first->id;
	else
		return NULL;
}

char *Queue_firstName(Queue *q)
{
	if (q && q->first)
		return q->first->name;
	else
		return NULL;
}

int Queue_dequeue(Queue *q)
{
	(void)q;
	return 0;
}

int Queue_drop(Queue *q, const char *id)
{
	(void)q;
	(void)id;
	return 0;
}

void Queue_delete(Queue *q)
{
	if (q) {
		while (Queue_dequeue(q))
			;
		free(q);
	}
}
