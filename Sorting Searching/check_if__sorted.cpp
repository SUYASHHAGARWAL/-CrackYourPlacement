/*

day21

class Solution {
    public boolean arraySortedOrNot(List<Integer> arr) {
        return func(arr,0);
    }
    
    public boolean func(List<Integer> list , int index){
        if(list.size() -1 == index)
            return true;
            
        if(list.get(index) > list.get(index+1))
            return false;
        
        return func(list, index+1);
    }
}


*/