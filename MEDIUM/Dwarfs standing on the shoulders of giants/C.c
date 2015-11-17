#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define FALSE   0
#define TRUE    1


/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

typedef struct node{
    int num;
    char influenced;
    struct ListNode *children;
}node;


typedef struct listNode{
    struct node *elt;
    struct node *next;
    
}listNode;

struct node* findelt(struct listNode *list, int num){
    while (list!=NULL){
        if( list->elt->num==num)
            return list->elt;
            
        list=list->next;
    }
    return NULL;
}

int searchDepth(struct node *elt){
    int maxdepth=-1;
    
//    fprintf(stderr,"N° %d has %d influ\n",elt->num,elt->influence);
    
    struct listNode * child=elt->children;
    
    while(child!=NULL){
        int depth=searchDepth(child->elt);
        if(depth>maxdepth)
            maxdepth=depth;
        
        child=child->next;
    }
    return maxdepth+1;
    
}

void addEltToList(struct listNode* *list, struct node* elt){
    
        
    struct listNode* newElt=malloc(sizeof(listNode));
    newElt->elt=elt;
    newElt->next=*list;
    *list=newElt;
}
int main()
{
    int n; // the number of relationships of influence
    scanf("%d", &n);
    int maxInfluence=0;
    int maxDepth=0;
    struct listNode *listAllNodes=NULL;
    
    
    for (int i = 0; i < n; i++) {
        int x; // a relationship of influence between two people (x influences y)
        int y;
        scanf("%d%d", &x, &y);
        
        //fprintf(stderr,"%d\t%d\n",x,y); 
        
        struct node *xNode=findelt(listAllNodes, x);
        struct node *yNode=findelt(listAllNodes, y);
        
        if (yNode==NULL){//create it
            yNode=malloc(sizeof(node));
            yNode->children=NULL;
            yNode->num=y;
            
            addEltToList(&listAllNodes, yNode);
        }
        if (xNode==NULL){//create it
            xNode=malloc(sizeof(node));
            xNode->children=NULL;
            xNode->influenced=FALSE;
            xNode->num=x;
            
            addEltToList(&listAllNodes, xNode);
        }
        
        yNode->influenced=TRUE;
        addEltToList(&(xNode->children), yNode);
        
       
        
    }
    struct listNode *myList=listAllNodes;
    
    while(myList!=NULL){
        
        if(myList->elt->influenced==FALSE){
            int depth=searchDepth(myList->elt);
            if(depth>maxDepth)
                maxDepth=depth;
        }
        myList=myList->next;
    }
    
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n",maxDepth+1); // The number of people involved in the longest succession of influences

    return 0;
}
