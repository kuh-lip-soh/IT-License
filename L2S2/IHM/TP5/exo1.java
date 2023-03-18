
import javax.swing.JFrame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;

public class exo1 extends JFrame {

	public exo1() {
		initUI();
	}

	public final void initUI() {
		JPanel panel = new JPanel();
		getContentPane().add(panel);
		panel.setLayout(null);

		JButton dimension = new JButton("Dimension");
		JButton deplacer = new JButton("Déplacer");

		JLabel l1 = new JLabel("Largeur :");
		JTextField largeur = new JTextField("0");

		JLabel l2 = new JLabel("Hauteur :");
		JTextField hauteur = new JTextField("0");

		JLabel l3 = new JLabel("X :");
		JTextField positionX = new JTextField("0");

		JLabel l4 = new JLabel("Y :");
		JTextField positionY = new JTextField("0");

		deplacer.setBounds(190, 120, 100, 35);
		dimension.setBounds(80, 120, 100, 35);
		l1.setBounds(10, 10, 55, 35);
		l2.setBounds(10, 50, 55, 35);
		largeur.setBounds(80, 10, 80, 35);
		hauteur.setBounds(80, 50, 80, 35);
		l3.setBounds(220, 10, 50, 35);
		l4.setBounds(220, 50, 50, 35);
		positionX.setBounds(240, 10, 80, 35);
		positionY.setBounds(240, 50, 80, 35);

		dimension.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent event) {
				int w = Integer.parseInt(largeur.getText());
				int h = Integer.parseInt(hauteur.getText());
				setSize(w, h);
			}
		});
		deplacer.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent event) {
				int x = Integer.parseInt(positionX.getText());
				int y = Integer.parseInt(positionY.getText());
				setLocation(x, y);
			}
		});
		panel.add(dimension);
		panel.add(deplacer);
		panel.add(l1);
		panel.add(l2);
		panel.add(largeur);
		panel.add(hauteur);
		panel.add(l3);
		panel.add(l4);
		panel.add(positionX);
		panel.add(positionY);

		setTitle("Exercice 1");
		setSize(380, 200);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(EXIT_ON_CLOSE);

	}

	public static void main(String[] args) {
		exo1 ex = new exo1();
		ex.setVisible(true);
	}
}
