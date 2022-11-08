#include <iostream>

using namespace std;

template <typename T>
class Tree{
    struct node{
        T data;
        node* parent;
        node* left;
        node* right;
    };
    node* root;
    int tree_size;
public:
    void add(T data){
        root = ins(root, data);
    }
    node* ins(node* temp, T data){
        if(!temp){
            temp = new node;
            temp->data = data;
        } else if(temp->data <= data){
            temp->left = ins(temp->left, data);
            temp->left->parent = temp;
        } else if(temp->data > data){
            temp->right = ins(temp->right, data);
            temp->right->parent = temp;
        }
        return temp;
    }
    node* search_node(T data){
    }
    void delete_node(node* node_ptr){
    }
    void pre_order(){
    }
    void in_order(){
    }
    void clean_tree(){
    }
    int tree_height(){
    }
    string to_string(){

    }
};

int main()
{
    Tree<int>* t = new Tree<int>;
    t->add(15);
    t->add(10);
    t->add(20);
    t->add(25);
    t->add(8);
    t->add(12);

    return 0;
}
