#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
    char data;
    vector<Node*>children;
    Node(char data){
        this->data=data;
    }

};
void Level_Order_Traversal(Node* root){
    if(root==NULL){
        return;

    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())

    {  
        Node* curr =q.front();
    q.pop();
    cout<< curr->data<<" ";
    for(Node* child :curr->children){
        q.push(child);
    }
    cout<<endl;
        /* code */
    }
    
    

}

int main(){
    Node* root = new Node ( 'A' ) ;

root->children.push_back(new Node('B'));

root->children.push_back(new Node('C'));

root->children.push_back(new Node('D')); 
root->children[0]->children.push_back(new Node('E'));

root->children [0] ->children.push_back(new Node('F'));

root->children [2]->children.push_back(new Node ('G' )) ;

  Level_Order_Traversal(root);
    return 0;
}