import javax.swing.*;
import java.awt.*;

public class graphe3 extends JFrame {
    public graphe3() {
        super("Allo ?");
        setSize(1280, 720);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void Rectangle(Graphics g, int x, int y, int w, int h) {
        g.drawRect(x, y, w, h);
    }

    public void fillInsideR(Graphics g, int x, int y, int w, int h) {
        g.fillRect(x + 2, y + 2, w - 3, h - 3);
    }

    public void Ovale(Graphics g, int x, int y, int w, int h) {
        g.drawOval(x, y, w, h);
    }

    public void fillInsideO(Graphics g, int x, int y, int w, int h) {
        g.fillOval(x+2, y + 2, w - 3, h - 3);
    }

    public void dessin1(Graphics g) {
        int x = 10, y = 35, w = 60, h = 100;
        int x2 = x;
        for (int i = 0; i < 3; i++) {
            Color c = new Color(60 * i, 240 - i * 80, 40 * i + 20);
            g.setColor(c);
            Rectangle(g, x2, y, w, h);
            Color c2 = new Color(240 - i * 80, i * 80, 40 * i);
            g.setColor(c2);
            fillInsideR(g, x2, y, w, h);
            x2 += w + 20;
        }
    }

    public void dessin2(Graphics g) {
        int x = 10, y = 35, w = 60, h = 100;
        int x2 = x;
        for (int i = 0; i < 3; i++) {
            Color c = new Color(60 * i, 240 - i * 80, 40 * i + 20);
            g.setColor(c);
            Ovale(g, x2, y, w, h);
            Color c2 = new Color(240 - i * 80, i * 80, 40 * i);
            g.setColor(c2);
            fillInsideO(g, x2, y, w, h);
            x2 += w + 20;
        }
    }

    public void paint(Graphics g) {
        super.paint(g);
        dessin(g);
    }

    public static void main(String[] args) {
        new graphe3().setVisible(true);
    }
}
