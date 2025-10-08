#include "solution.h"
#include <assert.h>
#include <stddef.h>

struct TreeNode* searchBST(struct TreeNode *root, int val) {
    while (root) {
        if (root->val == val) {
            return root;
        }

        assert(root->val != val);
        root = val > root->val ? root->right : root->left;
    }

    assert(root == NULL);
    return root;
}
