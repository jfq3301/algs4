/**
 * @brief Binary tree traversal.
 * @author fjiang2
 * @date 2019.8.10
 */

#include <iostream>
#include "BinaryTreeNode.h"
#include "linkedQueue.h"
#include "myExceptions.h"

using namespace std;

template <class T>
static void visit(BinaryTreeNode<T> * t) {
    if (t) {
        cout << t->data << " ";
    }
}

template <class T>
void PreOrder(BinaryTreeNode<T> * t) {
    if (t) {
        visit(t);
        PreOrder(t->mLeftChild);
        PreOrder(t->mRightChild);
    }
}

template <class T>
void InOrder(BinaryTreeNode<T> * t) {
    if (t) {
        InOrder(t->mLeftChild);
        visit(t);
        InOrder(t->mRightChild);
    }
}

template <class T>
void PostOrder(BinaryTreeNode<T> * t) {
    if (t) {
        PostOrder(t->mLeftChild);
        PostOrder(t->mRightChild);
        visit(t);
    }
}

template <class T>
void LevelOrder(BinaryTreeNode<T> * t) {
    linkedQueue<BinaryTreeNode<T> *> queue;

    while (t) {
        visit(t);

        if (t->mLeftChild) {
            queue.push(t->mLeftChild);
        }
        if (t->mRightChild) {
            queue.push(t->mRightChild);
        }

        try {
            t = queue.front();
        } catch (queueEmpty) {
            return;
        }
        queue.pop();
    }
}

int main(void) {
    BinaryTreeNode<int> * x;
    BinaryTreeNode<int> * y;
    BinaryTreeNode<int> * z;
    BinaryTreeNode<int> * y1;
    BinaryTreeNode<int> * y2;
    BinaryTreeNode<int> * z1;
    BinaryTreeNode<int> * z2;


          //       1
          //    /     \
          //   2       3
          //  / \     / \
          // 4   5   6   7
    y1 = new BinaryTreeNode<int> (4);
    y2 = new BinaryTreeNode<int> (5);
    z1 = new BinaryTreeNode<int> (6);
    z2 = new BinaryTreeNode<int> (7);
    y = new BinaryTreeNode<int> (2, y1, y2);
    z = new BinaryTreeNode<int> (3, z1, z2);
    x = new BinaryTreeNode<int> (1, y, z);

    cout << "PreOrder traversal result: ";
    PreOrder(x);
    cout << endl;

    cout << "InOrder traversal result: ";
    InOrder(x);
    cout << endl;

    cout << "PostOrder traversal result: ";
    PostOrder(x);
    cout << endl;

    cout << "LevelOrder traversal result: ";
    LevelOrder(x);
    cout << endl;


    return 0;
}