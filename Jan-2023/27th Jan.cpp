class Solution {
private:
    struct Node{
        Node* arr[26];
        bool end = false;
    };
public:
    Node* root = new Node();
    
    void trie_insert(string &word){
        Node* node = root;
        for(int i = 0; i < word.size(); i++){
            if(node->arr[word[i] - 'a'] == NULL){
                node->arr[word[i] - 'a'] = new Node();
            }
            node = node->arr[word[i] - 'a'];
        }
        node->end = true;
    }
    
    bool trie_prefix_search(string &word){
        Node* node = root;
        for(int i = 0; i < word.size(); i++){
            if(node->arr[word[i] - 'a'] == NULL) return false;
            node = node->arr[word[i] - 'a'];
        }
        return node->end;
    }
    
    bool dfs(string &word, int cuts){
        if(word == "" and cuts >= 2) return true;
        if(word == "") return false;
        for(int i = 0; i < word.size(); i++){
            string prefix = word.substr(0,i+1);
            string suffix = word.substr(i+1);
            if(trie_prefix_search(prefix)){
                if(dfs(suffix , cuts+1)) return true;
            }
        }
        return false;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> ans;
        for(auto w: words){
            trie_insert(w);
        }
        for(auto w: words){
            if(dfs(w, 0)) ans.push_back(w);
        }
        return ans;
    }
};
