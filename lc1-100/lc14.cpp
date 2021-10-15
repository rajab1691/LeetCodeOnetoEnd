// https://leetcode.com/problems/longest-common-prefix/

/*
    ->use trie ds and if along the way of trie if two child occurs or it is the last element in trie then return 
    for more details visit Trie repo
*/

class Node{
public:
    char data;
    unordered_map<char,Node*>children;
    bool isTerminal=false;
    
    Node(){}
    
    Node(char d){
        data=d;
    }
};
class Trie{
    Node* root;
public:
    Trie(){
        root=new Node();
    }
    Node* getTrie(){
        return root;
    }
    void insert(string word){
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(temp->children.count(ch)==0){
                temp->children[ch]=new Node(ch);
            }
            temp=temp->children[ch];
        }
        temp->isTerminal=true;
    }
    
};

class Solution {
public:
    string longestCommonPrefix(vector<string>&v) {
       
        Trie *t=new Trie; 
        
        for(int i=0;i<v.size();i++){
            t->insert(v[i]);
        }
        Node* temp=t->getTrie();
        string final="";
        
        while(temp and !temp->isTerminal and temp->children.size()==1){
            auto it=temp->children.begin();
            final+=it->first;
            temp=it->second;
        }
        return final;
    }
};
