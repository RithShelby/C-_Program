#include<iostream>
#include<fstream>
using namespace std;
class Dictionary{
    private:
        char word[20],def[20],speech[20];
    public:
    /*Method*/
        void Input(){
            cout<<"Input Word : ";cin>>word;
            cout<<"Input Definition : ";cin>>def;
            cout<<"Input Speech : ";cin>>speech;
        }
        void Output(){
            cout<<"\t"<<word<<"\t"<<def<<"\t"<<speech<<endl;
        }
        void Header(){
            cout<<"\tWord\tDefinition\tSpeech"<<endl;
        }
};
int main(){
    Dictionary obj;
    fstream file;
    int i,j,n,op;
    do{
        cout<<"1.Write\t2.Read\tSearch\tDelete\tExit"<<endl;
        cout<<"Choose Option : ";cin>>op;
        switch (op){
            case 1:{
                file.open("Write.txt",ios::app);
                cout<<"Input number of word : ";cin>>n;
                for(i=0;i<n;i++){
                    obj.Input();
                   file.write((char *)&obj,sizeof(obj));
                }
                file.close();
            }break;
             case 2:{
                file.open("Readd.txt",ios::in);
                    obj.Header();
                while(file.read((char *)&obj,sizeof(obj))){
                    obj.Output();
                }
                file.close();
            }break;
        }
    }while(op!=5);
}