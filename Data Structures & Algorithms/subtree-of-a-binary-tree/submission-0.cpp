/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
   void serialize(TreeNode* root, string& s) {
        if (!root) {
            s += "N,";
            return;
        }

        s += "," + to_string(root->val);
        serialize(root->left, s);
        serialize(root->right, s);
    }

    vector<int> buildLPS(string& pattern) {
        vector<int> lps(pattern.size(), 0);
        int len = 0;

        for (int i = 1; i < pattern.size(); ) {
            if (pattern[i] == pattern[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i++] = 0;
                }
            }
        }

        return lps;
    }

    bool KMP(string& text, string& pattern) {
        vector<int> lps = buildLPS(pattern);

        int i = 0, j = 0;

        while (i < text.size()) {
            if (text[i] == pattern[j]) {
                i++;
                j++;
            }

            if (j == pattern.size()) return true;

            else if (i < text.size() && text[i] != pattern[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }

        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string tree, subTree;

        serialize(root, tree);
        serialize(subRoot, subTree);

        return KMP(tree, subTree);
    }
};
