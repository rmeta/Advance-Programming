#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Message{
	public:
		string mnChiam;
	   virtual string mazmun(){
	    return mnChiam;}
};

class TextMessage : public Message{
	public:
		string text;
		string mazmun(){
		    return text;}
}; 

class UrlPicMessage : public Message{
	public:
		string urlPic;
		
		string mazmun(){
			return urlPic;}
	};

class UrlVoiceMessage : public Message{
	public:
		string urlVoice;
		string mazmun(){
			return urlVoice;}
};

class IdMessage : public Message{
	public:
		string id;
		string mazmun(){
			return id;}
};

class Contact{
	public:
		string name; 
		vector<Message*> list;
		
	Contact(string s)
	:name(s){}
		
	void addMessage(Message* m){
      list.push_back(m);
   }
   
   void print(){
   		for(int i=0; i<list.size(); i++){
		  cout<<"Message#"<<i+1<<":"<<list[i]->mazmun()<<endl;}   	
   }
	
	void deleteMessage(string m){
		for(int i=0;i<list.size();i++){
			if(list[i]->mazmun()==m)
			  list.erase(list.begin()+i);
		}
	}
	
	void replaceMessage(string q, Message* rep){
		for(int i=0;i<list.size();i++){
			if(list[i]->mazmun()==q){
			  list[i]=rep;}}		
	}
	
};

TextMessage *createText(string pm){
	TextMessage *write= new TextMessage();
	write->text= pm;
	return write;
}

UrlVoiceMessage *createVoice(string vo){
	UrlVoiceMessage *voice= new UrlVoiceMessage();
	voice->urlVoice= vo;
	return voice;
}

UrlPicMessage *createPic(string pi){
	UrlPicMessage *picture= new UrlPicMessage();
	picture->urlPic= pi;
	return picture;
}

IdMessage *createId(string st){
	IdMessage *sticker= new IdMessage();
	sticker->id= st;
	return sticker;
}


int main(){

	Contact* contact[] ={
	new Contact("ervin"),
	new Contact("amin"),
	new Contact("nima"),
	new Contact("abolfazl")};
	
	contact[0]->addMessage(createText("kojaii pas?"));
	contact[0]->addMessage(createText("boro khune"));
	contact[0]->addMessage(createText("charaqaro roshan kon"));
	contact[0]->addMessage(createText("bastani avordam"));
	contact[0]->replaceMessage("boro khune", createText("didamet"));
	contact[0]->replaceMessage("didamet", createText("khabidi"));
	contact[0]->print();
	
	contact[1]->addMessage(createId("32483434"));
	contact[1]->addMessage(createPic("http://www.google.gl/cUGbdk"));
	contact[1]->addMessage(createVoice("http://www.google.gl/budvdg"));
	contact[1]->addMessage(createText("cinderella"));
	contact[1]->deleteMessage("cinderella");
	contact[1]->print();

}
