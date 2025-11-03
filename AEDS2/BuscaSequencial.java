import java.time.Duration;
import java.time.LocalDateTime;

public class BuscaSequencial<T extends Comparable<T>> implements IBuscador<T> {

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
