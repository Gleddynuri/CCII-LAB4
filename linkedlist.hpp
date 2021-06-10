

class linkedlist{
private:
    node*head;
    int size;
public:
    linkedlist();
    ~linkedlist();
    int getSize();
    node* getHead();
    void insertar(int);//Inserta al inicio
    void inserorden(int);//Inserta en orden
    void remover(int);//elimina elemento
    //void print();
    friend ostream& operator<<(ostream& , linkedlist &);
};

linkedlist::linkedlist(){
    size=0;
    head=NULL;
}
void linkedlist::insertar(int ele){
    node*nuevo=new node(ele);
    node*aux=head;
    if(!head){
        head=nuevo;
    }
    else{
        nuevo->setNext(head);
        head=nuevo;
        while(aux){
            aux=aux->getNext();
        }
    }
    size++;
}

void linkedlist::inserorden(int ele){
    node*nuevo=new node(ele);
    node*aux=head;
    if(!head){
        head=nuevo;
    }
    else{
        if(head->getValor()>ele){
            nuevo->setNext(head);
            head=nuevo;
        }
        else{
            while((aux->getNext()!= NULL)&&(aux->getNext()->getValor()<ele)){
                aux=aux->getNext();
            }
            nuevo->setNext(aux->getNext());
            aux->setNext(nuevo);
        }
    }
    size++;
}

void linkedlist::remover(int ele){
    node*aux=head;
    node*aux1;
    int contador=0;

    for(int i=0;i<size;i++){
        if(aux->getValor()==ele){
            //eliminar
            break;
        }else{
            aux1=aux;
            aux=aux->getNext();
            contador++;
        }
    }
    if(contador==size){
        cout<<"No existe"<<endl;
    }else{
        aux1->setNext(aux->getNext());
        delete aux;
        size--;
    }



}
/*void linkedlist::print(){
    node*aux=head;
    if(!head){
        cout<<"No hay elementos en la lista"<<endl;
    }
    else{
        while(aux){
            aux->print();
            if(!aux->getNext()){
                cout<<"NULL";
            }
            aux=aux->getNext();
        }
    }
    cout<<endl;
}*/

int linkedlist::getSize(){
    return size;
}
node* linkedlist::getHead(){
    return head;
}
ostream & operator << (ostream& out, linkedlist &lista){
    node*aux=lista.getHead();
    for(int i=0;i<lista.getSize()-1;i++){
        out <<*aux<<" ";
        aux=aux->getNext();
    }
    out <<*aux<<" ";
    return out;
}
linkedlist::~linkedlist(){
    node* aux;
    for(int i=0;i<size;i++){
        aux=head;
        head=head->getNext();
        delete aux;
    }
}
