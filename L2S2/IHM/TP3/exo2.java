import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;

public class exo2 extends JFrame {
    public exo2() {
        super("SHUUUUURIKEN");
        setSize(1280, 720);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void dessin1(Graphics g) {
        Graphics2D g2 = (Graphics2D) g;
        Rectangle2D r = new Rectangle2D.Double(30, 40, 50, 80);
        g2.rotate(0.5 / 3);
        Area f = new Area(r);
        g2.setStroke(new BasicStroke(1.0f));
        g2.draw(f);
    }

    public void dessin2(Graphics g) {
        Graphics2D g2 = (Graphics2D) g;
        Rectangle2D r = new Rectangle2D.Double(30, 40, 50, 80);
        g2.rotate((0.5 / 3), 55, 60);
        Area f = new Area(r);
        g2.setStroke(new BasicStroke(1.0f));
        g2.draw(f);
    }

    public void dessin4(Graphics g) {
        Graphics2D g2 = (Graphics2D) g;
        Rectangle2D r = new Rectangle2D.Double(30, 40, 50, 80);
        for (int i = 1; i <= 100; i++) {
            Area f = new Area(r);
            Color c = new Color((int) (Math.random() * 255), (int) (Math.random() * 255), (int) (Math.random() * 255));
            g2.rotate(0.5, 60, 100);
            g2.setColor(c);
            g2.draw(f);
        }
    }

    public void paint(Graphics g) {
        super.paint(g);
        dessin4(g);
    }

    public static void main(String[] args) {
        new exo2().setVisible(true);
    }
}
