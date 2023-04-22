public class Main {
    public static void main(String[] args) {
        
        //criando objeto cachorro
        Cachorro novCachorro = new Cachorro();
        novCachorro.emitirSom();
        novCachorro.dormir();

        //criando objeto gato
        Gato nGato = new Gato();
        nGato.emitirSom();
        nGato.dormir();
    }
}