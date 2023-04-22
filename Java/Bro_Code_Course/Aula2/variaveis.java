package Aula2;

/**
 * variaveis
 */
public class variaveis {

    public static void main(String[] args) {
        boolean vegetariano = true;         //1 bit, primitive, true or false
        byte x = 100;                       //1 byte, primitive, -128 to 127
        short y = 25000;                    //2 bytes, primitive, -32,768 to 32,767
        int z = 100000;                     //4 bytes, primitive, -2 billion to 2 billion
        long w = 331321653;                 //8 bytes, primitive, -9 quntillion to 9 quintillion

        float m = 3.14f;                    //4 bytes, primitive, fractional number up to 6-7 digits, ex. 3.141592f
        double n = 3.143213212;             //8 bytes, primitive, fractional number up to 15 digits, ex. 3.141592653589793

        char nome = 'F';                    //2 bytes, primitive, single character/letter/ASCII value, ex. 'f'
        String nomeCompleto = "Fabiana";    //varies(user defined), reference, a sequence of characters, ex. "Hello World"

        System.out.println(nomeCompleto);
    }

}