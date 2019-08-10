#ifndef BinaryTreeNode_
#define BinaryTreeNode_ 

/**
 * @brief Binary tree node.
 * @author fjiang2
 * @date 2019.8.10
 */
template <class T>
class BinaryTreeNode {
public:
    BinaryTreeNode() {
        mLeftChild = 0;
        mRightChild = 0;
    }

    BinaryTreeNode(const T & e) {
        data = e;
        mLeftChild = 0;
        mRightChild = 0;
    }

    BinaryTreeNode(const T & e, BinaryTreeNode * l, BinaryTreeNode * r) {
        data = e;
        mLeftChild = l;
        mRightChild = r;
    }

private:
    T data;
    BinaryTreeNode<T> * mLeftChild;
    BinaryTreeNode<T> * mRightChild;
}

#endif