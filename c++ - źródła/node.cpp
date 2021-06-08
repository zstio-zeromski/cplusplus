#include <iostream>
#include <cstdlib>

using namespace std;

class node 
{
      node *lewy;
      int wartosc;
      node *prawy;
      
      public: 
              node(node *lewy, int a, node *prawy);
              void visit(node *n);
              void preorder(node *n);
              void inorder(node *n);
              void postorder(node *n);
              friend void szukaj(int a, node *root);
              friend int min(node *root);
              friend int max(node *root);
};
void node::visit(node *n)
{
     cout<<n->wartosc<<"\n";    
}
node::node(node *lewy, int a,node *prawy)
{
                this->lewy=lewy;
                this->prawy=prawy;
                wartosc=a;                
}
//VLR
void node::preorder(node *n)
{
    if(n!=0)
    {
            visit(n);
            preorder(n->lewy);
            preorder(n->prawy);              
    } 
}
//LVR
void node::inorder(node *n)
{
     if(n!=0)
    {
            inorder(n->lewy);
            visit(n);
            inorder(n->prawy);        
    } 
}
//LRV
void node::postorder(node *n)
{
     if(n!=0)
    {
            postorder(n->lewy);
            postorder(n->prawy); 
            visit(n);       
    }    
}
void szukaj(int a, node *root)//root-korzen drzewa
{
     if (a!=root->wartosc)
     {
     if(a<root->wartosc)
     {
                        cout<<root->wartosc<<" ";
                        szukaj(a,root->lewy);
     }
     else
     {
                        cout<<root->wartosc<<" ";
                        szukaj(a,root->prawy);
     }

     }
     else cout<<root->wartosc<<" ";
}
int max(node *root)
{
    int max=root->wartosc;
    while(root->prawy!=NULL)
    {
                        //cout<<root->wartosc<<" ";
                        root=root->prawy;
     }
     return root->wartosc;
    
}
int min(node *root)
{
    int min=root->wartosc;
    while(root->lewy!=NULL)
    {
                        //cout<<root->wartosc<<" ";
                        root=root->lewy;
     }
     return root->wartosc;  
}
int main()
{
    node h(NULL, 8,NULL);
    node i(NULL, 9,NULL);
    node j(NULL, 10,NULL);
    node k(NULL, 11,NULL);
    node l(NULL, 12,NULL);
    node m(NULL, 13,NULL);
    node n(NULL, 14,NULL);
    node o(NULL, 15,NULL);
    node d(&h,7,&i);
    node e(&j,6,&k);
    node b(&d,3,&e);
    node f(&l,5,&m);
    node g(&n,4,&o);
    node c(&f,2,&g);
    node a(&b,1,&c);
    cout<<"PREORDER \n";
    a.preorder(&a);
    cout<<"\n";
    cout<<"INORDER \n";
    a.inorder(&a);
    cout<<"\n";
    cout<<"POSTORDER \n";
    a.postorder(&a);
    szukaj(4,&a);
    cout<<"\nMAX "<<max(&a);
    cout<<"\nMIN "<<min(&a);
    system("PAUSE");
    return 0;
}
