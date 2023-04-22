package Polimorfismo;

//método principal
public class Main {
    public static void main (String [] args){
        
        Animal animal = new Animal();
        animal.nome = "Nemo";
        animal.comer();
        animal.emitirSom();

        animal = new Passaro();
        animal.nome = "Pituco";
        animal.comer();
        animal.emitirSom();
        
        animal = new Gato();
        animal.nome  = "Bolacha";
        animal.comer();
        animal.emitirSom();

        animal = new Cachorro();
        animal.nome = "Pipoca";
        animal.comer();
        animal.emitirSom();
    }
}
