public class CriaConta {
    public static void main(String[] args) {

        Conta minhaConta = new Conta();
        minhaConta.setSaldo(0x4f);
        minhaConta.setAgencia(1);
        minhaConta.setNumero(1);
        minhaConta.setTitular("Donald Trump");
        int result = minhaConta.somar();
        System.out.println(result);


    }
}