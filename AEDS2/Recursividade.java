import java.util.Scanner;

public class Recursividade {

    int somaDeNumerosPares(int n){
        if(n <= 0)
            return 0;

        if(n % 2 == 0){
            return n + somaDeNumerosPares(n - 2);
        } else {
            return somaDeNumerosPares(n - 1);
        }
    }

    double somaDeArray(double[] vetor){
        double soma = 0;
        for(int i = 0; i < vetor.length; i++){
            soma += vetor[i];
        }
        return soma;
    }

    int contadorDeRepeticao(int[] vetor, int numero){
        int contador = 0;

        for(int i = 0; i < vetor.length; i++){
            if(vetor[i] == numero){
                contador++;
            }
        }

        return contador;
    }

    // ====== MAIN ======
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Recursividade r = new Recursividade();

        System.out.print("Digite um número limite: ");
        int limite = sc.nextInt();
        System.out.println("Soma dos pares: " + r.somaDeNumerosPares(limite));

        System.out.print("\nDigite o tamanho do vetor double: ");
        int tamanho = sc.nextInt();
        double[] vetorDouble = new double[tamanho];

        for(int i = 0; i < tamanho; i++){
            System.out.print("Digite o valor da posição " + i + ": ");
            vetorDouble[i] = sc.nextDouble();
        }

        System.out.println("Soma do vetor: " + r.somaDeArray(vetorDouble));

        System.out.print("\nDigite o tamanho do vetor inteiro: ");
        int tamanhoInt = sc.nextInt();
        int[] vetorInt = new int[tamanhoInt];

        for(int i = 0; i < tamanhoInt; i++){
            System.out.print("Digite o valor da posição " + i + ": ");
            vetorInt[i] = sc.nextInt();
        }

        System.out.print("Digite o número que deseja contar: ");
        int numero = sc.nextInt();

        System.out.println("Quantidade de repetições: " +
                r.contadorDeRepeticao(vetorInt, numero));

        sc.close();
    }
}
