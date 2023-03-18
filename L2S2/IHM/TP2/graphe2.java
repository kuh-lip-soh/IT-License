import javax.swing.*;
import java.awt.*;

public class graphe2 extends JFrame {
    public graphe2
() {
        super("exemple de dessin dans JFrame");
        setSize(480, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void dessin(Graphics g) {
        // Rectangles:
        // Rectangle01:
        g.setColor(Color.yellow);
        g.fillRect(1700, 80, 100, 50);
        g.setColor(Color.blue);
        g.drawRect(1700, 80, 100, 50);
        Color C2 = new Color(255, 0, 0);
        // Rectangle02:
        g.setColor(Color.black);
        g.fillRect(1500, 80, 100, 50);
        g.setColor(C2);
        g.drawRect(1500, 80, 100, 50);
        // Rectangle03:
        g.setColor(Color.pink);
        g.fillRect(1300, 80, 100, 50);
        Color C3 = new Color(125, 125, 0);
        g.setColor(C3);
        g.drawRect(1300, 80, 100, 50);
        // Ovals:
        // Oval01:
        g.setColor(Color.yellow);
        g.fillOval(1700, 150, 100, 100);
        g.setColor(Color.blue);
        g.drawOval(1700, 150, 100, 100);
        // Oval02:
        g.setColor(Color.black);
        g.fillOval(1500, 150, 100, 100);
        Color C5 = new Color(255, 0, 0);
        g.setColor(C5);
        g.drawOval(1500, 150, 100, 100);
        // Oval03:
        g.setColor(Color.pink);
        g.fillOval(1300, 150, 100, 100);
        Color C6 = new Color(125, 125, 0);
        g.setColor(C6);
        g.drawOval(1300, 150, 100, 100);
        for (int i = 0; i < 200; i = i + 2) {
            g.setColor(Color.yellow);
            g.drawRect(1300, 260, 100 + i, 50 + i);
        }
        Color H;
        for (int i = 0; i < 200; i++) {
            H = new Color((int) (Math.random() * 255), (int) (Math.random() * 255), (int) (Math.random() * 255));
            g.setColor(H);
            g.drawLine(20, i, 200, i);
        }

        int x[] = { 200, 360, 560, 720, 720, 560, 360, 200 };
        int y[] = { 200, 80, 80, 200, 400, 520, 520, 400 };
        g.drawPolygon(x, y, 8);
        Color L = new Color(255, 0, 0);
        g.setColor(L);
        g.fillPolygon(x, y, 8);
    }

    public void paint(Graphics g) {
        super.paint(g);
        dessin(g);
    }

    public static void main(String[] args) {
        new graphe2
    ().setVisible(true);
    };
}