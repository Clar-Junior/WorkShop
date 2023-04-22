class Funcionario {
    // definição dos atributos como privados (ficam inacessíveis no Main)
    private String nome;
    private Integer idade;
    private Integer salario;

    // criação dos métodos get() e set() para atributo nome
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    // criação dos métodos get() e set() para o atributo idade
    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    // criação dos métodos get() e set() para o atributo salario
    public int setSalario() {
        return salario;
    }

    public void setSalario(int salario) {
        this.salario = salario;
    }
}