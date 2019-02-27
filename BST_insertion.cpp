#include<iostream>
using namespace std;
struct Node
{
	int key;
	struct Node *left,*right;
};
void inorder(Node* root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
void preorder(Node *root)
{
	if(root)
	{
		cout<<root->key<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
Node* newnode(int key)
{
	Node* node = new Node;
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void insert(Node* &root,int key)
{
	if(!root)
	{
		root = newnode(key);
		return;
	}
	if(root->key > key)
	{
		insert(root->left,key);
	}
	else
	{
		insert(root->right,key);
	}
}
int main()
{
	Node *root = NULL;
	int num;
	cout<<"Enter Binary Tree Size : ";
	cin>>num;
	int arr[num];
	int i;
	cout<<"Enter Tree Elements : "<<"\n";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<num;i++)
	{
		insert(root,arr[i]);
	}
	inorder(root);
	cout<<"\n";
	preorder(root);
	return 0;
	
}
