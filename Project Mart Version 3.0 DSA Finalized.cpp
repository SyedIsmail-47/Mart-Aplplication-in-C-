#include<iostream>
#include <string>
#include<fstream>
using namespace std;

class Node {
public:
    string value;
    Node *next;
    Node *previous;
    Node(string v) {
        value = v;
        next = NULL;
        previous = NULL;
    }
};
class singlylinkedlist {
public:
    Node *head;
    //Node *quantityhead;
    singlylinkedlist() {
        head = NULL;
        //quantityhead=NULL;
    }
	void add(string v){
		Node *new_Node= new Node(v);
		if(head==NULL){
			head=new_Node;
		}
		else{
		new_Node->next=head;
		head->previous=new_Node;
		head=new_Node;
	}
}
    
    	void display()
	{
 		if (head == NULL)
 		{
 			return;
 		}
 		else
 		{
 			Node *current = head;
 			while (current != NULL)
 			{
 				cout << current->value << " ";
 				current = current->next;
 			}
 			cout << endl;
 		}
 	}
 	
 	void deleteat(int index){
	int i=1;
	Node *current=head;
	if(index==1){
 		head=head->next;
		if (head != NULL)
	{
		head->previous = NULL;
	}
	delete current;
	return;
	}
	
		while(current!=NULL){
 		if(i==index){
 			if (current->next != NULL) {
 			current->next->previous=current->previous;}
 			current->previous->next=current->next;
			 
			 delete current;
 			return;
		 }
 		current=current->next;
		 i++;
	 }
	 if(current==NULL){
	 	cout<<"Wrong Input"<<endl;
	 }
}
};
class Nodes {
public:
    int num;
    Nodes *next;
    Nodes *previous;
    Nodes(int n) {
        num = n;
        next = NULL;
        previous = NULL;
    }
};

class Nodess {
public:
    string data;
    string last_name;
    string city;
    string number;
    Nodess* next;

    Nodess(string data, string last_name, string city, string number) {
        this->data = data;
        this->city = city;
        this->last_name = last_name;
        this->number = number;
        this->next = NULL;
    }
};

class QueueLinkedlist {
public:
    Nodess* front;
    Nodess* rear;
    int size;

    QueueLinkedlist() {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void queue_display() {
        if (rear == NULL) {
            cout << "LinkedList is Empty" << endl;
        } else {
            Nodess* current = front;
            while (current != NULL) {
                cout << "Name: " << current->data << " ";
                cout << "Last Name: " << current->last_name << " ";
                cout << "City: " << current->city << " ";
                cout << "Number: " << current->number << " ";
                current = current->next;
            }
            cout << endl;
        }
    }

    void Enqueue(string data, string last_name, string city, string number) {
        Nodess* newNode = new Nodess(data, last_name, city, number);
        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    void Dequeue() {
        if (front == NULL) {
            cout << "LinkedList is Empty" << endl;
        } else {
            Nodess* temp = front;
            front = front->next;
            delete temp;
            queue_display();
        }
    }
};

class linkedlist {
public:
	Nodes *pricehead;
    Nodes *quantityhead;
    linkedlist() {
        quantityhead = NULL;
        pricehead = NULL;
    }

	void quantitylist(int n){
		Nodes *new_Nodes= new Nodes(n);
		if(quantityhead==NULL){
			quantityhead=new_Nodes;
		}
		else{
		new_Nodes->next=quantityhead;
		quantityhead->previous=new_Nodes;
		quantityhead=new_Nodes;
		}
	}
	
		void pricelist(int n){
		Nodes *new_Nodes= new Nodes(n);
		if(pricehead==NULL){
			pricehead=new_Nodes;
		}
		else{
		new_Nodes->next=pricehead;
		pricehead->previous=new_Nodes;
		pricehead=new_Nodes;
		}
	}
	
	void quantitydisplay()
	{
 		if (quantityhead == NULL)
 		{
 			return;
 		}
 		else
 		{
 			Nodes *current = quantityhead;
 			while (current != NULL)
 			{
 				cout << current->num << "     ";
 				current = current->next;
 			}
 			cout << endl;
 		}
 	}
 	
 	void pricedisplay()
	{
 		if (pricehead == NULL)
 		{
 			return;
 		}
 		else
 		{
 			Nodes *current = pricehead;
 			while (current != NULL)
 			{
 				cout << current->num << "     ";
 				current = current->next;
 			}
 			cout << endl;
 		}
 	}
 	
 	void quantitydelete(int index){
	int i=1;
	Nodes *current=quantityhead;
	if(index==1){
 		quantityhead=quantityhead->next;
		if (quantityhead != NULL)
	{
		quantityhead->previous = NULL;
	}
	delete current;
	return;
	}
	
		while(current!=NULL){
 		if(i==index){
 			if (current->next != NULL) {
 			current->next->previous=current->previous;}
 			current->previous->next=current->next;
			 
			 delete current;
 			return;
		 }
 		current=current->next;
		 i++;
	 }
	 if(current==NULL){
	 	cout<<"Wrong Input"<<endl;
	 }
}

	void pricedelete(int index){
		int i=1;
		Nodes *current=pricehead;
		if(index==1){
 			pricehead=pricehead->next;
			if (pricehead != NULL)
		{
			pricehead->previous = NULL;
		}
		delete current;
		return;
		}
	
		while(current!=NULL){
 		if(i==index){
 			if (current->next != NULL) {
 			current->next->previous=current->previous;}
 			current->previous->next=current->next;
			 
			 delete current;
 			return;
		}
 		current=current->next;
		 i++;
		}
	 		if(current==NULL){
	 	cout<<"Wrong Input"<<endl;
		}
	}
	
	void totalbill(){
		int sum=0;
		if(pricehead == NULL){
			return;
		}
		else{
			Nodes *current = pricehead;
			while(current != NULL){
				sum=sum+current->num;
				current=current->next;
			}
			cout<<sum;
		}
	}
};
class groceries {
	protected:
    string groceries[13] = {"wheat", "sugar", "salt", "shampoo", "soap", "eggs", "rice", "oil", "Teapacks", "Bread", "Rusks", "Ketchup", "Tissue"};
    int price[13] = {750, 120, 60, 600, 130, 23, 160, 520, 500, 100, 210, 260, 110};
    //int final_list[13];
    int count=13,size=13;

public:
	void groceries_update(){
		cout<<"                      if you want to add product Select 1"<<endl;
		cout<<"                      if you want to Delete product Select 1"<<endl;
		string choice;
		cin>>choice;
		if(choice=="1"){
			display();
			add_product();
			system("cls");
			display();
			return;
		}
		else if(choice=="2"){
			display();
			delete_product();
			system("cls");
			display();
			return;
		}
		else 
		{
			cout<<"Wrong or Invalid input ";
			groceries_update();
			return;
		}
	}
	void add_product(){ cout<<"from 1 to 10 where you want to add product :"<<endl;
						int count;
						cin>>count;
	if(count>0 && count<=10){
	
	string name;int newprice;
		if(count<size){
		cout<<"   Enter the product name to add :   ";cin>>name;//yaha validation lagani
		cout<<"   Enter price to of product     :   ";cin>>newprice;//yaha validation lagani
		groceries[count-1]=name;//the product will update array product name
		price[count-1]=newprice;//the product will update array index price 
		}
		else
		cout<<"Catalog is full cannot add more items ";
	}
	else
	{
		system("cls");
		cout<<"Wrong Input Try Again";
		add_product();
	}
}
	void delete_product(){string name;int newprice,index;
	cout<<" enter the index to delete item ";cin>>index;//validation lagni
		
		if(count==0){
			cout<<"no data to delete";
		}
		else if(index<=size){
		 groceries[index]="No data";//product is  replaced by text no item and price is replaced by zero
		 price[index]=0;
		}
		else{
			cout<<"invalid input.";
			return;
		}
	}
	void display(){
		//cout<<" the item list updated";code to display list 
		for(int i=0;i<size;i++){
			cout<<"item is "<<groceries[i]<<"at price :"<<price[i]<<endl;
		}
	}
    int total = 0;
    int total1 = 0;
    singlylinkedlist cart;
	linkedlist quantitylist;
	linkedlist pricelist; 
    bool isValidInteger(const string& input, int& number) {
        try {
            number = stoi(input);
            return (number >= 0 && number <= 13);
        } catch (...) {
            return false;
        }
    }
    int quantity(int a) {
        int num;
        string j;
        cout << "\nSelect Quantity Of Goods \n";
        cin >> j;
        if (isValidInteger(j, num)) {
            cout << "-----------------------";
        } else {
            system("cls");
            cout << "invalid input";
            quantity(a);
        }
        int total = price[a] * num;
        cout << "You Selected :" << groceries[a] << " Price = " << price[a] << endl;
        cart.add(groceries[a]); // Add product to the shopping cart linked list
        cout << " Quantity " << num << endl;
        quantitylist.quantitylist(num);
        cout << " Total Price = " << total << endl;
        pricelist.pricelist(total);
        //price.add(total); previous code

        // File Handling For items
        fstream new_file;
        new_file.open("new_file", ios::app);
        new_file << "Items: " << groceries[a] << "     Quantity: " << num << endl;
        new_file.close();

        total1 = total1 + total;
        loop:
        cout << "\n\n              Select (2) For Total Price : \n";
        lop:
        cout << "                  Select (1) To Go Back To Buy Others :\n";
        cout << "                  Select (3) for main menu : ";
        string select;
        cin >> select;

        if (select == "1") {
            system("cls");
            getgroceries();
        } else if (select == "2") {
            system("cls");
            cout << "Total Price : ";
            cout << total1;
            goto lop;
        } else if (select == "3") {
            system("cls");
        } else {
            system("cls");
            cout << "Wrong Input ";
            goto loop;
        }
    }

    int getgroceries() {
        string i;
        int a;
        // because int me validation problem arhi
        cout << "   \n        Select Goods\n";
for(int i=0;i<count;i++){
	cout<<i<<")"<<" For "<<groceries[i]<<"  at price: "<<price[i]<<endl;
}
    cout<<count<<") for Exit";
        /*cout << "   \n        Select Goods\n";
        cout << "  (0) For Wheat\n";
        cout << "  (1) For Sugar\n";
        cout << "  (2) For Salt\n";
        cout << "  (3) For Shampoo\n";
        cout << "  (4) For Soap\n";
        cout << "  (5) For Eggs\n";
        cout << "  (6) For Rice\n";
        cout << "  (7) For Oil\n";
        cout << "  (8) For Tea Packs\n";
        cout << "  (9) For Bread\n";
        cout << "  (10) For Rusk\n";
        cout << "  (11) For Ketchup\n";
        cout << "  (12) For Tissue\n";
        cout << "  (13) For Exit\n";*/
        cin >> i;

        if (isValidInteger(i, a)) {
            cout << "................";
        } else {
            system("cls");
            cout << "Wrong input!" << endl;
            getgroceries();
        }

        switch (a) {
            case 0:
                quantity(a);
                break;
            case 1:
                quantity(a);
                break;
            case 2:
                quantity(a);
                break;
            case 3:
                quantity(a);
                break;
            case 4:
                quantity(a);
                break;
            case 5:
                quantity(a);
                break;
            case 6:
                quantity(a);
                break;
            case 7:
                quantity(a);
                break;
            case 8:
                quantity(a);
                break;
            case 9:
                quantity(a);
                break;
            case 10:
                quantity(a);
                break;
            case 11:
                quantity(a);
                break;
            case 12:
                quantity(a);
                break;
            case 13:
                system("cls");
                break;
            default:
                system("cls");
                cout << "WRONG INPUT ";
                getgroceries();
        }
    }
};
class fruits:virtual public groceries{
	protected:
    string fruits[11] = {"mango", "apple", "strawberry", "watermelon", "Banana", "Peach", "Orange", "Grapes", "Pineapple", "Berries", "Kiwi"};
    int price[11] = {200, 250, 230, 50,110,300,220,150,120,100,80};
    int count=11;
public: 
	void fruits_update(){
		cout<<"                      if you want to add product Select 1"<<endl;
		cout<<"                      if you want to Delete product Select 1"<<endl;
		string choice;
		cin>>choice;
		if(choice=="1"){
			display();
			add_product();
			display();
			return;
		}
		else if(choice=="2"){
			display();
			delete_product();
			display();
			return;
		}
		else 
		{
			cout<<"Wrong or Invalid input ";
			fruits_update();
			return;
		}
	}
	void add_product(){ cout<<"from 1 to 10 where you want to add product :"<<endl;
						int count;
						cin>>count;
	if(count>0 && count<=10){
	
	string name;int newprice;
		if(count<size){
		cout<<"   Enter the product name to add :   ";cin>>name;//yaha validation lagani
		cout<<"   Enter price to of product     :   ";cin>>newprice;//yaha validation lagani
		fruits[count-1]=name;//the product will update array product name
		price[count-1]=newprice;//the product will update array index price 
		}
		else
		cout<<"Catalog is full cannot add more items ";
	}
	else
	{
		system("cls");
		cout<<"Wrong Input Try Again";
		add_product();
	}
}
	void delete_product(){string name;int newprice,index;
	cout<<" enter the index to delete item ";cin>>index;//validation lagni
		
		if(count==0){
			cout<<"no data to delete";
		}
		else if(index<=size){
		 fruits[index]="No data";//product is  replaced by text no item and price is replaced by zero
		 price[index]=0;
		}
		else{
			cout<<"invalid input.";
			return;
		}
	}
	void display(){
		//cout<<" the item list updated";code to display list 
		for(int i=0;i<size;i++){
			cout<<"item is "<<fruits[i]<<"at price :"<<price[i]<<endl;
		}
	}
	//singlylinkedlist cart;
	int quantity(int a) {
        int num;
        string j;
        cout<< "\nSelect Quantity Of Goods \n";
        cin >> j;
        if (isValidInteger(j,num)){cout<<"     -----------------------\n";}
         else{system("cls");
		 cout<<"invalid input";
		 quantity(a);}
      int  total = price[a] * num;
        cout << "You Selected :" << fruits[a]<<" Price = "<<price[a]<<endl;
		cart.add(fruits[a]); 
		cout<< " Quantity " << num<<endl;
		quantitylist.quantitylist(num);
		cout << " Total Price = " << total<<endl;
		pricelist.pricelist(total);
		
		//File Handling For items
		fstream new_file;
		new_file.open("new_file" ,ios::app);

			new_file<<"Items: "<<fruits[a]<<"     Quantity: "<<num<<endl;
			new_file.close();
			
//        	cout<<"\n the total is :"<<total;
        	total1=total1+total;
        //	system("cls");
	 loop:
		cout<<"\n\n              Select (2) For Total Price : \n";
		lop:
		cout<<"                  Select (1) To Go Back To Buy Others :\n";
		cout<<"                  Select (3) for main menu : ";
		string select;	
		cin>>select;
		
		if(select=="1"){
        		system("cls");
        		getfruits();
        	}
        
        else if(select=="2"){ 
        		system("cls");
        		cout<<"Total Price : ";
        		cout<<total1;
        		goto lop;
        		}
        else if(select=="3"){
        	system("cls");
        
		}
		else
		{
			system("cls");
		cout<<"Wrong Input ";
		goto loop;
		}
	}//total1 = total1 + total;     //cout << "\n the total is :" << total1;

    
    int getfruits() {
        string i;
		int a;
		cout << "   \n        Select Fruits\n";
for(int i=0;i<count;i++){
	cout<<i<<")"<<" For "<<fruits[i]<<"  at price: "<<price[i]<<endl;
}
    cout<<count<<") for Exit"<<endl;
        /*cout << "   \n        Select Fruits\n";
        cout << "  (0) For Mango\n";
        cout << "  (1) For Apple\n";
        cout << "  (2) For Strawberry\n";
        cout << "  (3) For Watermelon\n";
        cout << "  (4) For Banana\n";
        cout << "  (5) For Peach\n";
        cout << "  (6) For Orange\n";
        cout << "  (7) For Grapes\n";
        cout << "  (8) For Pineapple\n";
        cout << "  (9) For Berries\n";
        cout << "  (10) For Kiwi\n";
        cout << "  (11) For Exit\n";*/
        cin >> i;
     if (isValidInteger(i,a)) {
        cout<<"................";
    } else {system("cls");
    	cout << "Wrong input!" << endl;
    	getfruits();
    }
     
            switch (a) {
                case 0:
                    quantity(a);
            
                    break;
                case 1:
                    quantity(a);
                    break;
                case 2:
                    quantity(a);
                    break;
                case 3:
                    quantity(a);
                    break;
                case 4:
                    quantity(a);
                    break;
                case 5:
                    quantity(a);
                    break;
                case 6:
                    quantity(a);
                    break;
                case 7:
                    quantity(a);
                    break;
                case 8:
                    quantity(a);
                    break;
                case 9:
                    quantity(a);
                    break;
                case 10:
                    quantity(a);
                    break;
                case 11:
                	system("cls");
                	break;
                default:
                	system("cls");
                	cout<<"WRONG INPUT ";
                	getfruits();
        }
		}
    
    void end(void) {
        
        cout << "\nTotal Price : " << total1;
        cout << "\nTHANKS FOR VISITING...\n ";
    }
    bool isValidInteger(const string& input, int& number) {
 try {
        number = stoi(input);
        return (number >= 0 && number <= 15);
    } catch (...) {
        return false;
    }
}
};
class vegetables:virtual public groceries{
   protected:
   string vegetables[10] = {"onion", "tomato", "potato", "garlic", "Carrot", "Lemon", "Cauliflower", "Cucumbers", "Bell Peppers", "Spinach"};
    int price[10] = {220, 30, 300, 550,200,60,70,80,90,100};
    int count=10,size=10;
public:
    void vegetables_update(){
		cout<<"                      if you want to add product Select 1"<<endl;
		cout<<"                      if you want to Delete product Select 1"<<endl;
		string choice;
		cin>>choice;
		if(choice=="1"){
			display();
			add_product();
			display();
			return;
		}
		else if(choice=="2"){
			display();
			delete_product();
			display();
			return;
		}
		else 
		{
			cout<<"Wrong or Invalid input ";
			vegetables_update();
			return;
		}
	}
	void add_product(){ cout<<"from 1 to 10 where you want to add product :"<<endl;
						int count;
						cin>>count;
	if(count>0 && count<=10){
	
	string name;int newprice;
		if(count<size){
		cout<<"   Enter the product name to add :   ";cin>>name;//yaha validation lagani
		cout<<"   Enter price to of product     :   ";cin>>newprice;//yaha validation lagani
		vegetables[count-1]=name;//the product will update array product name
		price[count-1]=newprice;//the product will update array index price 
		}
		else
		cout<<"Catalog is full cannot add more items ";
	}
	else
	{
		system("cls");
		cout<<"Wrong Input Try Again";
		add_product();
	}
}
	void delete_product(){string name;int newprice,index;
	cout<<" enter the index to delete item ";cin>>index;//validation lagni
		
		if(count==0){
			cout<<"no data to delete";
		}
		else if(index<=size){
		 vegetables[index]="No data";//product is  replaced by text no item and price is replaced by zero
		 price[index]=0;
		}
		else{
			cout<<"invalid input.";
			return;
		}
	}
	void display(){
		//cout<<" the item list updated";code to display list 
		for(int i=0;i<size;i++){
			cout<<"item is "<<vegetables[i]<<"at price :"<<price[i]<<endl;
		}
	}
    
    int quantity(int a) {
        int num;
        string j;
        cout<< "\nSelect Quantity Of Goods \n";
        cin >> j;
        if (isValidInteger(j,num)){cout<<"-----------------------";}
         else{system("cls");
		 cout<<"invalid input";
		 quantity(a);}
      int  total = price[a] * num;
        cout << "You Selected :" << vegetables[a]<<" Price = "<<price[a]<<endl;
		cart.add(vegetables[a]); 
		cout<< " Quantity " << num<<endl;
		quantitylist.quantitylist(num);
		cout << " Total Price = " << total<<endl;
		pricelist.pricelist(total);
//        	cout<<"\n the total is :"<<total;
		//File Handling For items
			fstream new_file;
			new_file.open("new_file" ,ios::app);

			new_file<<"Items: "<<vegetables[a]<<"     Quantity: "<<num<<endl;
			new_file.close();

        	total1=total1+total;
        //	system("cls");
		 loop:
		cout<<"\n\n              Select (2) For Total Price : \n";
		lop:
		cout<<"                  Select (1) To Go Back To Buy Others :\n";
		cout<<"                  Select (3) for main menu : ";
		string select;	
		cin>>select;
		
		if(select=="1"){
        		system("cls");
        		getvegetables();
        	}
        
        else if(select=="2"){ 
        		system("cls");
        		cout<<"Total Price : ";
        		cout<<total1;
        		goto lop;
        		}
        else if(select=="3"){
        	system("cls");
        
		}
		else
		{
			system("cls");
		cout<<"Wrong Input ";
		goto loop;
		}
	}//total1 = total1 + total;
        //cout << "\n the total is :" << total1;
    
    
    int getvegetables(){
        int a;
     string i;
     
        cout << "   \n        Select Vegetables\n";
for(int i=0;i<count;i++){//display the products in catogery
	cout<<i<<")"<<" For "<<vegetables[i]<<"  at price: "<<price[i]<<endl;
}
    cout<<count<<") for Exit"<<endl;
	cin >> i;
    if (isValidInteger(i,a)) {
        cout<<"................";
    } else {system("cls");
    	cout << "Wrong input!" << endl;
    	getvegetables();
    }
     
            switch (a) {
                case 0:
                    quantity(a);
            
                    break;
                case 1:
                    quantity(a);
                    break;
                case 2:
                    quantity(a);
                    break;
                case 3:
                    quantity(a);
                    break;
                case 4:
                    quantity(a);
                    break;
                case 5:
                    quantity(a);
                    break;
                case 6:
                    quantity(a);
                    break;
                case 7:
                    quantity(a);
                    break;
                case 8:
                    quantity(a);
                    break;
                case 9:
                    quantity(a);
                    break;    
                case 10:
                	break;;
                	break;
                default:
                	system("cls");
                	cout<<"WRONG INPUT ";
            		getvegetables();
			}
          
        
    }
    
    void end(void) {
        
        cout << "\nTotal Price : " << total1;
        cout << "\nTHANKS FOR VISITING...\n ";
    }

};
class clothes:virtual public groceries{
    protected:
	string clothes[10] = {"t-shirts", "jeans", "dresses", "shoes", "jackets", "sweaters" , "pants", "skirts", "suits","pant"};
    int price[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450,500};
    int count=10,size=10;
   
public:
    void clothes_update(){
		cout<<"                      if you want to add product Select 1"<<endl;
		cout<<"                      if you want to Delete product Select 1"<<endl;
		string choice;
		cin>>choice;
		if(choice=="1"){
			display();
			add_product();
			display();
			return;
		}
		else if(choice=="2"){
			display();
			delete_product();
			display();
			return;
		}
		else 
		{
			cout<<"Wrong or Invalid input ";
			clothes_update();
			return;
		}
	}
	void add_product(){ cout<<"from 1 to 10 where you want to add product :"<<endl;
						int count;
						cin>>count;
	if(count>0 && count<=10){
	
	string name;int newprice;
		if(count<size){
		cout<<"   Enter the product name to add :   ";cin>>name;//yaha validation lagani
		cout<<"   Enter price to of product     :   ";cin>>newprice;//yaha validation lagani
		clothes[count-1]=name;//the product will update array product name
		price[count-1]=newprice;//the product will update array index price 
		}
		else
		cout<<"Catalog is full cannot add more items ";
	}
	else
	{
		system("cls");
		cout<<"Wrong Input Try Again";
		add_product();
	}
}
	void delete_product(){string name;int newprice,index;
	cout<<" enter the index to delete item ";cin>>index;//validation lagni
		
		if(count==0){
			cout<<"no data to delete";
		}
		else if(index<=size){
		 clothes[index]="No data";//product is  replaced by text no item and price is replaced by zero
		 price[index]=0;
		}
		else{
			cout<<"invalid input.";
			return;
		}
	}
	void display(){
		//cout<<" the item list updated";code to display list 
		for(int i=0;i<size;i++){
			cout<<"item is "<<clothes[i]<<"at price :"<<price[i]<<endl;
		}
	}
    int quantity(int a) {
       int num;
        string j;
        cout<< "\nSelect Quantity Of Goods \n";
        cin >> j;
        if (isValidInteger(j,num)){cout<<"-----------------------";}
         else{system("cls");
		 cout<<"invalid input";
		 quantity(a);}
      int  total = price[a] * num;
        cout << "You Selected :" << clothes[a]<<" Price = "<<price[a]<<endl;
		cart.add(clothes[a]); 
		cout<< " Quantity " << num<<endl;
		quantitylist.quantitylist(num);
		cout << " Total Price = " << total<<endl;
		pricelist.pricelist(total);
//        	cout<<"\n the total is :"<<total;
		//File Handling For items
			fstream new_file;
			new_file.open("new_file" ,ios::app);

			new_file<<"Items: "<<clothes[a]<<"     Quantity: "<<num<<endl;
			new_file.close();

        	total1=total1+total;
        //	system("cls");
		 loop:
		cout<<"\n\n              Select (2) For Total Price : \n";
		lop:
		cout<<"                  Select (1) To Go Back To Buy Others :\n";
		cout<<"                  Select (3) for main menu : ";
		string select;	
		cin>>select;
		
		if(select=="1"){
        		system("cls");
        		getclothes();
        	}
        
        else if(select=="2"){ 
        		system("cls");
        		cout<<"Total Price : ";
        		cout<<total1;
        		goto lop;
        		}
        else if(select=="3"){
        	system("cls");
        
		}
		else
		{
			system("cls");
		cout<<"Wrong Input ";
		goto loop;
		}
	}//total1 = total1 + total;
        //cout << "\n the total is :" << total1;
    
    
    int getclothes() {
        int a;
     string i;
        cout << "   \n        Select Goods\n";
for(int i=0;i<count;i++){
	cout<<i<<")"<<" For "<<clothes[i]<<"  at price: "<<price[i]<<endl;
}
    cout<<count<<") for Exit"<<endl;
    cin >> i;
    if (isValidInteger(i,a)) {
        cout<<"................";
    } else {system("cls");
    	cout << "Wrong input!" << endl;
    	getclothes();
    }
     
            switch (a) {
                case 0:
                    quantity(a);
            
                    break;
                case 1:
                    quantity(a);
                    break;
                case 2:
                    quantity(a);
                    break;
                case 3:
                    quantity(a);
                    break;
                case 4:
                	quantity(a);
                	break;
                case 5:
                	quantity(a);
                	break;
                case 6:
                	quantity(a);
                	break;
                case 7:
                	quantity(a);
                	break;
                case 8:
                	quantity(a);
                	break;
                case 9:
                	break;;
                	break;
                default:system("cls");
                	cout<<"WRONG INPUT ";
            		getclothes();
			}      
    }
    
    void end(void) {
        
        cout << "\nTotal Price : " << total1;
        cout << "\nTHANKS FOR VISITING...\n ";
    }
    
	
};
class beauty:virtual public groceries{
	protected:
    string beauty[10] = {"makeup", "skincare", "haircare", "fragnances","nailcare", "oralcare", "mensgrooming" , "personalhygiene","hairdryer","puff"};
    int price[10] = {10000, 5000, 500000, 1000, 7500, 1500, 20000,5500,4400,4000};
    int count=10,size=10;
public:
   void beauty_update(){
		cout<<"                      if you want to add product Select 1"<<endl;
		cout<<"                      if you want to Delete product Select 1"<<endl;
		string choice;
		cin>>choice;
		if(choice=="1"){
			display();
			add_product();
			display();
			return;
		}
		else if(choice=="2"){
			display();
			delete_product();
			display();
			return;
		}
		else 
		{
			cout<<"Wrong or Invalid input ";
			beauty_update();
			return;
		}
	}
	void add_product(){ cout<<"from 1 to 10 where you want to add product :"<<endl;
						int count;
						cin>>count;
	if(count>0 && count<=10){
	
	string name;int newprice;
		if(count<size){
		cout<<"   Enter the product name to add :   ";cin>>name;//yaha validation lagani
		cout<<"   Enter price to of product     :   ";cin>>newprice;//yaha validation lagani
		beauty[count-1]=name;//the product will update array product name
		price[count-1]=newprice;//the product will update array index price 
		}
		else
		cout<<"Catalog is full cannot add more items ";
	}
	else
	{
		system("cls");
		cout<<"Wrong Input Try Again";
		add_product();
	}
}
	void delete_product(){string name;int newprice,index;
	cout<<" enter the index to delete item ";cin>>index;//validation lagni
		
		if(count==0){
			cout<<"no data to delete";
		}
		else if(index<=size){
		 beauty[index]="No data";//product is  replaced by text no item and price is replaced by zero
		 price[index]=0;
		}
		else{
			cout<<"invalid input.";
			return;
		}
	}
	void display(){
		//cout<<" the item list updated";code to display list 
		for(int i=0;i<size;i++){
			cout<<"item is "<<beauty[i]<<"at price :"<<price[i]<<endl;
		}
	}
    int quantity(int a) {
       int num;
        string j;
        cout<< "\nSelect Quantity Of Goods \n";
        cin >> j;
        if (isValidInteger(j,num)){cout<<"-----------------------";}
         else{system("cls");
		 cout<<"invalid input";
		 quantity(a);}
      int  total = price[a] * num;
        cout << "You Selected :" << beauty[a]<<" Price = "<<price[a]<<endl;
		cart.add(beauty[a]); 
		cout<< " Quantity " << num<<endl;
		quantitylist.quantitylist(num);
		cout << " Total Price = " << total<<endl;
		pricelist.pricelist(total);
//        	cout<<"\n the total is :"<<total;
			//File Handling For items
			fstream new_file;
			new_file.open("new_file" ,ios::app);

			new_file<<"Items: "<<beauty[a]<<"     Quantity: "<<num<<endl;
			new_file.close();

        	total1=total1+total;
        //	system("cls");
		 loop:
		cout<<"\n\n              Select (2) For Total Price : \n";
		lop:
		cout<<"                  Select (1) To Go Back To Buy Others :\n";
		cout<<"                  Select (3) for main menu : ";
		string select;	
		cin>>select;
		
		if(select=="1"){
        		system("cls");
        		getbeauty();
        	}
        
        else if(select=="2"){ 
        		system("cls");
        		cout<<"Total Price : ";
        		cout<<total1;
        		goto lop;
        		}
        else if(select=="3"){
        	system("cls");
        
		}
		else
		{
			system("cls");
		cout<<"Wrong Input ";
		goto loop;
		}
	}//total1 = total1 + total;
        //cout << "\n the total is :" << total1;
    
    
    int getbeauty() {
        int a;
     string i;
		
        cout << "   \n        Select Beauty Items\n";
        for(int i=0;i<count;i++){
	cout<<i<<")"<<" For "<<beauty[i]<<"  at price: "<<price[i]<<endl;
}
    cout<<count<<") for Exit"<<endl;
	cin >> i;
    if (isValidInteger(i,a)) {
        cout<<"................";
    } else {system("cls");
    	cout << "Wrong input!" << endl;
    	getbeauty();
    } 
            switch (a) {
                case 0:
                    quantity(a);
            
                    break;
                case 1:
                    quantity(a);
                    break;
                case 2:
                    quantity(a);
                    break;
                case 3:
                    quantity(a);
                    break;
                case 4:
                	quantity(a);
                	break;
                case 5:
                	quantity(a);
                	break;
                case 6:
                	quantity(a);
                	break;
                case 7:
                	quantity(a);
                	break;
                case 8:
                	break;;
                	break;
                default:system("cls");
                	cout<<"WRONG INPUT ";
           		getbeauty();
		    }    
    }
    
    void end(void) {
        
        cout << "\nTotal Price : " << total1;
        cout << "\nTHANKS FOR VISITING...\n ";
    }
    
	
};
class electronics:virtual public groceries{
    protected:
	string electronics[10] = {"Headphone ", "Handfree", "battery", "ram", "Smart Phones", "Television", "Tablets", "Smart Watches","Cameras", "Gaming Consoles"};
    int price[10] = {1300, 1200, 1500, 2000, 50000,250000,5600,78000,200,3000};
    int count=10,size=10;
public:
	void electronics_update(){
		cout<<"                      if you want to add product Select 1"<<endl;
		cout<<"                      if you want to Delete product Select 1"<<endl;
		string choice;
		cin>>choice;
		if(choice=="1"){
			display();
			add_product();
			display();
			return;
		}
		else if(choice=="2"){
			display();
			delete_product();
			display();
			return;
		}
		else 
		{
			cout<<"Wrong or Invalid input ";
			electronics_update();
			return;
		}
	}
	void add_product(){ cout<<"from 1 to 10 where you want to add product :"<<endl;
						int count;
						cin>>count;
	if(count>0 && count<=10){
	
	string name;int newprice;
		if(count<size){
		cout<<"   Enter the product name to add :   ";cin>>name;//yaha validation lagani
		cout<<"   Enter price to of product     :   ";cin>>newprice;//yaha validation lagani
		electronics[count-1]=name;//the product will update array product name
		price[count-1]=newprice;//the product will update array index price 
		}
		else
		cout<<"Catalog is full cannot add more items ";
	}
	else
	{
		system("cls");
		cout<<"Wrong Input Try Again";
		add_product();
	}
}
	void delete_product(){string name;int newprice,index;
	cout<<" enter the index to delete item ";cin>>index;//validation lagni
		
		if(count==0){
			cout<<"no data to delete";
		}
		else if(index<=size){
		 electronics[index]="No data";//product is  replaced by text no item and price is replaced by zero
		 price[index]=0;
		}
		else{
			cout<<"invalid input.";
			return;
		}
	}
	void display(){
		//cout<<" the item list updated";code to display list 
		for(int i=0;i<size;i++){
			cout<<"item is "<<electronics[i]<<"at price :"<<price[i]<<endl;
		}
	}
    int quantity(int a) {
        int num;
        string j;
        cout<< "\nSelect Quantity Of Goods \n";
        cin >> j;
        if (isValidInteger(j,num)){cout<<"-----------------------";}
         else{system("cls");
		 cout<<"invalid input";
		 quantity(a);}
      int  total = price[a] * num;
        cout << "you selected "<< electronics[a];
		cart.add(electronics[a]); 
		cout<<endl<< " quantity " << num;
		quantitylist.quantitylist(num); 
		cout<< " for total price of " << total<<endl;
        	cout<<"\n the total is :"<<total;
        	pricelist.pricelist(total);
        	//File Handling For items
			fstream new_file;
			new_file.open("new_file" ,ios::app);

			new_file<<"Items: "<<electronics[a]<<"     Quantity: "<<num<<endl;
			new_file.close();
			
        	total1=total1+total;
     
		 loop:
		cout<<"\n\n              Select (2) For Total Price : \n";
		lop:
		cout<<"                  Select (1) To Go Back To Buy Others :\n";
		cout<<"                  Select (3) for main menu : ";
		string select;	
		cin>>select;
		
		if(select=="1"){
        		system("cls");
        		getelectronics();
        	}
        
        else if(select=="2"){ 
        		system("cls");
        		cout<<"Total Price : ";
        		cout<<total1;
        		goto lop;
        		}
        else if(select=="3"){
        	system("cls");
        
		}
		else
		{
			system("cls");
		cout<<"Wrong Input ";
		goto loop;
		}
	}
    
    int getelectronics() {
        int a;
    string i; 
		
        cout << "select Electronic Device\n";
        for(int i=0;i<count;i++){
	cout<<i<<")"<<" For "<<electronics[i]<<"  at price: "<<price[i]<<endl;
}
    cout<<count<<") for Exit"<<endl;
        cin >> i;
    if (isValidInteger(i,a)) {
        cout<<"................";
    } else {system("cls");
    	cout << "Wrong input!" << endl;
    	getelectronics();
    }

     
            switch (a) {
                case 0:
                    quantity(a);
            
                    break;
                case 1:
                    quantity(a);
                    break;
                case 2:
                    quantity(a);
                    break;
                case 3:
                    quantity(a);
                    break;
                case 4:
                    quantity(a);
                    break;
                case 5:
                    quantity(a);
                    break;
                case 6:
                    quantity(a);
                    break;
                case 7:
                    quantity(a);
                    break;
                case 8:
                    quantity(a);
                    break;
                case 9:
                    quantity(a);
                    break;
                case 10:
                	break;;
                	break;
                default:
                	cout<<"wrong input";
            }
          
     
    }
    
    void end(void) {
        cout << "\n     thanks for visiting. \n ";
        cout << "      Total is " << total1;
    }
    
	
};
class mart :public fruits,public vegetables,public clothes,public beauty,public electronics,public QueueLinkedlist{

    // information of customer and seller
    string name;
    string lastname;
    string city;
    string sap;
    double password[2]={46672,45713};// password is our saps;
    
public:
    mart() {
        string choice;
        cout << "   					  WELCOME TO RIPHAH INTERNATIONAL MARKET    \n " << endl;
        cout << " 							For Shopping Select (1)\n\n"<<endl;
        cout << " 							For Administrater Login Select (2)\n\n";
        cin >> choice;
        if(choice=="1"){								//order change  for validation
        system("cls");
		 cout << "You Are Our Valued Customer \n" << endl;
                cout << "Enter Your Details To Proceed \n";
                customer(name,lastname, city, sap);
                
        }
        else if(choice=="2"){
		cout << "You Are Welcome Boss Please Enter Your Details \n\n";
                admin(name, password);
            	exit(1);
			    
		/*switch (choice) {
            case 1: {
                cout << "You Are Our Valued Customer \n" << endl;
                cout << "Enter Your Details To Proceed \n";
                customer(name, address, sap);
                break;
            }
            case 2: {
                cout << "You Are Welcome Boss Please Enter Your Details \n\n";
                admin(name, password);
            	exit(1);
			    break;
            }
            default:
            	system("cls");
            	cout<<"wrong please try again thanks";
            	mart();
        }*/
    }
    else{
    	system("cls");
		cout<<"wrong input :\n\a";
		mart();
	}
	}
    void validateInput(string& input)
{
    bool isValid = true;
    for (char c : input)
    {
        if (!isalpha(c))
        {
            isValid = false;
            break;
        }
    }

    if (!isValid)
    {
        cout << "Invalid input. Please enter alphabetic characters only.\n";
         cout << "Enter again: ";
         cin >> input;
        validateInput(input);
    }
}

       
void customer( string& name,  string& lastname,  string& city,  string& number)
{
     cout << "Enter Your First Name: ";
     cin >> name;
    validateInput(name);

     cout << "Enter Your Last Name: ";
     cin >> lastname;
    validateInput(lastname);

     cout << "Enter Your City: ";
     cin >> city;
    validateInput(city);
		cout << "\nEnter Your Phone Number : ";
        cin>>number;
      
       if (number >= "0" && number <= "99999999") {
       	
       	//File Handling For Customer details
       ofstream new_file;
		new_file.open("new_file" ,ios::app);
		
			new_file<<endl<<"Name: "<<name<<" "<<lastname<<endl;
			new_file<<"City: "<<city<<endl;
			new_file<<"Phone Number: "<<number<<endl;
			new_file.close();
			
			//void Enqueue(string data, string last_name, string city, string number)//to add customer details in a queue for order management	
			Enqueue(name,lastname,city,number);//added customer details in queue to track order
		menu();
		}
        else {
	system("cls");
	cout<<"invalid input please try again\n\n";
	
	customer(name,lastname,city, number);
}

        
		
    }    //cout<<"Select Catogeroy To Visit   \n";	check krne keliye main
      void menu(void){
	  
	     string category;
         while (true) {
            cout << "\nPlease select a category to visit:\n";
    cout<<"\n 1 for grocery ";
	cout<<" \n 2 for fruits  ";
	cout<<" \n 3 for Vegetables";
	cout<<" \n 4 for clothes  ";
	cout<<" \n 5 for Beauty Items";
	cout<<" \n 6 for electronics";
	cout<<" \n 7 for Exit"<<endl;
     cin >>category;

            //switch (category) {
          if(category=="1"){//  case 1:
        		system("cls");
        		getgroceries();
        	}
        	//	break;
        else if(category=="2"){ //	case 2:
        		system("cls");
        		getfruits();
        		}//break;
        else if(category=="3"){//	case 3:
        		system("cls");
        		getvegetables();
        		}//break;
        else if(category=="4"){ //	case 4:
        		system("cls");
        		getclothes();
        }	//	break;
          else if(category=="5"){//	case 5:
        		system("cls");
        		getbeauty();
        		}//break;
          else if(category=="6"){//case 6:
        		system("cls");
        		getelectronics();
        		}//break;
          else if(category=="7"){//case 7:
        				system("cls");
        		if(total1>0){
                   bill(total1);
                   exit(1);
               }
				   else{
				   	cout<<"You Bought Nothing"<<endl;
				   	cout<<"*THANKS FOR COMING*"<<endl<<endl;
				   	fstream new_file;
						new_file.open("new_file" ,ios::app);
						new_file<<"Bought Nothing "<<endl;
						new_file.close();
				   	exit(1);
				   }  
		 }             
				else{   //  default:
                	system("cls");
                    cout << "Invalid choice. Please try again.\n";
  					menu();}
            }
    }
    

    int admin(string& name, double *password) {string p;
        cout << "Enter Your Name :\n";
        cin>>name;
        validateInput(name);
		cout << " Password  : \n";
        //getline(cin,p);
		//cin.ignore();
		cin >> p;
        
	try
	{
		if(p =="45713" || p== "46672")
		{			
			cout<<"You May Proceed ";
			system("cls");
			cout<<"         If you want to add or delete product in catalog press 1 "<<endl;
			cout<<"         If you want to see customer details             press 2 "<<endl;
			
			cout<<"         If you want to see recent activity and  manage orders   press 3"<<endl;
			string s;
			cin>>s;
			
			
			if(s=="3"){
				cout<<"Here is the details of customer that log in during running of program.";
				queue_display();
				cout<<"if you want to dequeue orders press 1 ";
				string one;
				cin>>one;
				if(one=="1"){
					system("cls");
					Dequeue();
						admin(name,password);
				}
				else{
					cout<<"wrong input";
					admin(name,password);
				}
			}
			if(s=="2"){
			cout<<"Here's Is A List Of What Happened Since Your Last Visit ";
			//File Handling to Display All the things Stored in the File
	ifstream new_file;
		new_file.open("new_file",ios::in);
		if(!new_file)
			{ cout<<"No such file"; }
			else {
				while(getline(new_file,name))
    		cout<<name<<endl;
		}
	new_file.close();
	
	cout<<"1) for return ";
	string e;
	cin>>e;
	if(e=="1"){
		admin( name, password);
	}
	else
		{
		exit(1);
		}	
			}
			else if(s=="1"){
				cout<<"In which Category You want to add or delete product ";
				cout<<"\n 1 for grocery ";
				cout<<" \n 2 for fruits  ";
				cout<<" \n 3 for Vegetables";
				cout<<" \n 4 for clothes  ";
				cout<<" \n 5 for Beauty Items";
				cout<<" \n 6 for electronics";
				cout<<" \n 7 for Exit"<<endl;
				string selection;
				cin>>selection;
				system("cls");
				//to access the add and delete function of categories
				if(selection=="1"){
					groceries_update();
					cout<<"Task performed  Successfully";
				}
				else if(selection=="2"){
					fruits_update();
					cout<<"Task performed  Successfully";
				}
				else if(selection=="3"){
					vegetables_update();
					cout<<"Task performed  Successfully";
				}
				else if(selection=="4"){
					clothes_update();
					cout<<"Task performed  Successfully";
				}
				else if(selection=="5"){
					beauty_update();
					cout<<"Task performed  Successfully";
				}
				else if(selection=="6"){
					electronics_update();
					cout<<"Task performed  Successfully";
				}
				else if(selection=="7"){
					 mart();
				}
				else{
				system("cls");
				cout<<" please try again ";
				admin(name,password);
			}
			}
			
			}
		else
		{char a;
			throw a;
		}
	}
	catch(char){
		
		system("cls");
		cout<<"\nWrong Password Please Try Again\n"<<endl;
		mart();
	}	
}
 void bill(int t)
    {	int bill1;
    int index;
    	cout<<"                           Your Cart: "<<endl;
    	cout<<"                           Item Name: ";
    	cart.display();
    	cout<<"                           Quantity: ";
    	quantitylist.quantitydisplay();
    	cout<<"                           Price: ";
		pricelist.pricedisplay();
    	cout<<endl<<endl;
    	cout<<"            Total Bill :";
		pricelist.totalbill();
		cout<<endl<<endl;
    	cout<<"              1)           Remove item from cart: "<<endl;
    	cout<<"\n            2)           for card payment (20% off)\n";
    	cout<<"\n            3)           for cash payment";
    	cin>>bill1;
    	switch(bill1)
    	{
    		case 2:
    			int card_details;
    			cout<<"                   the total amount is :"<<t<<endl;
    			float discount;
				total1=t-(t*0.20);
    			cout<<"\n                 amount after discout 20%:"<<total1;
    			cout<<"\n                 enter your card detaails :";
    			cin>>card_details;
    			cout<<"\n                 thanks for shopping visit again.";
    			
    			break;
    		case 3:
			 	cout<<"\n the total amount :"<<total1;
				cout<<" \npay at counter 1 ";
				cout<<"\nThanks for shopping visit again "; 	
    			break;
    		case 1:
    			cout<<"           Item No you want to remove from cart:  "<<endl;
    			cin>>index;
    			cart.deleteat(index);
    			quantitylist.quantitydelete(index);
    			pricelist.pricedelete(index);
    			system("cls");
    			bill(t);
    		default:
    			cout<<"            wrong input detalils";
		}
		
		//File Handling for total Price
    	fstream new_file;
		new_file.open("new_file" ,ios::app);
			new_file<<"Total Price: "<<total1<<endl;
			new_file.close();
				}
};
int main() {
    mart m;
    return 0;
}
