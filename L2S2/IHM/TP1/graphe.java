import javax.swing.*;
import java.awt.*;

public class graphe extends JFrame {
    public graphe() {
        super("Exemple de dessin dans un JFrame");
        setSize(1280, 720);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void dessin(Graphics g) {
        for(int i=0;i<200;i+=2)
        g.drawLine(1,i,200,i);
    }

    public void paint(Graphics g){
        super.paint(g);
        dessin(g);
    }
    public static void main (String[] args){
        new graphe().setVisible(true);
    }
}
