package com.oopslab.LAB9;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class QuizApp extends JFrame implements ActionListener {

    private JLabel lblQuestion;
    private JRadioButton option1, option2, option3, option4;
    private ButtonGroup optionsGroup;
    private JButton btnSubmit, btnNext, btnFinish;

    private int currentQuestionIndex = 0;
    private int score = 0;

    private final String[] questions = {
            "What is 9 - 5?",
            "What is 3 * 8?",
            "What is 5 + 3?",
            "What is 8 / 4?"
    };

    private final String[][] options = {
            {"9","0","4","5"},
            {"2","21","24","42"},
            {"6", "8", "7", "9"},
            {"2","0","4","8"}
    };

    private final int[] correctAnswers = {3, 2, 1, 0}; 

    public QuizApp() {
        setTitle("Quiz Application");
        setSize(500, 300);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new GridLayout(6, 1, 10, 10));

        
        lblQuestion = new JLabel();
        option1 = new JRadioButton();
        option2 = new JRadioButton();
        option3 = new JRadioButton();
        option4 = new JRadioButton();
        optionsGroup = new ButtonGroup();

        btnSubmit = new JButton("Submit");
        btnNext = new JButton("Next");
        btnFinish = new JButton("Finish");

        
        optionsGroup.add(option1);
        optionsGroup.add(option2);
        optionsGroup.add(option3);
        optionsGroup.add(option4);

        
        add(lblQuestion);
        add(option1);
        add(option2);
        add(option3);
        add(option4);
        add(btnSubmit);
        add(btnNext);
        add(btnFinish);

        
        btnSubmit.addActionListener(this);
        btnNext.addActionListener(this);
        btnFinish.addActionListener(this);

        
        btnNext.setEnabled(false);
        btnFinish.setEnabled(false);

        
        loadQuestion();

        setVisible(true);
    }

    private void loadQuestion() {
        lblQuestion.setText(questions[currentQuestionIndex]);
        option1.setText(options[currentQuestionIndex][0]);
        option2.setText(options[currentQuestionIndex][1]);
        option3.setText(options[currentQuestionIndex][2]);
        option4.setText(options[currentQuestionIndex][3]);
        optionsGroup.clearSelection();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == btnSubmit) {
            int selectedOption = getSelectedOption();
            if (selectedOption == -1) {
                JOptionPane.showMessageDialog(this, "Please select an option!", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            
            if (selectedOption == correctAnswers[currentQuestionIndex]) {
                score++;
            }

            btnSubmit.setEnabled(false);
            btnNext.setEnabled(true);
            if (currentQuestionIndex == questions.length - 1) {
                btnNext.setEnabled(false);
                btnFinish.setEnabled(true);
            }

        } else if (e.getSource() == btnNext) {
            currentQuestionIndex++;
            loadQuestion();
            btnSubmit.setEnabled(true);
            btnNext.setEnabled(false);

        } else if (e.getSource() == btnFinish) {
            JOptionPane.showMessageDialog(this, "Quiz Finished! Your score: " + score + "/" + questions.length, "Final Score", JOptionPane.INFORMATION_MESSAGE);
            System.exit(0);
        }
    }

    private int getSelectedOption() {
        if (option1.isSelected()) return 0;
        if (option2.isSelected()) return 1;
        if (option3.isSelected()) return 2;
        if (option4.isSelected()) return 3;
        return -1; 
    }

    public static void main(String[] args) {
        new QuizApp();
    }
}

