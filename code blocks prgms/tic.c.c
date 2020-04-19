#include <stdio.h>
#include <stdlib.h>

struct node{
    int mark;
    struct node* next_node;
};

int a[9] = {0},ran;

struct node* initialize_nodes(){
    int i;
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* prev = (struct node*)malloc(sizeof(struct node));

    head->mark = 0;
    head->next_node = NULL;
    prev = head;

    for(i=1;i<9;i++){
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->mark = 0;
        n->next_node = NULL;
        prev->next_node = n;
        prev = prev->next_node;
    }

    return head;
}

void printCell(struct node* h){
    int i;
    for(i=0;i<9;i++){
            if(i%3==0 && i>0){
                printf("\n");
                printf("--------------------------------------------------\n");
                printf("\n");
            }
        if(h->mark==1){
            printf("|\tX\t|");
        }
        else if(h->mark==2){
            printf("|\tO\t|");
        }
        else{
            printf("|\t-\t|");
        }
        h = h->next_node;
    }
}

void userinp(struct node *h){

    int u,i,j;
    printf("\n\nenter user input\n");
    scanf("%d",&u);
    while(u<1 || u>9){
        printf("\nSpace unavailable\n");
        printf("\nEnter ur option\n");
        scanf("%d",&u);
    }
    while(a[u-1]!=0){
        printf("\nSpace unavailable\n");
        printf("\nEnter your option\n");
        scanf("%d",&u);
    }
    for(i=1;i<u;i++){
        h = h->next_node;
    }
    h->mark = 1;
    a[u-1] = 1;

}

void compinp(struct node* h){

    int i,c,j;
    c = ((rand()%100)%ran)%9;
    while(a[c-1]!=0){
        c = (rand()%100)%9;
    }
    for(i=1;i<c;i++){
        h = h->next_node;
    }
    h->mark = 2;
    a[c-1] = 2;

}

int check(){

if(a[0]==a[1]&&a[1]==a[2]){
    if(a[0]==1){
        return 0;
    }
    else if(a[0]==2){
        return 1;
    }
}

else if(a[3]==a[4]&&a[4]==a[5]){
    if(a[3]==1){
        return 0;
    }
    else if(a[3]==2){
        return 1;
    }
}

else if(a[6]==a[7]&&a[7]==a[8]){
    if(a[6]==1){
        return 0;
    }
    else if(a[6]==2){
        return 1;
    }
}

else if(a[0]==a[4]&&a[4]==a[8]){
    if(a[0]==1){
        return 0;
    }
    else if(a[0]==2){
        return 1;
    }
}

else if(a[2]==a[4]&&a[4]==a[6]){
    if(a[2]==1){
        return 0;
    }
    else if(a[2]==2){
        return 1;
    }
}

else if(a[0]==a[3]&&a[3]==a[6]){
    if(a[0]==1){
        return 0;
    }
    else if(a[0]==2){
        return 1;
    }
}

else if(a[1]==a[4]&&a[4]==a[7]){
    if(a[1]==1){
        return 0;
    }
    else if(a[1]==2){
        return 1;
    }
}

else if(a[2]==a[5]&&a[5]==a[8]){
    if(a[2]==1){
        return 0;
    }
    else if(a[2]==2){
        return 1;
    }
}
return 3;
}

int main()
{
    int user,comp,ch;
    struct node *n = initialize_nodes();
    printf("Enter a random number to start the game\n");
    scanf("%d",&ran);
    printCell(n);
    ch = 3;
    while(ch==3){
        userinp(n);
        ch = check();

        if(ch!=3){
            break;
        }

        compinp(n);
        printCell(n);
        ch = check();
    }

    if(ch == 0){
    printf("\nThe winner is THE USER");
    }
    else{
        printf("\nThe winner is the computer");
    }

    return 1;
}
