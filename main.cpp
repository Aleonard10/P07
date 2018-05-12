#include "bst.h"
#include <string>
#include <iostream>

using namespace std;

void echo (string repeat);

int main()
{
    /*string data[6] = {"Saturday", "Friday", "Tuesday", "Monday", "Thursday", "Wednesday"};
    bst tree;
    string phrase;
    tree.print();
    for (int i = 0; i < 6; i++)
    {
        tree.insert(data[i]);
    }
    string findInput = "Saturday";
    tree.find(findInput);*/
    
    string data;
    bst tree;
    string phrase;
    string findInput;
        int i = 0;
        string command;
        while (i == 0)
        {
            cin >> command;
            if (command == "echo")
            {
                cin.ignore();
                getline(phrase);
                echo(phrase);
            }
            else if(command == "insert")
            {
                cin >> data;
                insert(data);
            }
            else if(command == "size")
            {
                //size();
            }
            else if(command == "find")
            {
                cin >> findData;
                find(findData);
            }
            else if(command == "print")
            {
                print();
            }
            else if(command == "breadth")
            {
                //breadth();
            }
            else if(command == "distance")
            {
                //distance();
            }
            else if(command == "balanced")
            {
                /*if (isBalanced())
                {
                    cout << "Tree is balanced." << endl;
                }
                else
                {
                    cout << "Tree is not balanced." << endl;
                }*/
            }
            else if(command == "rebalanced")
            {
                //rebalance();
            }
        }
}

void echo (string repeat)
{
    cout << repeat << endl;
}
