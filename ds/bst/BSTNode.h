class BSTNode {
public:
  BSTNode() {
    key = 0;
    left = 0;
    right = 0;
  }

  BSTNode(int _key) {
    key = _key;
    left = 0;
    right = 0;
  }

  BSTNode(int _key, BSTNode* _left, BSTNode* _right) {
    key = _key;
    left = _left;
    right = _right;
  }

  int key;
  BSTNode *left;
  BSTNode *right;
};
