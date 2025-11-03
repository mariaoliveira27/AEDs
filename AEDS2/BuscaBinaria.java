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
    public T buscar(T dado) {
        return null;
    }
}