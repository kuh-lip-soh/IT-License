import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import static javax.swing.JFrame.EXIT_ON_CLOSE;

public class exo2 extends JFrame implements ActionListener {
	JButton addition = new JButton("+");
	JButton soustraction = new JButton("-");
	JButton multiplication = new JButton("X");
	JButton division = new JButton("/");
	JButton racine = new JButton("sqrt");
	JButton puissance = new JButton("^");

	JTextField x = new JTextField("");
	JTextField y = new JTextField("");
	JTextField r = new JTextField("0");

	public exo2() {
		initUI();
	}

	public final void initUI() {
		JPanel panel = new JPanel();
		getContentPane().add(panel);
		panel.setLayout(null);

		addition.setBounds(200, 10, 60, 35);
		soustraction.setBounds(280, 10, 60, 35);
		multiplication.setBounds(200, 55, 60, 35);
		division.setBounds(280, 55, 60, 35);
		racine.setBounds(200, 100, 60, 35);
		puissance.setBounds(280, 100, 60, 35);
		x.setBounds(20, 20, 80, 35);
		y.setBounds(110, 20, 80, 35);
		r.setBounds(20, 90, 170, 40);

		panel.add(addition);
		panel.add(soustraction);
		panel.add(multiplication);
		panel.add(division);
		panel.add(racine);
		panel.add(puissance);
		panel.add(x);
		panel.add(y);
		panel.add(r);

		addition.addActionListener(this);
		soustraction.addActionListener(this);
		multiplication.addActionListener(this);
		division.addActionListener(this);
		racine.addActionListener(this);
		puissance.addActionListener(this);

		setTitle("Calculatrice");
		setSize(380, 200);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

	public void actionPerformed(ActionEvent e) {
		double val1 = Double.parseDouble(x.getText());
		double val2 = Double.parseDouble(y.getText());
		double res = 0;
		if (e.getSource() == addition) {
			res = val1 + val2;
			r.setText(Double.toString(res));
		}

		if (e.getSource() == soustraction) {
			res = val1 - val2;
			r.setText(Double.toString(res));
		}
		if (e.getSource() == multiplication) {
			res = val1 * val2;
			r.setText(Double.toString(res));
		}
		if (e.getSource() == division) {
			if (val2 == 0) {
				r.setText("erreur");
			} else {
				res = val1 / val2;
				r.setText(Double.toString(res));
			}
		}
		if (e.getSource() == racine) {
			res = Math.sqrt(val1);
			r.setText(Double.toString(res));
		}
		if (e.getSource() == puissance) {
			res = Math.pow(val1, val2);
			r.setText(Double.toString(res));
		}
	}
	public static void main(String[] args)
	{
	exo2 ex = new exo2();
	ex.setVisible(true);
	}
}
