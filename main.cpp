#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define structures or classes to represent questions and scores for each dimension.

struct Question {
    string text;
    int score; // Score assigned based on user's response (e.g., +1 or -1).
};

void drawLine(){
    for(int line = 1; line < 80; line++ ){
        cout << "_" ;
    }

    cout << endl;
}

// Define functions for each personality dimension to ask questions and calculate scores.

int AskIntroversionQuestions() {
    int introversionScore = 0; // Initialize the score for the Introversion dimension.

    // Define a vector of questions for the Introversion dimension.
    vector<Question> introversionQuestions = {
            {"I often prefer spending time alone or with a small group of close friends rather than attending large social gatherings.", 1},
            {"I feel drained or exhausted after extended periods of social interaction.", 1},
            {"I enjoy solitary activities like reading, writing, or hobbies.", 1},
            {"I tend to think before I speak and prefer listening to others in group conversations.", 1},
            {"I value deep one-on-one conversations more than casual chit-chat.", 1}
    };

    cout << "\nAnswer the following questions to assess your Introversion (I) vs. Extroversion (E) preference:" << endl;

    drawLine();

    // Loop through the questions and ask the user for their responses.
    for (size_t i = 0; i < introversionQuestions.size(); ++i) {
        cout << "Question " << (i + 1) << ": " << introversionQuestions[i].text << endl;
        cout << "Enter 1 if you agree or 0 if you disagree: ";

        int userResponse;
        cin >> userResponse;
        cout <<"\n";

        // Validate the user's response (1 or 0).
        while (userResponse != 0 && userResponse != 1) {
            cout << "Invalid response. Please enter 1 if you agree or 0 if you disagree: ";
            cin >> userResponse;
        }

        // Update the introversion score based on the user's response.
        introversionScore += (userResponse == 1) ? 1 : -1;
    }

    return introversionScore; // Return the final Introversion score.
}


int AskIntuitionQuestions() {
    // Implement a function to ask questions related to Intuition vs. Sensing.
    int intuitionScore = 0; // Initialize the score for the Intuition dimension

    // Define a vecotr of questions for the Intuition dimension
    vector<Question> intuitionQuestions ={
            {"I often focus on future possibilities and potential outcomes.", 1},
            {"I enjoy exploring abstract concepts and ideas.", 1},
            {"I trust my gut feelings and instincts when making decisions.",1},
            {"I'm more interested in the big picture than in specific details.",1},
            {"I find patterns and connections between seemingly unrelated things fascinating.",1}
    };

    cout << "\nAnswer the following questions to assess your Intuition (N) vs. Sensing (S) preference:" << endl;

    drawLine();

    // Loop through the questions and ask the user for their responses
    for(size_t i = 0; i < intuitionQuestions.size(); i++){
        cout << "Question" << (i+1) << ":" << intuitionQuestions[i].text << endl;
        cout << "Enter 1 if you agree or 0 if you disagree: ";

        int userResponse;
        cin >> userResponse;
        cout <<"\n";

        //Validate the user's response (1 or 0)
        while(userResponse !=0 && userResponse != 1){
            cout << "Invalid response. Please enter 1 if you agree or 0 if you disagree: ";
            cin  >> userResponse;
        }

        // Update the intuition score based on the user's response
        intuitionScore += (userResponse == 1) ? 1 : -1;
    }

    return intuitionScore; // Return the final Intuition score
}

int AskThinkingQuestions() {
    // Implement a function to ask questions related to Thinking vs. Feeling.
    int thinkingScore = 0; // Initialize the score for the Thinking dimension

    // Define a vector of questions for the Intuition dimension
    vector<Question> thinkingQuestions ={
            {"I tend to make decisions based on logic, reason, and objective analysis.", 1},
            {"I value honesty and believe it's more important to be truthful than to spare someone's feelings.", 1},
            {"I find it easier to provide constructive criticism than to offer emotional support.",1},
            {"I prefer making decisions by evaluating pros and cons rather than considering how others feel.",1},
            {"I tend to suppress or analyze my emotions rather than openly expressing them.",1}
    };

    cout << "\nAnswer the following questions to assess your Thinking (T) vs. Feeling (F) preference:" << endl;

    drawLine();

    // Loop through the questions and ask the user for their responses
    for(size_t i = 0; i < thinkingQuestions.size(); i++){
        cout << "Question" << (i+1) << ":" << thinkingQuestions[i].text << endl;
        cout << "Enter 1 if you agree or 0 if you disagree: ";

        int userResponse;
        cin >> userResponse;
        cout <<"\n";

        //Validate the user's response (1 or 0)
        while(userResponse !=0 && userResponse != 1){
            cout << "Invalid response. Please enter 1 if you agree or 0 if you disagree: ";
            cin  >> userResponse;
        }

        // Update the thinking score based on the user's response
        thinkingScore += (userResponse == 1) ? 1 : -1;
    }

    return thinkingScore; // Return the final Thinking score
}

int AskJudgingQuestions() {
    // Implement a function to ask questions related to Judging vs. Perceiving.
    int judgingScore = 0; // Initialize the score for the Thinking dimension

    // Define a vector of questions for the Intuition dimension
    vector<Question> judgingQuestions ={
            {"I like to plan and organize my daily activities and follow a schedule.", 1},
            {"I feel uncomfortable with last-minute changes and prefer stability.", 1},
            {"I'm motivated by deadlines and work best when I have a clear plan.",1},
            {"I prefer closure and finality in decisions rather than leaving options open.",1},
            {"I enjoy completing tasks and checking them off a to-do list.",1}
    };

    cout << "\nAnswer the following questions to assess your Judging (J) vs. Sensing (S) preference:" << endl;

    drawLine();

    // Loop through the questions and ask the user for their responses
    for(size_t i = 0; i < judgingQuestions.size(); i++){
        cout << "Question" << (i+1) << ":" << judgingQuestions[i].text << endl;
        cout << "Enter 1 if you agree or 0 if you disagree: ";

        int userResponse;
        cin >> userResponse;
        cout <<"\n";

        //Validate the user's response (1 or 0)
        while(userResponse !=0 && userResponse != 1){
            cout << "Invalid response. Please enter 1 if you agree or 0 if you disagree: ";
            cin  >> userResponse;
        }

        // Update the thinking score based on the user's response
        judgingScore += (userResponse == 1) ? 1 : -1;
    }

    return judgingScore; // Return the final Thinking score
}

// Define a function to calculate the user's MBTI personality type based on scores.

string CalculateMBTI(int introversionScore, int intuitionScore, int thinkingScore, int judgingScore) {
    // Implement the logic to determine the user's personality type based on scores.
    // Return the MBTI type as a string (e.g., "INFJ").
    string mbtiType = ""; // Initialize the MBTI type as empty string

    // Determine the Introversion/Extroversion (I/E) dimension.
    char ieDimension = (introversionScore >= 0) ? 'I' : 'E';

    // Determine the Intuition/Sensing (N/S) dimension.
    char nsDimension = (intuitionScore >= 0) ? 'N' : 'S';

    // Determine the Thinking/Feeling (T/E=F) dimension.
    char tfDimension = (thinkingScore >= 0) ? 'T' : 'F';

    // Determine the Judging/Perceiving (J/P) dimension.
    char jpDimension = (judgingScore >= 0) ? 'J' : 'P';

   // Combine the four dimensions to form the MBTI type
   mbtiType = string(1, ieDimension) +
              string(1, nsDimension) +
              string(1, tfDimension) +
              string(1, jpDimension) ;

   return mbtiType; // return to calculate MBTI type as string
}

string GetMBTIDescription(const string& mbtiType) {
    string description = "Description not available.";

    if (mbtiType == "ISTJ") {
        description = "ISTJs are dependable and responsible individuals. They value tradition, order, and structure.";
    } else if (mbtiType == "ISFJ") {
        description = "ISFJs are compassionate and nurturing. They prioritize harmony and helping others.";
    } else if (mbtiType == "INFJ") {
        description = "INFJs are insightful and empathetic. They are deeply committed to their values and relationships.";
    } else if (mbtiType == "INTJ") {
        description = "INTJs are strategic and independent thinkers. They excel at analyzing complex problems.";
    } else if (mbtiType == "ISTP") {
        description = "ISTPs are adaptable and hands-on individuals. They enjoy exploring and solving practical challenges.";
    } else if (mbtiType == "ISFP") {
        description = "ISFPs are artistic and free-spirited. They value creativity and authentic self-expression.";
    } else if (mbtiType == "INFP") {
        description = "INFPs are idealistic and compassionate. They seek to make the world a better place.";
    } else if (mbtiType == "INTP") {
        description = "INTPs are analytical and inventive. They are curious thinkers who enjoy exploring new ideas.";
    } else if (mbtiType == "ESTP") {
        description = "ESTPs are energetic and action-oriented. They thrive in dynamic environments and enjoy taking risks.";
    } else if (mbtiType == "ESFP") {
        description = "ESFPs are spontaneous and enthusiastic. They love being the center of attention and making people laugh.";
    } else if (mbtiType == "ENFP") {
        description = "ENFPs are imaginative and outgoing. They are enthusiastic about life and enjoy inspiring others.";
    } else if (mbtiType == "ENTP") {
        description = "ENTPs are innovative and logical thinkers. They are natural problem solvers and enjoy debate.";
    } else if (mbtiType == "ESTJ") {
        description = "ESTJs are organized and responsible leaders. They value efficiency and structure in all aspects of life.";
    } else if (mbtiType == "ESFJ") {
        description = "ESFJs are sociable and caring individuals. They prioritize harmony and the well-being of others.";
    } else if (mbtiType == "ENFJ") {
        description = "ENFJs are charismatic and empathetic. They are natural leaders who inspire and support their communities.";
    } else if (mbtiType == "ENTJ") {
        description = "ENTJs are assertive and strategic leaders. They excel at planning and executing ambitious goals.";
    }

    return description;
}


// Define a function to display all 16 MBTI personality types
void DisplayAllMBTITypes() {
    cout << "\nAll MBTI Personality Types:" << endl;
    cout << "1. ISTJ - Introversion (I), Sensing (S), Thinking (T), Judging (J) - The Inspector" << endl;
    cout << "2. ISFJ - Introversion (I), Sensing (S), Feeling (F), Judging (J) - The Protector" << endl;
    cout << "3. INFJ - Introversion (I), Intuition (N), Feeling (F), Judging (J) - The Counselor" << endl;
    cout << "4. INTJ - Introversion (I), Intuition (N), Thinking (T), Judging (J) - The Mastermind" << endl;
    cout << "5. ISTP - Introversion (I), Sensing (S), Thinking (T), Perceiving (P) - The Craftsman" << endl;
    cout << "6. ISFP - Introversion (I), Sensing (S), Feeling (F), Perceiving (P) - The Composer" << endl;
    cout << "7. INFP - Introversion (I), Intuition (N), Feeling (F), Perceiving (P) - The Healer" << endl;
    cout << "8. INTP - Introversion (I), Intuition (N), Thinking (T), Perceiving (P) - The Architect" << endl;
    cout << "9. ESTP - Extroversion (E), Sensing (S), Thinking (T), Perceiving (P) - The Dynamo" << endl;
    cout << "10. ESFP - Extroversion (E), Sensing (S), Feeling (F), Perceiving (P) - The Performer" << endl;
    cout << "11. ENFP - Extroversion (E), Intuition (N), Feeling (F), Perceiving (P) - The Champion" << endl;
    cout << "12. ENTP - Extroversion (E), Intuition (N), Thinking (T), Perceiving (P) - The Visionary" << endl;
    cout << "13. ESTJ - Extroversion (E), Sensing (S), Thinking (T), Judging (J) - The Supervisor" << endl;
    cout << "14. ESFJ - Extroversion (E), Sensing (S), Feeling (F), Judging (J) - The Provider" << endl;
    cout << "15. ENFJ - Extroversion (E), Intuition (N), Feeling (F), Judging (J) - The Teacher" << endl;
    cout << "16. ENTJ - Extroversion (E), Intuition (N), Thinking (T), Judging (J) - The Commander" << endl;

}



int main() {
    cout << "\nWelcome to the MBTI Personality Assessment!" << endl;

    // Display all 16 MBTI personality types
    DisplayAllMBTITypes();

    // Initialize scores for each dimension.
    int introversionScore = 0;
    int intuitionScore = 0;
    int thinkingScore = 0;
    int judgingScore = 0;

    // Ask questions and update scores for each dimension.
    introversionScore += AskIntroversionQuestions();
    intuitionScore += AskIntuitionQuestions();
    thinkingScore += AskThinkingQuestions();
    judgingScore += AskJudgingQuestions();


    // Calculate the user's MBTI personality type.
    string mbtiType = CalculateMBTI(introversionScore, intuitionScore, thinkingScore, judgingScore);

    drawLine();

    // Display the user's personality type and a brief description.
    cout << "Your MBTI Personality Type: " << mbtiType << endl;
    string description = GetMBTIDescription(mbtiType);
    cout << "Description:" << description << endl;



    return 0;
}
