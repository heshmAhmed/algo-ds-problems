/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSubtree(TreeNode root, TreeNode subRoot) {
        return root != null && (isSubtree(root.right, subRoot) || isSubtree(root.left, subRoot) || isEqual(root, subRoot));
    }

    public boolean isEqual(TreeNode root, TreeNode subRoot) {
        if(root == null && subRoot == null)
            return true;
        if(root == null || subRoot == null)
            return false;
            return root.val == subRoot.val && isEqual(root.right, subRoot.right) && isEqual(root.left, subRoot.left);
    }
}