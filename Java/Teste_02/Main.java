package Teste_02;

//método princial
public class Main {
    public static void main (String [] args){
        Cachorro cachorro = new Cachorro();
        cachorro.correr();//herdado de Animal
        cachorro.latir();

        Gato gato= new Gato();
        gato.correr();//herdado de Animal
        gato.miar();
    }
}