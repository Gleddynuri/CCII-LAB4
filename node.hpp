
class node{
    int valor;
    node*next;
public:
    node();
    node(int);
    void setValor(int);
    int getValor();
    void setNext(node*);
    node* getNext();
    friend ostream& operator<<(ostream&, node &);
    ~node();
};

node::node(){
    valor=NULL;
    next=NULL;
}
node::node(int ele){
    valor=ele;
    next=NULL;
}
//Modifica
void node::setValor(int valor){
    this->valor=valor;
}
//Accede
int node::getValor(){
    return valor;
}
void node::setNext(node*next){
    this->next=next;
}
node* node::getNext(){
    return next;
}
ostream & operator << (ostream &out, node &nd){
    out <<"nodo: "<< nd.getValor();
    return out;
}
node::~node(){
    //cout<<"elim"<<endl;
}
