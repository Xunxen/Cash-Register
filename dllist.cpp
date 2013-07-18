    dllist(){
        
        front=NULL;
        back=NULL;
        curr=NULL;
        size=0;
     }

    T nextNode() {
        
        if(curr->next!=NULL) curr=curr->next;
        else throw OutOfBoundsError("Next node is null.");
        return curr->data;
     }

    T prevNode() {
        
        if(curr->prev!=NULL) curr=curr->prev;
        else throw OutOfBoundsError("Previous node is null.");
        return curr->data;
        
    }

    T firstNode() {
        
        curr=front;
        if(curr!=NULL) return curr->data;
        else throw UndefinedValue("First node is null.");
        
    }

    T lastNode() {
        
        curr=back;
        if(curr!=NULL) return curr->data;
        else throw UndefinedValue("Last node is null.");
        
    }

    void insertAfter(T data) {
        
        if(curr==NULL) throw UndefinedValue("Current node is null.");
        size++;
        node* temp=new node();
        temp->data=data;
        temp->next=curr->next;
        temp->prev=curr;
        if(curr->next!=NULL) curr->next->prev=temp;
        curr->next=temp;
        
        
    }

    void insertBefore(T data){
        
        if(curr==NULL) throw UndefinedValue("Current node is null.");
        size++;
        node* temp=new node();
        temp->data=data;
        temp->prev=curr->prev;
        temp->next=curr;
        if(curr->prev!=NULL) curr->prev->next=temp;
        curr->next=temp;
        
    }

    void push(T data){
        
        size++;
        node* temp=new node();
        temp->next=front;
        temp->prev=NULL;
        temp->data=data;
        if(front==NULL){
                
            front=temp;
            curr=front;
            back=front;
                
        }
        else{
                
            front->prev=temp;
            front=temp;
                
        }
        
        
    }

    void pushBack(T data){
        
        size++;
        node* temp=new node();
        temp->prev=back;
        temp->next=NULL;
        temp->data=data;
        if(back==NULL){
                
            back=temp;
            curr=back;
            front=back;
                
        }
        else{
                
            back->next=temp;
            back=temp;
                
        }
        back=temp;
        
    }

    T pop(){
        
        if(size>0)size--;
        else throw OutOfBoundsError("No nodes to pop.");
        T data=front->data;
        front=front->next;
        if(front!=NULL) front->prev=NULL;
        return data;
        
    }

    T popBack(){
        
        if(size>0)size--;
        else throw OutOfBoundsError("No nodes to pop.");
        T data=back->data;
        back=back->prev;
        if(back!=NULL) back->next=NULL;
        return data;
        
    }

    T remove(){
        
        if(size>0)size--;
        else throw OutOfBoundsError("No nodes to remove.");
        if(curr==front){
                
            curr=curr->next;
            return pop();
                
        }
        else if(curr==back){
                
            curr=curr->prev;
            return popBack();
                
        }
        else{
                
            T data=curr->data;
            curr=curr->prev;
            curr->next->next->prev=curr;
            curr->next=curr->next->next;
            return data;
                
        }
        
    }

    T getData() {
        
        if(curr==NULL) throw UndefinedValue("Current node is null.");
        return curr->data;
        
    }

    void setData(T data) {
        
        if(curr!=NULL) curr->data=data;
        else throw UndefinedValue("Current node is null.");
        
    }

    int getSize(){
        
        return size;
        
    }

    bool isEnd(){
        
        return (curr==back);
        
    }

    bool isStart(){
        
        return (curr==front);
        
    }
