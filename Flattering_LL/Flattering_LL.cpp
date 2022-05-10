  Node* mergenodes(Node* A, Node* B){
        
        Node* temp=new Node(0);
        Node* res=temp;
        
        while(A!=NULL && B!=NULL){
            if(A->data < B->data){
                temp->bottom=A;
                A=A->bottom;
                temp=temp->bottom;
            }
            else{
                temp->bottom=B;
                B=B->bottom;
                temp=temp->bottom;
            }
        }
        
        if(A) temp->bottom=A;
        else temp->bottom=B;
        
        return res->bottom;
    }
    
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL) return root;
   root->next= flatten(root->next);
   
    root=mergenodes(root,root->next);
    return root;
}