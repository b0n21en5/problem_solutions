class Solution {
    static int sum=0;
    public int rangeSumBST(TreeNode root, int low, int high) {
        sumBST(root, low, high);
        int temp = sum;
        sum=0;
        return temp;
        
    }

    static void sumBST(TreeNode root, int low, int high){
        if (root==null) return;

        if (root.val>=low && root.val<=high) sum += root.val;

        sumBST(root.left, low, high);
        sumBST(root.right, low, high);

    }
}