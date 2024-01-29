#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// prototypes of functions
int add_mark(int);
int check_answer(char , char , int );
//int print_question_and_check_answer(struct , int );


int add_mark(int marks) // function that adds 1 mark each time the inputted answer is correct
{
  return marks + 1;
}

int check_answer(char inputted_answer, char correct_answer, int total_marks)
// function to match user inputted answer to correct answer. If the answer is correct, marks are added and if its wrong marks are not added.
 {  if (inputted_answer == toupper(correct_answer) || inputted_answer == tolower(correct_answer))
  // if capital case of answer or lower case of answer is correct, marks are added.
    {
    total_marks = add_mark(total_marks);
    return total_marks;
  } else
  // if the answer is not correct marks are not added.
  {
    return total_marks;
    }
}
// structure is made for questions as each of them have the same three parts repeated each time.
struct Question {
  char question_title[100];
  char * options[4];
  char correct_answer;
} question;


print_question_and_check_answer(struct Question q1, int total_marks)
// function to print question and its options. users input is taken here and checked against the actual answer.
 {
  char inputted_answer;
  printf("%s", q1.question_title);
  printf("\n A. %s", q1.options[0]);
  printf("\n B. %s", q1.options[1]);
  printf("\n C. %s", q1.options[2]);
   printf("\n D. %s", q1.options[3]);
  printf("\n");
  // get and check answer
  printf("My answer is:");
  scanf(" %c", &inputted_answer);
  total_marks = check_answer(inputted_answer, q1.correct_answer, total_marks);
  return total_marks; // total marks are returned
}

// calling the question struct and adding all the information thats related to the questions.
struct Question q1 =
{
  "Which animal has the worst memory?",
  {"Dog", "Rat", "Elephant", "Dolphin"},
  'C'
};

struct Question q2 =
{
  "MS-Word is an example of?",
  {"Operating System", "Processing Device", "Application Software", "Input Device"},
  'C'
};

struct Question q3 =
{
  "What is the capital of Finland?",
  {"Conakry", "Helsinki", "Prague", "None of the above"},
   'B'
};

struct Question q4 =
{
  "Q: Who is known as 'Little Corporal'?",
  {"Adolf Hitler", "Napolean Bonaparte", "William E.Gladstone", "Classical Music"},
  'B'
};

struct Question q5 =
{
  "Which country has no cinema theatres?",
  {"Saudi Arabia", "Iraq", "Pennsylvania", "None of the above"},
  'A'
};

struct Question q6 =
{
  "Dirham is the currency of which country?",
  {"UAE", "Morocco", "Brazil", "Singapore"},
  'A'
};

struct Question q7 =
{
  "When a gas is turned into a liquid, the process is called?",
  {"Condensation", "Evaporation", "Deposition", "Sublimation"},
    'A'
};

struct Question q8 =
{
  "The international day of Peace is observed annually in which month?",
  {"September", "August", "October", "July"},
  'A'
};

struct Question q9 =
{
  "What is the name of a person who controls a football match?",
  {"Goalkeeper", "Umpire", "Spectator", "Referre"},
  'D'
};

struct Question q10 =
{
  "The blue colour of the clear sky is due to?",
  {"Diffraction of light", "Dispersion of light", "Reflection of light", "Refraction of light"},
  'B'
};
struct Question q11 =
{
  "Which animal can create the loudest sound among any living creature?",
  {"Whale shark", "Gibbon", "Humpback Whales", "Howler monkey"},
  'C'
  };

struct Question q12 =
{
  "A computer cannot boot if it does not have the ",
  {"Compiler", "Loader", "Operating system", "Assembler"},
  'C'
};

struct Question q13 =
{
  "Ankara is the capital of which country",
  {"Uruguay", "Turkey", "Uganda", "Vanuatu"},
  'B'
};

struct Question q14 =
{
  "Which of the following is used in pencils?",
  {"Silicon", "Phosphorous", "Charcoal", "Graphite"},
  'D'
};

struct Question q15 =
{
  "What is the capital of china?",
  {"Santiago", "Beijing", "Havana", "None"},
  'B'
  };

struct Question q16 =
{
  "Smallest of all the continents?",
  {"Asia", "Africa", "America", "Australia"},
  'D'
};

struct Question q17 =
{
  "The National Game of Japan is",
  {"Sumo wrestling", "Ice Hockey", "Karate", "Tennis"},
  'A'
};

struct Question q18 =
{
  "Oval stadium in England is associated with",
  {"polo", "Cricket", "Hockey", "Football"},
  'B'
};

struct Question q19 =
{
  "Who invented Telephone?",
  {"Alexander Graham Bell", "Thomas Edison", "Benjamin Franklin", "James Watt"},
  'A'
  };

struct Question q20 =
{
  "We remember Charles Babbage (1792-1871) for what ?",
  {"Radio-Telegraphy", "Steam Boating", "Computers", "Telescopes"},
  'C'
};
struct Question q21 =
{
  "Atomic theory was devised by",
  {"Mosley", "John Dalton", "Daimler", "None of these"},
  'B'
};

struct Question q22 =
{
  "Who Discovered The Nucleus of a Cell?",
  {"Otto Hahn", "John Dalton", "Robert Brown", "Marie Curie"},
  'C'
};

struct Question q23 =
{
  "Which does NOT belong to this group?",
  {"Switch", "Bulb", "Filament", "Rope"},
  'D'
};
struct Question q24 =
{
  "Select the most appropriate synonym of the given word. 'Acknowledgement'",
  {"Confirmation", "Elimination", "Compensation", "Confusion"},
  'A'
};

struct Question q25 =
{
  "Correct the given sentence grammatically. 'Shreya, who she is my best friend, is a singer.' ",
  {"Shreya, she who is my best friend, is a singer.", "Shreya, who is my best friend, is a singer.", "Shreya, is my best friend, who she is a singer.", "All of the above"},
  'B'
};



int main() {
  struct Person {
   char  first_name[50];
   char  last_name[50];
   long int  registration_number[100];
   char semester [10];
  } person;
int i;

  int total_marks = 0;

  // PRINT TITLE AND OBTAIN USER INFORMATION
  printf("\t\tGENERAL KNOWLEDGE EXAMINATION\n");
  printf("************************************************************************ ***********\n");
  printf("First Name: ");
  scanf("%s", &person.first_name);
  printf("Last Name: ");
  scanf("%s", &person.last_name);
  printf("\nRegistration number:");
  scanf("%d", & person.registration_number);
  printf("\nSemester:");
  scanf("%s", & person.semester);
  printf("\n");
  printf("**********************************************************************************\n\n");
  printf("Rules:\n");
  printf("1. Please make sure that you enter the correct name and registration number. \n");
  printf("2. To indicate your answer, type the correct letter only once for each question.\n");
  printf("3. Do not use the internet or any other external help.\n\n");
  printf("**********************************************************************************\n\n");

  // QUESTION 1
  for (i=1; i<11;i++)
    {int r=rand()%25;
     printf("Q%d: ", i);

        if (r==1)
    {total_marks = print_question_and_check_answer(q1, total_marks);
  printf("\n");
    }
    else if (r==2)
        { total_marks = print_question_and_check_answer(q2, total_marks);
  printf("\n");}
  else if (r==3)
  {
     total_marks = print_question_and_check_answer(q3, total_marks);
  printf("\n");
  }
  else if (r==4)
  {
      total_marks = print_question_and_check_answer(q4, total_marks);
  printf("\n");
  }
  else if (r==5)
  {
      total_marks = print_question_and_check_answer(q5, total_marks);
  printf("\n");
  }
  else if (r==6)
  {
      total_marks = print_question_and_check_answer(q6, total_marks);
  printf("\n");
   }
  else if (r==7)
  {
      total_marks = print_question_and_check_answer(q7, total_marks);
  printf("\n");
  }
  else if (r==8)
  {
      total_marks = print_question_and_check_answer(q8, total_marks);
  printf("\n");
  }
  else if (r==9)
  {
      total_marks = print_question_and_check_answer(q9, total_marks);
  printf("\n");
  }
  else if (r==10)
  {
      total_marks = print_question_and_check_answer(q10, total_marks);
  printf("\n");
  }
  else if (r==11)
  {
      total_marks = print_question_and_check_answer(q11, total_marks);
  printf("\n");
  }
  else if (r==12)
  {
        total_marks = print_question_and_check_answer(q12, total_marks);
  printf("\n");
  }
  else if (r==13)
  {
      total_marks = print_question_and_check_answer(q13, total_marks);
  printf("\n");
  }
  else if (r==14)
  {
      total_marks = print_question_and_check_answer(q14, total_marks);
  printf("\n");
  }
  else if (r==15)
  {
      total_marks = print_question_and_check_answer(q15, total_marks);
  printf("\n");
  }
  else if (r==16)
  {
      total_marks = print_question_and_check_answer(q16, total_marks);
  printf("\n");
  }
  else if (r==17)
  {
      total_marks = print_question_and_check_answer(q17, total_marks);
  printf("\n");
  }
   else if (r==18)
  {
      total_marks = print_question_and_check_answer(q18, total_marks);
  printf("\n");
  }
  else if (r==19)
  {
      total_marks = print_question_and_check_answer(q19, total_marks);
  printf("\n");
  }
  else if (r==20)
  {
      total_marks = print_question_and_check_answer(q20, total_marks);
  printf("\n");
  }
  else if (r==21)
  {
      total_marks = print_question_and_check_answer(q21, total_marks);
  printf("\n");
  }
  else if (r==22)
  {
      total_marks = print_question_and_check_answer(q22, total_marks);
  printf("\n");
  }
  else if (r==23)
  {
      total_marks = print_question_and_check_answer(q23, total_marks);
      printf("\n");
  }
  else if (r==24)
  {
      total_marks = print_question_and_check_answer(q24, total_marks);
  printf("\n");
  }
  else
  {
      total_marks = print_question_and_check_answer(q10, total_marks);
  printf("\n");
  }
  }

  printf("******************************************************************\n\n");
  // print exam details
  printf("Marks Obtained: %d\n", total_marks);
  printf("Total Marks: 10\n");

  float percentage;
  percentage= ((float)total_marks/10)*100;
  printf("Percentage:%.2f\n", percentage);

  if (percentage >=90 && percentage <=100)
  {  printf("Grade: A+");
  }
  else if (percentage >=80 && percentage <=89)
  {
      printf("Grade: A");
  }
   else if (percentage >=70 && percentage <=79)
  {
      printf("Grade: B");
  }
   else if (percentage >=60 && percentage <=69)
  {
      printf("Grade: C");
  }
   else if (percentage >=50 && percentage <=59)
  {
      printf("Grade: D");
  }
  else {
        printf("Grade: F");}
  return 0;
}
