BST& BST::operator=(const BST& other) {
    if (this == &other)
        return *this;

    clear(root);                
    root = copy(other.root);  

    return *this;
}

TreeNode* copy(TreeNode* node) {
    if (node == nullptr)
        return nullptr;

    TreeNode* newNode = new TreeNode(node->element);
    newNode->left = copy(node->left);
    newNode->right = copy(node->right);
    return newNode;
}
