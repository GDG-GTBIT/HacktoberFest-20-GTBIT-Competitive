public class Main {

    public static void main(String [] args){

        int [] arr = {4, 2, 6, 8, 1, 10, 4, 5, 5, 0, 1};

        //initial array
        System.out.println("Initial array");
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }

        for(int i = 0; i < arr.length - 1; i++){
            for(int k = i; k < arr.length; k++){
                if(arr[i] > arr[k]){
                    int aux = arr[i];
                    arr[i] = arr[k];
                    arr[k] = aux;
                }
            }
        }

        //final array
        System.out.println("\n\nFinal array");
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }

    }
}
