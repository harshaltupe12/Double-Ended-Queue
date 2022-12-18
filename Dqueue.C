#include<stdio.h>
#include<conio.h>
#define N 5
int deque[N];
int f = -1;
int r = -1;
int ch, ele;
void enque_front(int ele);
void enque_rear(int ele);
void deque_front();
void deque_rear();
void display();

int main(){

    printf("***** Menu *****\n");
    printf("1) Enque Front\n2) Enque Rear\n3) Deque Front\n4) Deque Rear\n5) Display\n6) Exit");

    while (ch!=6)
    {
        printf("\nEnter Oeration To Perform\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:{
            printf("Enter Element to ADD in Front side");
            scanf("%d", &ele);
            enque_front(ele);
            break;
        }
        case 2:{
            printf("Enter Element to ADD in Rear Side");
            scanf("%d", &ele);
            enque_rear(ele);
            break;
        }
        case 3:{
            deque_front();
            break;
        }
        case 4:{
            deque_rear();
            break;
        }
        case 5:{
            display();
            break;
        }
        case 6:{
            printf("Exit.....");
            break;
        }
        
        default:{
            printf("Please Enter Valid Choice\n");
            break;
        }
        }
    }
    
}

void enque_front(int ele){
    if ((r = N-1 && f==0)){
        printf("Deque Is Full\n");
    }
    else if (f==-1 && r==-1){
        f = 0;
        r = 0;
        deque[f] = ele;
    }
    else if(f==0){
        f=N-1;
        deque[f] = ele;
    }
    else{
        f--;
        deque[f] = ele;
    }
}

void enque_rear(int ele){
    if ((r=N-1 && f==0))
    {
        printf("Deque Is Full\n");
    }
    else if (r==-1 && f==-1){
        r=0;
        f=0;
        deque[r] = ele;
    }
    else if (r=N-1){
        r=0;
        deque[r] = ele;
    }
    else{
        r++;
        deque[r] = ele;
    } 
}

void deque_front(){
    if (f==-1 && r==-1)
    {
        printf("Deque id Empty\n");
    }
    else if (f==r){
        printf("Deleted item is %d \n", deque[f]);
        f=-1;
        r = -1;
    }
    else if (f == N-1){
        printf("Deleted item is %d \n", deque[f]);
        f=0;
    }
    else{
        printf("Deleted item is %d \n", deque[f]);
        f++;
    } 
}

void deque_rear(){
    if (f==-1 && r==-1)
    {
        printf("Deque is Empty\n");
    }
    else if (f==r){
        printf("Deleted item is %d \n", deque[r]);
        f=-1;
        r = -1;
    }
    else if (r==0)
    {
        printf("Deleted item is %d \n", deque[r]);
        r=N-1;
    }
    else{
        printf("Deleted item is %d \n", deque[r]);
        r--;
    }
}

void display(){
    int i = f;
    while (i!=r)
    {
        printf("%d \n", deque[i]);
        i = (i+1)%5;
    }
}