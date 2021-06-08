#include <iostream>

using namespace std;

class node 
{
      node *lewy;
      int wartosc;
      node *prawy;
      
      public: 
              static node *korzen;
              
              node(int w);
              static void dodaj(int w, node *wezel);
              static void visit(node *n);
              static void preorder(node *n);
              static void inorder(node *n);
              static void postorder(node *n);
              friend void szukaj(int a, node *root);
              friend int min(node *root);
              friend int max(node *root);
};
void node::dodaj(int w, node* wezel)
{
     if(w<=(wezel->wartosc))//mniejsze
     {
         if((wezel->lewy) == NULL)
         {
              node *pom = new node(w);
              wezel->lewy = pom;
         }
         else
         {
             dodaj(w,wezel->lewy);
         }
     }
     else //wieksze
     {
          if((wezel->prawy) == NULL)
         {
              node *pom = new node(w);
              wezel->prawy = pom;
         }
         else
         {
             dodaj(w,wezel->prawy);
         }
     }
                                     
}
void node::visit(node *n)
{
     cout<<n->wartosc<<"\t";    
}
node::node(int a)
{
                wartosc=a; 
                lewy = NULL;
                prawy = NULL;               
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
     if ((a!=root->wartosc))
     {
        if((a<root->wartosc) && (root->lewy != NULL))
        {
                        cout<<root->wartosc<<" ";
                        szukaj(a,root->lewy);
        }
        if((a>root->wartosc) && (root->prawy != NULL))
        {
            
                        cout<<root->wartosc<<" ";
                        szukaj(a,root->prawy);
        }

     }
     else cout<<root->wartosc<<" - Znalezione ";
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
node* node::korzen;

int main()
{
    node::korzen = new node(11);
    node::dodaj(12,node::korzen);
    node::dodaj(10,node::korzen);
    node::dodaj(8,node::korzen);
    node::dodaj(7,node::korzen);
    node::dodaj(10,node::korzen);
    node::dodaj(7,node::korzen);
    node::dodaj(9,node::korzen);
    node::dodaj(5,node::korzen);
    cout<<"Preorder"<<endl;
    node::preorder(node::korzen);
    cout<<endl;
    cout<<"Inorder"<<endl;
    node::inorder(node::korzen);
    cout<<endl;
    cout<<"Postorder"<<endl;
    node::postorder(node::korzen);
    cout<<endl;
    cout<<"Maksymalny element w drzewie: "<<max(node::korzen);
    cout<<endl;
    cout<<"Minimalny element w drzewie: "<<min(node::korzen);
    cout<<endl;
    
    cout<<"Szukam elemntu: 4"<<endl;
    szukaj(4,node::korzen);
    cout<<endl;
    
    cout<<"Szukam elemntu: 9"<<endl;
    szukaj(9,node::korzen);
    cout<<endl;
    
    system("PAUSE");
    return 0;
}
