// Program for Merging two sorted Linked List/unsoted link list

#include "ll.h"

struct node * merge(struct node **l1,struct node **l2){
    struct node * l3=NULL;
    struct node * p,*q;
    p=*l1,q=*l2;
    while(p!=NULL && q!=NULL){
        if(p->info<q->info){
            insert_beg(&l3,p->info);
            p=p->next;
        }
        else{
            insert_beg(&l3,q->info);
            q=q->next;
        }
    }
    while(p!=NULL){
        insert_beg(&l3,p->info);
        p=p->next;
    }
    while(q!=NULL){
        insert_beg(&l3,q->info);
        q=q->next;
    }
    //return l3;
    reversal(&l3);
    traversal(&l3);
}
int main(){
    struct node * list1,*list2,*list3;
    list1=NULL;
    list2=NULL;
    list3=NULL;
    insert_end(&list1,1);
    insert_end(&list1,2);
    insert_end(&list1,3);
    insert_end(&list1,4);
    insert_end(&list1,5);
    //
    insert_end(&list2,3);
    insert_end(&list2,4);
    insert_end(&list2,5);
    insert_end(&list2,6);
    insert_end(&list2,7);
    //
    merge(&list1,&list2);
    //traversal(&list3)
}