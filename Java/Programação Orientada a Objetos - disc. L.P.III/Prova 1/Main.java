public class Main {
    public static void main(String[] args) {
        int i=4, j=5, k=6;
    
        double resultado = 0;

        if(i++<5 || j++ < k){
            resultado = i * j;
        }
        else{
            resultado = j*k;
        }

        resultado += j/2;

        System.out.println(resultado);
    }
}