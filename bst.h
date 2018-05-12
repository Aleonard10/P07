#ifndef BST_H
#define BST_H
#include <string>
using namespace std;
class bst
{
public:
    bst();
    void insert(string data);
    void print();
    void find(string data);


private:
    class Node
    {
    public:
        Node(string data, Node *left, Node *right)
        {
            m_data = data;
            m_left = left;
            m_right = right;
        }
        string m_data;
        Node *m_left;
        Node *m_right;
    };
    Node *m_root;
    Node *createNode(string data);
    void insert(string data, Node *ptr);
    void print(Node *ptr);
    void find(string data, Node *ptr);
    int m_size;
};
#endif
