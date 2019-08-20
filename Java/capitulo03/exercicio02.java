import java.util.Scanner;

class exercicio02 {
    public static void main(String[] args){
        
        // Declaracao da variaveis
        double nota1, nota2, nota3, media;
        
        // Entrada
        Scanner s = new Scanner(System.in);
        System.out.println("Entre com as tres notas");
        nota1 = Double.parseDouble(s.next());
        nota2 = Double.parseDouble(s.next());
        nota3 = Double.parseDouble(s.next());
        
        // Calculos
        media = (nota1 + nota2 + nota3)/3.0;
        
        // Saida
        System.out.println(
            "A media da nota " + 
            nota1 + ", " + nota2 + "e " + nota3 +
            " eh " + media);
        
    }
}