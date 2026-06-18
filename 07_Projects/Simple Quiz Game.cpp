#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Questions
    string questions[5] = {
        "1. What is the capital of Pakistan?",
        "2. Which language is used for OOP programming?",
        "3. How many days are there in a week?",
        "4. Which symbol is used for comments in C++?",
        "5. What is the result of 5 + 3?"
    };

    // Options
    string options[5][4] = {
        {"A. Karachi", "B. Lahore", "C. Islamabad", "D. Peshawar"},
        {"A. HTML", "B. C++", "C. CSS", "D. SQL"},
        {"A. 5", "B. 6", "C. 7", "D. 8"},
        {"A. //", "B. **", "C. ##", "D. $$"},
        {"A. 6", "B. 7", "C. 8", "D. 9"}
    };

    // Correct Answers
    char correctAnswers[5] = {'C', 'B', 'C', 'A', 'C'};

    // Store result of each question
    bool result[5];

    int score = 0;
    int i = 0;
    char answer;

    // Instructions
    cout << "==================================" << endl;
    cout << "        SIMPLE QUIZ GAME" << endl;
    cout << "==================================" << endl;
    cout << "Instructions:" << endl;
    cout << "Choose the correct option (A, B, C, or D)." << endl;
    cout << "----------------------------------" << endl;

    // Present Questions using while loop
    while (i < 5)
    {
        cout << "\n" << questions[i] << endl;

        for (int j = 0; j < 4; j++)
        {
            cout << options[i][j] << endl;
        }

        cout << "Enter your answer: ";
        cin >> answer;

        // Convert lowercase to uppercase
        answer = toupper(answer);

        // Check Answer
        if (answer == correctAnswers[i])
        {
            cout << "Correct Answer!" << endl;
            score++;
            result[i] = true;
        }
        else
        {
            cout << "Wrong Answer!" << endl;
            result[i] = false;
        }

        i++;
    }

    // Display Results
    cout << "\n==================================" << endl;
    cout << "           QUIZ RESULTS" << endl;
    cout << "==================================" << endl;

    cout << "Total Score: " << score << " / 5" << endl;

    cout << "\nQuestion-wise Result:" << endl;

    i = 0;
    while (i < 5)
    {
        cout << "Question " << (i + 1) << ": ";

        if (result[i])
            cout << "Correct";
        else
            cout << "Incorrect";

        cout << endl;

        i++;
    }

    cout << "\nQuiz Ended. Thank You!" << endl;

    return 0;
}