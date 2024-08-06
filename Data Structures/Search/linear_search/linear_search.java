import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        // user input
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Length of arr:");
        int len=sc.nextInt();
        System.out.println("Length of arr:"+len);
        int[] arr=new int[len];
        for(int i=0;i<len;i++){
            arr[i]=sc.nextInt();
        }

        // pre defined
        // int[] arr={1,5,7,9,4,3,2,8,0,6};
        // code for linear search
        
        System.out.println("Enter target");
        int target=sc.nextInt();
        int targetIndex=-1;
        System.out.println("Target: "+target);
        
        for(int i=0;i<arr.length;i++){
            if(arr[i]==target){
                targetIndex=i;
            }
        }

        if(targetIndex>=0){
            System.out.println("Target "+target+" is found at "+targetIndex+1);
        }
        else{
            System.out.println("Target "+target+" is not found");
        }

    }
}
