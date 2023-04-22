package Polimorfismo;

public class Animal {
    //atributos da  superclasse
    public String nome;
    public String sexo;
    public String raça;

    //métodos da superclasse
    public void comer(){
        System.out.println(nome + " comeu");
    }
    public void correr(){
        System.out.println(nome + " correu");
    }
    public void emitirSom(){
        System.out.println(nome + " fez barulho");
    }
}

//criação de subclasses
class Cachorro extends Animal {
    //método da subclasse
    public void emitirSom(){
        System.out.println(nome + " latiu");
    }
}

class Gato extends Animal {
    public void emitirSom(){
        System.out.println(nome + " miou");
    }
}

class Passaro extends Animal {
    public void emitirSom(){
        System.out.println(nome + " piou");
    }
}