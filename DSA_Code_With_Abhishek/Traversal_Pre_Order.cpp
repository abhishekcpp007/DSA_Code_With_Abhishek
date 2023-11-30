#include<iostream>
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
void Pre_OrderTraversal(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<endl;
    for(Node* child: root->children){
        Pre_OrderTraversal(child);
    }
    return;
}

int main(){

Node* root = new Node ( 'A' ) ;

root->children.push_back(new Node('B'));

root->children.push_back(new Node('C'));

root->children.push_back(new Node('D')); root->children[0]->children.push_back(new Node('E'));

root->children [0] ->children.push_back(new Node('F'));

root->children [2]->children.push_back(new Node ('G' )) ;
Pre_OrderTraversal(root);

return 0;

}