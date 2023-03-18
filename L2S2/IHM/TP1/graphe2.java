import javax.swing.*;
import java.awt.*;

public class graphe2 extends JFrame {
    public graphe2() {
        super("Allo ?");
        setSize(1280, 720);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void Rectangle(Graphics g) {
        g.drawRect(10, 10, 120, 300);
    }

    public void Ovale(Graphics g) {
        g.drawOval(10, 400, 150, 250);
    }

    public void fillR(Graphics g) {
        g.fillRect(10, 10, 120, 300);
    }

    public void fillO(Graphics g) {
        g.fillOval(10, 400, 150, 250);
    }

    public void Poly(Graphics g){
        int[] x= {300,460,842};
        int[] y= {350,120,210};
        g.drawPolygon(x,y,3);
    }

    public void fillP(Graphics g){
        int[] x= {300,460,842};
        int[] y= {350,120,210};
        g.fillPolygon(x,y,3);
    }

    public void paint(Graphics g) {
        super.paint(g);
        Rectangle(g);
        Ovale(g);
        fillR(g);
        Color c = new Color(76, 128, 198);
        g.setColor(c);
        fillO(g);
        Poly(g);
        Color c2 = new Color (240,12,12);
        g.setColor(c2);
        fillP(g);
        
        }

    public static void main(String[] args) {
        new graphe2().setVisible(true);
    }
}
