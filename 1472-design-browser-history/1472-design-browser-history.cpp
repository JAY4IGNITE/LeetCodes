class Node {
public:
    Node* prev;
    Node* next;
    string data;

    Node(string data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class BrowserHistory {
public:
    Node* current;
    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }
    void visit(string url) {
        Node* newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    string back(int steps) {
        while (steps > 0 && current->prev != NULL) {
            current = current->prev;
            steps--;
        }
        return current->data;
    }
    string forward(int steps) {
        while (steps > 0 && current->next != NULL) {
            current = current->next;
            steps--;
        }
        return current->data;
    }
};