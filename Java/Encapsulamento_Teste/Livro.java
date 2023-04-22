//Criação da classe Livro
public class Livro {
    //Atributos privados
    private String nomeAutor;
    private String tituloLivro;
    private long ISBN;

    //---------------------------------------------------
    //criação do método get() para o atributo nomeAutor
    public String getNomeAutor(){
        return nomeAutor;
    }
    //criação do método set() para o atributo nomeAutor
    public void setNomeAutor(String nome){
        this.nomeAutor = nome;
    }
    //---------------------------------------------------
    
    //criação do método get() para o atributo tituloLivro
    public String getTituloLivro(){
        return tituloLivro;
    }
    //criação do método set() para o atributo tituloLivro    
    public void setTituloLivro(String titulo){
        this.tituloLivro = titulo;
    }
    //---------------------------------------------------
    // criação do método get() para o atributo ISBN
    public long getISBN(){
        return ISBN;
    }    
    // criação do método set() para o atributo ISBN
    public void setISBN(long ISBN){
        this.ISBN = ISBN;
    }
    //---------------------------------------------------
}