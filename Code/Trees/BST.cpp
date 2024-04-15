#include <iostream>
using namespace std ;

struct node {
    struct node * left ;
    struct node * right ;
    int data ;
};
struct node * root = NULL;

int data(){
    int data ;
    cout<<"Enter node value : ";
    cin>>data;
    return data ;
}

struct node * node(int data){
    struct node * newNode = new struct node ;
    newNode ->data = data ;
    newNode ->left = NULL ;
    newNode-> right = NULL ;
    return newNode ;
}

struct node * insert(struct node * root , int data){
    if(root == NULL){
        root = node(data);
    }

    else if(data <= root->data){
        root->left = insert(root->left,data);
    }
    else {
        root->right = insert(root->right,data);
    }

    return root ;


}
int main(){
    cout<<"Binary Search Tree"<<endl ;
    int a = 1;
    while(a==1){
        int value = data();
        insert(root,value);
        cout<<"Enter more data (0/1): "<<endl;
        cin>>a;
    }

    return 0 ;
    

}