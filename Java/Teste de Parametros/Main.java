//Passagem de parametros em Java
public class Main {
    public static void main(String [] args) {
        
        Garagem garagem = new Garagem();

        Carro carro1 = new Carro("BMW");
        Carro carro2 = new Carro("Jaguar");

        garagem.estacionamento(carro1);
        garagem.estacionamento(carro2);
    }
}