package com.oopslab.LAB9;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;

public class TextEditor extends JFrame implements ActionListener {
    private JTextArea textArea;
    private JLabel statusBar;
    private JMenuItem openMenuItem, saveMenuItem, clearMenuItem, exitMenuItem;

    public TextEditor() {
        setTitle("Text Editor");
        setSize(600, 400);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

       
        textArea = new JTextArea();
        JScrollPane scrollPane = new JScrollPane(textArea);

      
        statusBar = new JLabel(" Characters: 0 | Lines: 0");
        statusBar.setBorder(BorderFactory.createEtchedBorder());

   
        JMenuBar menuBar = new JMenuBar();
        JMenu fileMenu = new JMenu("File");
        openMenuItem = new JMenuItem("Open");
        saveMenuItem = new JMenuItem("Save");
        clearMenuItem = new JMenuItem("Clear");
        exitMenuItem = new JMenuItem("Exit");

        fileMenu.add(openMenuItem);
        fileMenu.add(saveMenuItem);
        fileMenu.add(clearMenuItem);
        fileMenu.add(exitMenuItem);
        menuBar.add(fileMenu);

        setJMenuBar(menuBar);

        
        openMenuItem.addActionListener(this);
        saveMenuItem.addActionListener(this);
        clearMenuItem.addActionListener(this);
        exitMenuItem.addActionListener(this);
        textArea.addCaretListener(e -> updateStatusBar());

   
        add(scrollPane, BorderLayout.CENTER);
        add(statusBar, BorderLayout.SOUTH);

        setVisible(true);
    }

    private void updateStatusBar() {
        String text = textArea.getText();
        int characters = text.length();
        int lines = text.split("\n").length;
        statusBar.setText(" Characters: " + characters + " | Lines: " + lines);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == openMenuItem) {
            openFile();
        } else if (e.getSource() == saveMenuItem) {
            saveFile();
        } else if (e.getSource() == clearMenuItem) {
            textArea.setText("");
            updateStatusBar();
        } else if (e.getSource() == exitMenuItem) {
            System.exit(0);
        }
    }

    private void openFile() {
        JFileChooser fileChooser = new JFileChooser();
        int option = fileChooser.showOpenDialog(this);

        if (option == JFileChooser.APPROVE_OPTION) {
            File file = fileChooser.getSelectedFile();
            try (BufferedReader reader = new BufferedReader(new FileReader(file))) {
                textArea.setText("");
                String line;
                while ((line = reader.readLine()) != null) {
                    textArea.append(line + "\n");
                }
                updateStatusBar();
            } catch (IOException ex) {
                JOptionPane.showMessageDialog(this, "Error opening file: " + ex.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            }
        }
    }

    private void saveFile() {
        JFileChooser fileChooser = new JFileChooser();
        int option = fileChooser.showSaveDialog(this);

        if (option == JFileChooser.APPROVE_OPTION) {
            File file = fileChooser.getSelectedFile();
            try (BufferedWriter writer = new BufferedWriter(new FileWriter(file))) {
                writer.write(textArea.getText());
                JOptionPane.showMessageDialog(this, "File saved successfully!", "Success", JOptionPane.INFORMATION_MESSAGE);
            } catch (IOException ex) {
                JOptionPane.showMessageDialog(this, "Error saving file: " + ex.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            }
        }
    }

    public static void main(String[] args) {
        new TextEditor();
    }
}

