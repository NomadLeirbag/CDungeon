#include <iostream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>

#include "node.hpp"
#include "process.hpp"

using namespace std;

int main() {
	// Node n930("In which all explanations given are inadequate");
	// Node n931("Chapter 2", &n930);

	// Node n932("dragging you and your friends with him.", &n931);
	// Node n933("Musac(c). \"Run!\" shouts the man,", &n932);
	// Node n934("which fills with light and The Sound of", &n933);
	// Node n935("and a Super-Ball(c) goes flying into the ally,", &n934);
	// Node n936("The woman points her Nerf(c) gun at the alley", &n935);
	// Node n937("\"Don't you kids mess with TEH DRAK ENO's servants!\"", &n936);
	// Node n938("\"Good thing we had these Nike(c) running shoes!\"", &n937);
	// Node n939("Suddenly, out of nowhere runs a man and a woman.", &n938);
	// Node n940("\"Hey kid, you wanna be an immortal DRAK LROD?\"", &n939);
	// Node n941("you hear a whisper trying to sound sinuous:", &n940);
	// Node n942("As you approach the alley with your friends,", &n941);
	// Node n943("I wonder what that is?", &n942);
	// Node n944("Its probably nothing.");
	// Node l995[] = {n944, n943};
	// Node n945("The shadow behind that barrel seems to be moving...", 2, l995);
	// Node n946("the inn is engulfed in flame.");
	// Node n947("and even before you stand up to escape,", &n946);
	// Node n948("However, your booze-laden reflexes are slowed", &n947);
	// Node n949("However, even before you can open your mouth,", &n946);
	// Node n950("Run, rabbit run!", &n948);
	// Node n951("Shout \"Fire\" in a crowded inn!", &n949);
	// Node l996[] = {n951, n950};
	// Node n952("and see an advancing wall of fire and death!", 2, l996);
	// Node n953("you glance out the window,", &n952);
	// Node n954("As you chug your 10th mulled cider,", &n953);
	// Node n955("Later that evening...", &n954);
	// Node n956("not something unusual.", &n955);
	// Node n957("but they suggest the barkeep and the healer's daughter", &n956);
	// Node n958("and see some odd things,", &n957);
	// Node n959("You hear some strange noises", &n958);
	// Node n960("That filthy alley", &n945);
	// Node n961("The window across the street", &n959);
	// Node l997[] = {n961, n960};
	// Node n962("Where do you look?", 2, l997);
	// Node n963("the hairs on you neck once again rise!", &n962);
	// Node n964("are sneaking a goat onto the mayor's roof", &n963);
	// Node n965("As you and your friends", &n964);
	// Node n966("down that hill? He must be drunk.", &n965);
	// Node n967("Why the hell is that guy rolling rocks", &n966);
	// Node n968("Sex, drugs and-", &n967);
	// Node n969("Celebration and stuff!", &n968);
	// Node n970("Anyways...", &n969);
	// Node n971("turned out to be a spy for TEH DRAK ENO.", &n970);
	// Node n972("became a Nazi.", &n970);
	// Node n973("died.", &n970);
	// Node l998[] = {n973, n972, n971};
	// Node n974("You don't know what you would do if he", 3, l998);
	// Node n975("who is like a father to you.", &n974);
	// Node n976("It must have been your dog,", &n975);
	// Node n977("but you see nothing.", &n976);
	// Node n978("behind you", &n977);
	// Node n979("to your right", &n977);
	// Node n980("to your left", &n977);
	// Node l999[] = {n980, n979, n978};
	// Node n981("You glance", 3, l999);
	// Node n982("The hairs on your neck rise.", &n981);
	// Node n983("As you are frolicking through the meadow,", &n982);
	// Node n984("You, of course, are excited for The Festival.", &n983);
	// Node n985("Off to a generic start", &n984);
	// Node n986("Chapter 1", &n985);

	// Node n987("until now...", &n986);
	// Node n988("but no one has ever mentioned it to you,", &n987);
	// Node n989("than the rest of your village,", &n988);
	// Node n990("You look suspiciously different", &n989);
	// Node n991("you are an orphan.", &n990);
	// Node n992("Due to an inadequately explained back-story,", &n991);
	// Node n993("and old enough to do more than ogle village girls.", &n992);
	// Node n994("between the ages of too young to plow", &n993);
	// Node n995("You are an innocent young fellow", &n994);
	// Node n996("OK, now on with this adventure thing...", &n995);
	// Node n997("Thief", &n996);
	// Node n998("Mage", &n996);
	// Node n999("Warrior", &n996);
	// Node l1000[] = {n999, n998, n997};
	// Node n1000("Choose your class", 3, l1000);
	Node another(new string[1]{"blah blah blah"});
	Node n1(new string[1]{"good"}, new Node[1]{another});
	Node n2(new string[1]{"bad"}, new Node[1]{another});
	Node test(2, new string[2] {"hello", "world"}, 2, new Node[2] {n1, n2});
	mkdir("Dungeon", 0700);
	chdir("Dungeon");
	process(&test);
}