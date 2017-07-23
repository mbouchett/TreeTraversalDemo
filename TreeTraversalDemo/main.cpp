/* 
 * File:   main.cpp
 * Author: Mark Bouchett
 *
 * Created on July 22, 2017, 10:58 PM
 * This program demonstrates the traversal of a binary tree
 */

#include <iostream>
#include "IntBinaryTree.h"

using namespace std;	//declares the namespace

int main()
{
    int const SIZE = 7;
    int arr[SIZE] = {25,17,60,57,12,20,95};
    // instantiate the Binary Tree
    IntBinaryTree bst;

    cout << "Insert Order\n";
    // Stuff some Data in the tree
    for(int i = 0; i < SIZE; i++){
        bst.insert(arr[i]);
        cout << arr[i] << "  ";
    }
    // display in insert order
    cout << "\n\nPre-order Traversal\n";
    bst.showPreOrder();
    cout << endl << endl;
    // display in order
    cout << "In-order Traversal\n";
    bst.showInOrder();
    cout << endl << endl;
    // display in insert order
    cout << "Post-order Traversal\n";
    bst.showPostOrder();
    cout << endl;
    
    return 0;
}

