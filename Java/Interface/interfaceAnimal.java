public interface interfaceAnimal {
    
    //método abstrato
    void emitirSom();

    //método abstrato
    void dormir();

    //método implementado dentro da interface
    default void sorrir(){
        //o corpo do método abstrato será implementado aqui
        System.out.println(";)");
    }
}
