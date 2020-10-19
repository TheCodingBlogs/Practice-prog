//algo for deleting the node in O(1) without head node in LL
//only position pointer is given
void del(struct node *pos)
{
if(pos==NULL)
return;
if(pos->next==NULL)
cout<<"Can't delete last node\n";
return ;

    struct node *temp=p->next;//taking ointer to the next pos
    p->data=temp->data;//copying the data
    p->next=p->next->next;
    free(temp);



}
