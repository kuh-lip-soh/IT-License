package IHM.TP2;

import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;
import java.util.Timer;

public class graphe extends JFrame {
    public graphe() {
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


    public void randColor(Graphics g) {
        int x, y, z;
        x = (int) (Math.random() * 1000) % 255;
        y = (int) (Math.random() * 1000) % 255;
        z = (int) (Math.random() * 1000) % 255;
        Color c = new Color(x, y, z);
        g.setColor(c);
    }

    public void randFont(Graphics g) {
        int x = (int) (Math.random() * 1000);
        switch (x % 7) {
            case 1:
                g.setFont(new Font("TimesRoman", Font.BOLD, x % 35));
                break;
            case 2:
                g.setFont(new Font("Arial", Font.BOLD, x % 35));
                break;
            case 3:
                g.setFont(new Font("Ink Free Normal", Font.BOLD, x % 35));
                break;
            case 4:
                g.setFont(new Font("Courier New", Font.BOLD, x % 35));
                break;
            case 5:
                g.setFont(new Font("Fixedsys Normal", Font.BOLD, x % 35));
                break;
            case 6:
                g.setFont(new Font("Impact Normal", Font.BOLD, x % 35));
                break;
            case 7:
                g.setFont(new Font("Sergoe Script", Font.BOLD, x % 35));
                break;
        }

    }

    public void dessin1(Graphics g) {
        int i;
        String s;
        for (i = 1; i < 30; i++) {
            randFont(g);
            randColor(g);
            s = "Nombre:=" + i + "\t Carré = " + i * i + "Racine = " + Math.sqrt(i);
            g.drawString(s, 40, 40 * i);
        }
    }

    public void dessin2(Graphics g) {
        randFont(g);
        randColor(g);
        g.drawString("Bienvenue", 500, 350);
    }

    public void dessin3(Graphics g)
    {
        Rectangle2D
        Area area = new Area(new Rectangle(g));
        area.intersect = new Area(new Ovale(g));
    }

    public void paint(Graphics g) {
        super.paint(g);
        dessin3(g);

    }

    public static void main(String[] args) {
        new graphe().setVisible(true);
    }
}
