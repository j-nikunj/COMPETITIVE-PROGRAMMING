#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define F first
#define S second

typedef vector<int> vi;
typedef pair<int, int> pii;
#define endl '\n'

struct node {
    int data;
    struct node *left;
    struct node *right;
    node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;
Node* preOrderBuildTree(vector<int> &nodes) {
    idx++;
    if (idx >= nodes.size() ||nodes[idx] == -1) return nullptr;
    Node* currNode = new Node(nodes[idx]);
    currNode->left = preOrderBuildTree(nodes);
    currNode->right = preOrderBuildTree(nodes);
    return currNode;
}

void postOrderPrintTree(Node* root) {
    if (root == nullptr) return;
    postOrderPrintTree(root->left);
    postOrderPrintTree(root->right);
    cout << root->data << " ";
}

void inOrderPrintTree(Node* root) {
    if (root == nullptr) return;
    inOrderPrintTree(root->left);
    cout << root->data << " ";
    inOrderPrintTree(root->right);
}

void levelOrderPrintTree(Node* root) {
    if (root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != nullptr) q.push(curr->left);
        if (curr->right != nullptr) q.push(curr->right);
    }
}

int heightOfTree(Node* root) {
    if (root == nullptr) return 0;
    return max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
}

int countOfNodes(Node* root) {
    if (root == nullptr) return 0;
    return countOfNodes(root->left) + countOfNodes(root->right) + 1;
}

int sumOfNodes(Node* root) {
    if (root == nullptr) return 0;
    return sumOfNodes(root->left) + sumOfNodes(root->right) + (root->data);
}

int diameter1(Node* root) {
    if (root == nullptr) return 0;
    int currDiam = heightOfTree(root->left) + heightOfTree(root->right) + 1;
    int leftDiam = diameter1(root->left);
    int rightDiam = diameter1(root->right);
    return max(currDiam, max(leftDiam, rightDiam));
}

pair<int, int> diameter2(Node* root) {
    if (root == nullptr) return make_pair(0, 0);
    pair<int, int> left = diameter2(root->left);
    pair<int, int> right = diameter2(root->right);
    int currDiam = left.second + right.second + 1;
    int finalDiam = max(currDiam, max(left.first, right.first));
    int finalHeight = max(left.second, right.second) + 1;
    return make_pair(finalDiam, finalHeight);
}

bool subtree(Node* root, Node* subRoot) {
    if (root->data == subRoot->data) {
        
    }
    subtree(root->left, subRoot);
    subtree(root->right, subRoot);
}

void solve() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = preOrderBuildTree(nodes);

    cout << diameter1(root);
    cout << endl;
    return;
}

signed main() {
    fast_io

    solve();

    return 0;
}