class Solution {
    

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res=new ArrayList<>();
        List<Integer> initSub=new ArrayList<>();
        res.add(initSub);
        for (int i = 0; i < nums.length; i++) {
            int num=nums[i];
            int time=res.size();
            for (int j = 0; j < time; j++) {
                List<Integer> list=res.get(j);
                List<Integer> sub=new ArrayList<>(list);
                sub.add(num);
                res.add(sub);
            }
        }
        return res;
    }
}
//动态规划+子集
