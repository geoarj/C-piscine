typedef struct sllist
{
	VALUE val;
	struct sllist* next;
}
sllnode;

sllnode* create(VALUE val);
sllnode* new = create(6);

