
public class Main {
    public static void main (String[] args){
        //Objetos da calsse Funcionario

        Funcionario newObjeto = new Funcionario();
        newObjeto.setNome("Maria");
        newObjeto.setIdade(45);
        

        System.out.println("Nome do funcionário: " + newObjeto.getNome() + "\n" + "Idade do funcionário: " + newObjeto.getIdade());

    }
}