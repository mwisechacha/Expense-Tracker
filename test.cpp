// question
// choices 
// answer
// correct or incorrect
// next question

#include <iostream>

using namespace std;

struct Questions{
    string questionList[6];
    string choicesList[6][3];
    int answerList[6];
};

void questions(Questions &question){
    string questions[6] = {
        "What is the capital city of Kenya?",
        "Which country has the highest life expectancy?",
        "What is the most common surname in the US?",
        "How many minutes are in a full week?",
        "Which software company is headqueartered in Redmond, Washington?",
        "What was the name of the first computer virus?"
    };

    for (int i = 0; i < 6; i++){
        question.questionList[i] = questions[i];
    }

}

void choices(Questions &question){
    string choices[6][3] = {
        {"1. Nairobi", "2. Mombasa", "3. Kisumu"},
        {"1. Japan", "2. Hong Kong", "3. Singapore"},
        {"1. Smith", "3. Johnson", "4. Williams"},
        {"1. 164", "2. 10,080", "3. 10,440"},
        {"1. Microsoft", "2. Apple", "3. Google"},
        {"1. Creeper", "2. Brain", "3. Elk Cloner"}
    };

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 3; j++){
            question.choicesList[i][j] = choices[i][j];
        }
    }
}


void answers(Questions &question){
    int answers[6] = {1, 2, 1, 2, 1, 1};

    for (int i = 0; i < 6; i++){
        question.answerList[i] = answers[i];
    }
}


void displayQuestion(const Questions &question, int index){
    cout << question.questionList[index] << endl;
}

void displayChoices(Questions &question, int index){
    for (int i = 0; i < 3; i++){
        cout << question.choicesList[index][i] << endl;
    }
}


int main(){
    Questions question;
    questions(question);
    choices(question);
    answers(question);

    for(int i = 0; i<6; i++){
        displayQuestion(question, i);
        displayChoices(question, i);
        
        cout << "Choose(1-3): ";
        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == question.answerList[i]){
            cout << "Correct" << endl;
        }else{
            cout << "Incorrect" << endl;
        }
    }

    return 0;
}