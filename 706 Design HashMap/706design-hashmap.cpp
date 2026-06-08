struct HashList
{
    int key;
    int val;
    struct HashList* next;
    HashList(int key,int value){
        this->key = key;
        this->val = value;
        this->next = nullptr;
    }
};

class MyHashMap {
public:
    HashList* head=nullptr;
    MyHashMap() {
    }
    
    void put(int key, int value) {
        HashList* node = new HashList(key,value);
        if(head==nullptr){
            head = node;
        }else{
            HashList* temp = head;
            if(this->get(key)==-1){
                while(temp->next!=nullptr){
                    temp = temp->next;
                }
                temp->next = node;
            }else{
                while(temp!=nullptr){
                    if(temp->key==key){
                        temp->val = value;
                        break;
                    }
                    temp = temp->next;
                }
            }

        }
    }
    
    int get(int key) {
        HashList* temp = head;
        int val = -1;
        while(temp!=nullptr){
            if(temp->key==key){
                val = temp->val;
                break;
            }
            temp = temp->next;
        }
        return val;
    }
    
    void remove(int key) {
        if(head==nullptr) return;
        HashList* current = head;
        
        if(current->key==key){
            head = head->next;
            delete current;
            return;
        }
        
        HashList* next = current->next;
        while(next!=nullptr){
            if(next->key==key){
                current->next = next->next;
                delete next;
                return;
            }
            current = next;
            next = next->next;
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */