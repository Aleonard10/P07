#include "bst.h"
#include <string>
#include <iostream>

using namespace std;

bst::bst()
{
    m_root = NULL;
}

bst::Node *bst::createNode(string data)
{
    Node *ptr = new Node(data, NULL, NULL);
    return ptr;
}

void bst::insert(string data)
{
    bst::insert(data, m_root);
}
void bst::insert(string data, Node* ptr)
{
    if (m_root == NULL)
    {
        m_root = createNode(data);
    }
    else if (data < ptr->m_data)
    {
        if (ptr->m_left == NULL)
        {
            ptr->m_left = createNode(data);
        }
        else
        {
            bst::insert(data, ptr->m_left);
        }

    }
    else if (data > ptr->m_data)
    {
        if (ptr->m_right == NULL)
        {
            ptr->m_right = createNode(data);
        }
        else
        {
            bst::insert(data, ptr->m_right);
        }
    }
}

void bst::print()
{
    print(m_root);
}

void bst::print(Node* ptr)
{
    if (m_root != NULL)
    {
        if (ptr->m_left != NULL)
        {
            print(ptr->m_left);
        }
        /*if (isLastNode(ptr))
        {
            cout << ptr->m_data << endl;
        }
        else*/
        //{
            cout << ptr->m_data << ", ";
        //}
        if (ptr->m_right != NULL)
        {
            print(ptr->m_right);
        }
    }
    else
    {
        cout << "The tree is empty." << endl;
    }
}

/*bool isLastNode(Node* ptr)
{
    if (lastNode == ptr->m_data)
    {return 0;}
    else
    {return 1;}
}*/

void bst::find(string data, Node* ptr)
{
    if (m_root != NULL)
    {
        if(ptr->m_data == data)
        {
            cout << "<" << data << "> is in tree." << endl;
            return;
        }
        else
        {
            if (ptr->m_left != NULL)
            {
                find(data, ptr->m_left);
            }
            if (ptr->m_right != NULL)
            {
                find(data, ptr->m_left);
            }
        }
        cout << "<" << data << "> is not in tree." << endl;
    }

}

void bst::find(string data)
{
    find(data, m_root);
}
