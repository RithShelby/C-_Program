#include<iostream>
int main(){
    std::string question[] = {"1.What is best Spider-Man>?: ",
                              "2.Who is Oggy?:  ",
                              "3.What is love?: ",
                              "4.What is the computer science mean?: "};
    std::string options[][4] = {{"A.Harry","B. Andrew","C. Tom","D.Mal"},
                               {"A. Cartoon Charactor","B. Cat","C. Dog","D.People"},
                               {"A. Sugar","B.Lemon","C. Internet","D. You"},
                               {"A.Computer Hardware","B.Computer Software","C.Language Computer","D.I do not care"}};
    char answerKey[] = {'C','A','D','C'};               

    int size = sizeof(question)/sizeof(question[0]);
    char guess;
    int score;

    for(int i = 0;i < size; i++){
        std::cout<<"-----------------------\n";
        std::cout<<question[i]<<'\n';
        std::cout<<"-----------------------\n";
    
        for(int j=0 ; j < sizeof(options[i])/sizeof(options[i][0]);j++){
        std::cout<< options[i][j]<<'\n';
        }
    
    std::cin >> guess;
    guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout<<"Correct!!\n"; 
        }else{
            std::cout <<"Wrong!!\n";
            std::cout <<"Answer : "<<answerKey[i]<<'\n';
        }
    }
    std::cout<<"-----------------------\n";
    std::cout<<"----------Result-------\n";
    std::cout<<"Correct Guesses : "<<score <<'\n';
    std::cout<<"# of Question : "<<size <<'\n';
    std::cout<<"Score : "<<(score/(double)size)*100 <<"%";
    
    return 0;
}