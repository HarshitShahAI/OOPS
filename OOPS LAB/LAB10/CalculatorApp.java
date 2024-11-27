package LAB10;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class CalculatorApp extends JFrame implements ActionListener, FocusListener, KeyListener {

    private JTextField txtInput1, txtInput2;
    private JLabel lblResult;
    private JButton btnAdd, btnSubtract, btnMultiply, btnDivide;

    public CalculatorApp() {
        setTitle("Basic Calculator");
        setSize(400, 300);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new GridLayout(5, 2, 10, 10));

        JLabel lblInput1 = new JLabel("Enter Number 1:");
        txtInput1 = new JTextField();
        txtInput1.addFocusListener(this);
        txtInput1.addKeyListener(this);

        JLabel lblInput2 = new JLabel("Enter Number 2:");
        txtInput2 = new JTextField();
        txtInput2.addFocusListener(this);
        txtInput2.addKeyListener(this);

        lblResult = new JLabel("Result: ");

        btnAdd = new JButton("Add");
        btnSubtract = new JButton("Subtract");
        btnMultiply = new JButton("Multiply");
        btnDivide = new JButton("Divide");

        btnAdd.addActionListener(this);
        btnSubtract.addActionListener(this);
        btnMultiply.addActionListener(this);
        btnDivide.addActionListener(this);

        add(lblInput1);
        add(txtInput1);
        add(lblInput2);
        add(txtInput2);
        add(btnAdd);
        add(btnSubtract);
        add(btnMultiply);
        add(btnDivide);
        add(lblResult);

        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        try {
            String input1 = txtInput1.getText().trim();
            String input2 = txtInput2.getText().trim();

            if (input1.isEmpty() || input2.isEmpty()) {
                throw new NumberFormatException("Inputs cannot be empty.");
            }

            double num1 = Double.parseDouble(input1);
            double num2 = Double.parseDouble(input2);
            double result = 0;

            if (e.getSource() == btnAdd) {
                result = num1 + num2;
            } else if (e.getSource() == btnSubtract) {
                result = num1 - num2;
            } else if (e.getSource() == btnMultiply) {
                result = num1 * num2;
            } else if (e.getSource() == btnDivide) {
                if (num2 == 0) {
                    JOptionPane.showMessageDialog(this, "Division by zero is not allowed!", "Error", JOptionPane.ERROR_MESSAGE);
                    lblResult.setText("Result: Error");
                    return;
                }
                result = num1 / num2;
            }

            lblResult.setText("Result: " + result);

        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(this, "Invalid input! Please enter numeric values.", "Error", JOptionPane.ERROR_MESSAGE);
            lblResult.setText("Result: Error");
        }
    }

    @Override
    public void focusGained(FocusEvent e) {
        if (e.getSource() == txtInput1) {
            txtInput1.setBackground(Color.LIGHT_GRAY);
        } else if (e.getSource() == txtInput2) {
            txtInput2.setBackground(Color.LIGHT_GRAY);
        }
    }

    @Override
    public void focusLost(FocusEvent e) {
        if (e.getSource() == txtInput1) {
            txtInput1.setBackground(Color.WHITE);
        } else if (e.getSource() == txtInput2) {
            txtInput2.setBackground(Color.WHITE);
        }
    }

    @Override
    public void keyPressed(KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_ENTER) {
            if (txtInput1.hasFocus() || txtInput2.hasFocus()) {
                btnAdd.doClick(); // Default to "Add" for simplicity
            }
        }
    }

    @Override
    public void keyReleased(KeyEvent e) {
    }

    @Override
    public void keyTyped(KeyEvent e) {
    }

    public static void main(String[] args) {
        new CalculatorApp();
    }
}
