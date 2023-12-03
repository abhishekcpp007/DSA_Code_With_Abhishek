#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
public:
    char data;
    vector<Node*> children;
    Node(char data) {
        this->data = data;
    }
};

void JustGreaterNode(Node* root, char x, Node*& ans) {
    if (root == NULL) {
        return;
    }
    if (root->data > x && (ans == NULL || root->data < ans->data)) {
        ans = root;
    }
    for (Node* child : root->children) {
        JustGreaterNode(child, x, ans);
    }
}

int main() {
    Node* root = new Node('20');

    root->children.push_back(new Node('8'));
    root->children.push_back(new Node('4'));
    root->children.push_back(new Node('12'));
    root->children[0]->children.push_back(new Node('10'));
    root->children[0]->children.push_back(new Node('14'));
    root->children[2]->children.push_back(new Node('22'));

    char x = '5';  // Change x to a character
    Node* ans = NULL;
    JustGreaterNode(root, x, ans);
    cout << "ANS ->";
    if (ans == NULL) cout << "NULL" << endl;
    else cout << ans->data << endl;
    return 0;
}
