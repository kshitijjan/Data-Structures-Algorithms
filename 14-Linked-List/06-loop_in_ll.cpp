#include<iostream>
#include<map>
using namespace std;

class linkedList{

    public:
    int data;
    linkedList* next;

    linkedList(int data){
        this->data = data;
    }
    
};
void insert(linkedList* &head, int data){
    linkedList* temp = new linkedList(data);
    temp->next = head;
    head = temp;
}
void print(linkedList* &head){
    linkedList* printing = head;
    while(printing!= NULL){
        cout<<printing->data<<" ";
        printing = printing->next;
    }
    cout<<endl;
}
bool loopInLL(linkedList* & head){
    if(head == NULL){
        return false;
    }
    map<linkedList*, bool> visited;
    linkedList* temp = head;

    while(temp != NULL){
        
        //Checking Loop is present or Not
        if(visited[temp] == true){
            cout<<"Present on element "<<temp->data<<endl;
            return true;
        }
        //Assigning true to every node in map to checkmark that this particular node has already been visited
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
linkedList* floydLoopDetection(linkedList* &head){

    if(head == NULL){
        return NULL;
    }
    linkedList* slow = head;
    linkedList* fast = head;

    while(slow!= NULL && fast!= NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            cout<<"Loop present at "<<slow->data<<endl;
            return slow;
        } 
    }
    return NULL;
}
linkedList* getStartingNode(linkedList* &head){

    if(head == NULL){
        return NULL;
    }
    
    linkedList* intersection = floydLoopDetection(head);
    linkedList* slow = head;

    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
linkedList* removeLoop(linkedList* &head){
    if(head == NULL){
        return NULL;
    }
    linkedList* loopStartingNode = getStartingNode(head);
    linkedList* temp = loopStartingNode;

    while(temp->next != loopStartingNode){
        temp = temp->next;
    }
    temp->next = NULL;
} 

int main(){

linkedList* node1 = new linkedList(10);
linkedList* head = node1;
linkedList* tail = node1;
insert(head, 20);
insert(head, 30);
insert(head, 40);
insert(head, 50);

print(head);

//Creating loop in LinkedList   
tail->next = head->next;
if(loopInLL(head)){
    cout<<"Loop detected"<<endl;
}
else{
    cout<<"Loop not found"<<endl;
}
if(floydLoopDetection(head)){
    cout<<"Loop detected"<<endl;
}
else{
    cout<<"Loop not found"<<endl;
}
linkedList* loop = getStartingNode(head);
cout<<"Loop starts at "<<loop->data<<endl;

removeLoop(head);
print(head);

    return 0;
}