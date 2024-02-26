public class TwoSum{
    public static void main(Strings [] args){
        int [] arr = new int[]{1,2,3,4,5,6,7,8,9};
        int target;
        for(int i = 0; i<arr.length-1; i++){
            for(int j = i+1; j< arr.length; j++){
                if(arr[i]+arr[j] == target){
                    System.out.print("Found");
                    break;
                }
            }
        }
    }
}