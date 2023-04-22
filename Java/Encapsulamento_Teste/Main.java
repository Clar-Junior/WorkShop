public class Main {
    public static void main (String[] args){
        //Objetos da classe Livro
        Livro newObjeto = new Livro();

        //setando os valores dos atributos da classe
        newObjeto.setNomeAutor("Cora Coralina");
        newObjeto.setTituloLivro("A Volta dos que Não Foram");
        newObjeto.setISBN(313513510000L);

        System.out.println("Nome do livro: " + newObjeto.getTituloLivro() + "\n" + "Autor: " + newObjeto.getNomeAutor() + "\n" + "ISBN: " + newObjeto.getISBN());

        //Tentativa de instanciar uma classe abstrata, compilador informará não ser possível
        //Abstrata newAbstrata = new Abstrata();
    }
}
