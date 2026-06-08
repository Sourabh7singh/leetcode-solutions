struct HashList
{
    int val;
    struct HashList* next;
};

class MyHashSet {
public:
    HashList* list=NULL;
    
    MyHashSet() {
    }
    
    void add(int key) {
        if(this->contains(key)) return;
        HashList* node = new HashList();
        node->val = key;
        node->next = NULL;

        if(list==NULL){
            list = node;
        }else{
            HashList* temp = list;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = node;
        }
    }
    
    void remove(int key) {
        if (list == NULL) return;

        if (list->val == key) {
            HashList* toDelete = list;
            list = list->next;
            delete toDelete;
            return;
        }

        HashList* current = list;
        HashList* next = current->next;

        while (next != NULL) {
            if (next->val == key) {
                current->next = next->next;
                delete next;
                return;
            }
            current = next;
            next = next->next;
        }
    }
    
    bool contains(int key) {
        HashList* temp = list;
        while(temp!=NULL){
            if(temp->val==key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */