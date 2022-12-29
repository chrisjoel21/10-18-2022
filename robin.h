struct node{
    string job;
    int totmin;
    int remain;
    node *next;
};

class robin{
    private:
    node *front;
    node* back;
    public:
    robin();
    void enqueue(string, int, int);
    void dequeue();//cout what just printed it
    void print();

};