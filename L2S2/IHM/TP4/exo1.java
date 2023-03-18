import javax.swing.*;
import java.awt.*;

public class exo1 extends JFrame {
    public exo1() {
        super("hm");
        setSize(1024, 640);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public static void main(String[] args) {
        new exo1().setVisible(true);
        JFrame fenetre = new JFrame("Dispositions");
        fenetre.setSize(500, 200);
        fenetre.setLayout(new BorderLayout());
        fenetre.add(new JButton("Un"), BorderLayout.NORTH);
        JButton btnA = new JButton("Bouton (A)");
        fenetre.add(btnA, BorderLayout.PAGE_START);
        JButton btnB = new JButton("Bouton (B)");
        fenetre.add(btnB, BorderLayout.WEST);
        JButton btnC = new JButton("Bouton (C)");
        fenetre.add(btnC, BorderLayout.CENTER);
        JButton btnD = new JButton("Bouton (D)");
        fenetre.add(btnD, BorderLayout.EAST);
        JButton btnE = new JButton("Bouton (E)");
        fenetre.add(btnE, BorderLayout.PAGE_END);
        fenetre.setVisible(true);  
        

    }
}
