typedef struct node_t Node;
struct node_t {
	Node* next;
};

int loop_size(Node* node) {
	// Find a point in the loop.
	Node *i = node, *j = node;
	do {
		i = i->next;
		j = j->next->next;
	} while(i != j);

	// Count nodes in a loop.
	Node *head = i, *current = i;
	int step = 0;
	do {
		current = current->next;
		step++;
	} while(head != current);

	return step;
}
