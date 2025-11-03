import java.time.Duration;
import java.time.LocalDateTime;
import java.util.Comparator;

public class BuscaBinaria<T extends Comparable<T>> implements IBuscador<T> {

	@Override
    public long getComparacoes() {
        return 0;
    }

    @Override
    public double getTempo() {
        return 0.0;
    }

    @Override
    public T buscar(T dado, T[] dados) {
        int esq = 0;
        int dir = dados.length-1;

        int meio = esq +(dir - esq)/2;
        if (dados [meio].compareTo(dado) == 0) {
            return dados [meio];
        }
        if (dados[meio].compareTo(dado)<0) {
            esq = meio+1;
        }else{
            dir = meio - 1;
        }

        return null;
    }
}