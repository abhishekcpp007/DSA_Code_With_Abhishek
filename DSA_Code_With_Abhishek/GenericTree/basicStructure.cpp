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

int main(){
    Node* root= new Node('A');
    root->children.push_back( new Node('b'));
    root->children.push_back( new Node('c'));

    cout<<root->data<<endl;
    for(Node* child : root->children){
        cout<<child->data;
    }
    return 0;
}