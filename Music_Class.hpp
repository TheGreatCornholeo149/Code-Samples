#include <string>
using namespace std;

class Album {

private:
	int Song_total;

public:
	string Album_title;
	string artist;

	Album() {
		Song_total = 1;
		Album_title = "";
		artist = "";
	}

	Album(string new_title, string new_artist, int new_Songtotal) {  
		Song_total = new_Songtotal;
		Album_title = new_title;
		artist = new_artist;
	}

	void add_Albumtitle(string new_title) {
		Album_title = new_title;
	}

	string get_Albumtitle() {
		return Album_title;
	}

	void add_artist(string new_artist) {
		artist = new_artist;
	}

	string get_artist() {
		return artist;
	}

	void add_Songtotal(int new_Songtotal) {
		Song_total = new_Songtotal;
	}

	int get_Songtotal() {
		return Song_total;
	}
};

class Song : public Album {
public:
	string Song_title;
	int length;

	Song() {
		Song_title = "";
		length = 0;
	}

	Song(string new_title, int new_length) {
		Song_title = new_title;
		length = new_length;
	}

	Song(string new_Songtitle, int new_length, string new_Albumtitle, string new_artist) {
		Song_title = new_Songtitle;
		length = new_length;
		Album_title = new_Albumtitle;
		artist = new_artist;
	}

	void add_Songtitle(string new_title) {
		Song_title = new_title;
	}
	string get_Songtitle() {
		return Song_title;
	}
	void add_length(int new_length) {
		length = new_length;
	}
	int get_length() {
		return length;
	}
};