#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;

    q.push("ritik");
    q.push("dubey");
    q.push("kumar");
     cout<<"size after pop--->"<<q.size()<<endl;
    
    cout<<"first element--->"<<q.front()<<endl;
    
    q.pop();
    cout<<"first element--->"<<q.front()<<endl;
    cout<<"size after pop--->"<<q.size()<<endl;
    
    


}