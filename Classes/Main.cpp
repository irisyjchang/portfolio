#include <string.h>
#include <iostream>
#include <vector>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include "Media.h"

using namespace std;

void Add(vector <Media*> * structPointers)
{
  int input1;
  cout << "Video Game (0) Music (1) Movie (2)" << endl;
  cin >> input1;
  cin.ignore();

  if (input1 == 0){
    VideoGame* videogame;
    int inputYear;
    int inputRating;
    char inputTitle[10];
    char inputPublisher[10];

    videogame = new VideoGame;
    videogame->type=0;
    cout << "year: " << endl;
    cin >> inputYear;
    videogame->setYear(inputYear);
    cin.ignore();  // Get rid of new line character
    cout << "title: " << endl;
    cin.getline(inputTitle, sizeof(inputTitle));
    videogame->setTitle(inputTitle);
    cout << "publisher: " << endl;
    cin.getline(inputPublisher, sizeof(inputPublisher));
    videogame->setPublisher(inputPublisher);
    cout << "rating: " << endl;
    cin >> inputRating;
    cin.ignore();
    videogame->setRating(inputRating);
    structPointers->push_back(videogame);
  }
  else if (input1 == 1){
    Music* music;
    int inputYear;
    char inputTitle[10];
    int inputDuration;
    char inputArtist[10];
    char inputPublisher[10];

    music = new Music;
    music->type = 1;
    cout << "year: " << endl;
    cin >> inputYear;
    music->setYear(inputYear);
    cin.ignore();  // Get rid of new line character
    cout << "title: " << endl;
    cin.getline(inputTitle, sizeof(inputTitle));
    music->setTitle(inputTitle);
    cout << "publisher: " << endl;
    cin.getline(inputPublisher, sizeof(inputPublisher));
    music->setPublisher(inputPublisher);
    cout << "duration: " << endl;
    cin >> inputDuration;
    cin.ignore();
    music->setDuration(inputDuration);
    cout << "artist: " << endl;
    cin.getline(inputArtist, sizeof(inputArtist));
    music->setArtist(inputArtist);
    structPointers->push_back(music);
  }
  else if (input1 == 2){
    Movie* movie;
    int inputYear;
    int inputRating;
    int inputDuration;
    char inputTitle [10];
    char inputDirector[10];

    movie = new Movie;
    movie->type = 2;
    cout << "title: " << endl;
    cin.getline(inputTitle, sizeof(inputTitle));
    movie->setTitle(inputTitle);
    cout << "year: " << endl;
    cin >> inputYear;
    cin.ignore();  // Get rid of new line character
    movie->setYear(inputYear);
    cout << "director: " << endl;
    cin.getline(inputDirector, sizeof(inputDirector));
    movie->setDirector(inputDirector);
    cout << "rating: " << endl;
    cin >> inputRating;
    cin.ignore();
    movie->setRating(inputRating);
    cout << "duration: " << endl;
    cin >> inputDuration;
    cin.ignore();
    movie->setDuration(inputDuration);
    structPointers->push_back(movie);
  }
}

void Search(vector <Media*> * structPointers)
{
  VideoGame videogame;
  Movie movie;
  Music music;
   int year;
  char title[20];
  int input2;
  Media* child; // cast parent to child

  cout << "title (0) or year (1)";
  cin >> input2;
  cin.ignore();
  if (input2 == 0){
    cout << "title: ";
    cin.getline(title, sizeof(title));
    for(vector<Media*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
      child = (Media*)(*it);
      if (!strcmp(child->getTitle(), title)){
	if (child->type == 0){
	  VideoGame* childNew = static_cast<VideoGame*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getRating() << " " << childNew->getYear() << " " << childNew->getPublisher() << endl;
	}else if(child->type == 1){
	  Music* childNew = static_cast<Music*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getArtist() << " " << childNew->getYear() << " " << childNew->getPublisher() << " " <<childNew->getDuration() << endl;
	}else if (child->type ==2){
	  Movie* childNew = static_cast<Movie*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getDirector() << " " << childNew->getYear() << " " << childNew->getRating() << " " << childNew->getDuration() << endl;
	}
      }
    }
  }else if(input2 == 1){
    cout << "year: ";
    cin >> year;
    cin.ignore();
    for(vector<Media*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
      child = (Media*)(*it);
      if (child->getYear()==year){
	if (child->type == 0){
	  VideoGame* childNew = static_cast<VideoGame*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getRating() << " " << childNew->getYear() << " " << childNew->getPublisher() << endl;
	}else if(child->type == 1){
	  Music* childNew = static_cast<Music*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getArtist() << " " << childNew->getYear() << " " << childNew->getPublisher() << " " << childNew->getDuration() << endl;
	}else if (child->type ==2){
	  Movie* childNew = static_cast<Movie*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getDirector() << " " << childNew->getYear() << " " << childNew->getRating() << " " << childNew->getDuration() << endl;
	}
      }
    }
  }
}



void Delete(vector <Media*> * structPointers)
{
  VideoGame videogame;
  Movie movie;
  Music music;
   int year;
  char title[20];
  int input2;
  Media* child; // cast parent to child
  int input3;

  cout << "title (0) or year (1)";
  cin >> input2;
  cin.ignore();
  if (input2 == 0){
    cout << "title: ";
    cin.getline(title, sizeof(title));
    for(vector<Media*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
      child = (Media*)(*it);
      if (!strcmp(child->getTitle(), title)){
	if (child->type == 0){
	  VideoGame* childNew = static_cast<VideoGame*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getRating() << " " << childNew->getYear() << " " << childNew->getPublisher() << endl;
	}else if(child->type == 1){
	  Music* childNew = static_cast<Music*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getArtist() << " " << childNew->getYear() << " " << childNew->getPublisher() << " " <<childNew->getDuration() << endl;
	}else if (child->type ==2){
	  Movie* childNew = static_cast<Movie*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getDirector() << " " << childNew->getYear() << " " << childNew->getRating() << " " << childNew->getDuration() << endl;
	}
      }
    }
  }else if(input2 == 1){
    cout << "year: ";
    cin >> year;
    cin.ignore();
    for(vector<Media*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
      child = (Media*)(*it);
      if (child->getYear()==year){
	if (child->type == 0){
	  VideoGame* childNew = static_cast<VideoGame*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getRating() << " " << childNew->getYear() << " " << childNew->getPublisher() << endl;
	}else if(child->type == 1){
	  Music* childNew = static_cast<Music*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getArtist() << " " << childNew->getYear() << " " << childNew->getPublisher() << " " << childNew->getDuration() << endl;
	}else if (child->type ==2){
	  Movie* childNew = static_cast<Movie*>(child);
	  cout<< childNew->getTitle() << " " << childNew->getDirector() << " " << childNew->getYear() << " " << childNew->getRating() << " " << childNew->getDuration() << endl;
	}
      }
    }
  }
  cout << "would you like to delete yes (0) or no (1)";
  cin >> input3;
  cin.ignore();
  if (input3 == 0){
    if (input2 == 1){ // year
      for(vector<Media*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
	if(child->getYear()==year){
	  delete *it; // delete record
	  structPointers->erase(it); // remove vector entry
	  return;
	}
      }
    }else if(input2 == 0){ // title
      for(vector<Media*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
	if(!strcmp(child->getTitle(), title)){
	  delete *it; // delete record
	  structPointers->erase(it); // remove vector entry
	  return;
	}
      }
    }
  }
}
int main()
{
  vector <Media*> * structPointers;
  structPointers = new vector <Media*>;
  char input[10];
  // check user input
   while (true){
    cin.getline(input, sizeof(input));
    if (!strcmp(input, "ADD")){
      Add(structPointers);
    }else if(!strcmp(input, "SEARCH")){
      Search(structPointers);
    }else if(!strcmp(input,"DELETE")){
      Delete(structPointers);
    }else if(!strcmp(input,"QUIT")){
      break;
    }else{
      cout << "error\n";
    }
  }
  return 0;
}
