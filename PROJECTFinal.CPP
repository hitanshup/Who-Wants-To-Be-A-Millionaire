#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
char ans,w,q,ans2,ans3,a,b,c,d;
int n,life, a1=25, b1=15, c1=10, d1=50, ans1,y;
void fifty(char []);
void sports();
void his();
void affair();
void main()
{
int choice;                                               //Rules
clrscr();
textcolor(GREEN);
textbackground(BLACK);
cout<<"\n Welcome to KBC";
getch();
cout<<"\n\n Let me explain the rules to you";
getch();
cout<<"\n\n You will get to choose from 3 Categories";
getch();
cout<<"\n\n There are a total 13 questions in each Category";
getch();
cout<<"\n\n With each question the difficulty will increase";
getch();
cout<<"\n\n The First Question is worh 5000 Rupees";
getch();
cout<<"\n\n Value of each question will Double as you play";
getch();
cout<<"\n\n You QUIT the game anytime";
getch();
cout<<"\n\n You have 3 Lifelines to choose from\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip";
getch();
cout<<"\n\n Did you undertand the Rules \t";
cin>>q;
if(q=='y'|| q=='Y')
{
clrscr();                                                    //Category
cout<<"\n Okay, Lets choose your Category";
cout<<"\n 1.Sports";
cout<<"\n 2.History";
cout<<"\n 3.Current Affairs";
cout<<"\n 4.Exit";
cout<<"\n Enter Choice \t";
cin>>choice;
switch(choice)
{
case 1: sports();
	break;
case 2: his();
	break;
case 3: affair();
	break;
case 4: exit(0);
	break;
default: cout<<"\n Quit while you can";
}
}
getch();
}

void his()
{
textcolor(YELLOW);
clrscr();
cout<<"\n\n History";
sound(1000);
nosound();
cout<<"\n Q.Who first narrated the life story of Lord Rama to Valimiki?";
cout<<"\n a)Narad \t\t\t b)Vishvamitra \n c)Brahma \t\t\t d)Vasishta";
cout<<"\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')      //a is correct
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Tip \t\t";
	cout<<"\n Enter Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: y=1;
		clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
		cout<<"\n\n Q.Who first narrated the life story of Lord Rama to Valimiki?";
		cout<<"\n a)Narad \t\t\t  c)Brahma";
		cout<<"\n\n Your Answer \t";
		cin>>ans;
		if(ans=='c' || ans=='b' || ans=='d')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n\n You are walking away with Nothing";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5,000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		y=2;
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q.Who first narrated the life story of Lord Rama to Valimiki?";
		cout<<"\n a)Narad \t\t\t b)Vishvamitra \n c)Brahma \t\t\t d)Vasishta";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n\n Sorry but you are walking away with Nothing";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		y=3;
		cout<<"\n Q.Who first narrated the life story of Lord Rama to Valimiki?";
		cout<<"\n a)Narad \t\t\t b)Vishvamitra \n c)Brahma \t\t\t d)Vasishta";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer\t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with Notihng";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='d' || ans=='b' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is a \t\t\t\t";
	cout<<"\n You are walking away with Nothing";
	getch();
	exit(0);
	}
	else if(ans=='a')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations you have won 5,000 Rupees";
	getch();
	}
	}
clrscr();
cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
delay(1000);
cout<<"\n\n Do you want to quit the game?";
cin>>ans2;
if(ans2=='Y'|| ans2=='y')
{
cout<<"\n\n You are leaving with 5,000 Rupees";
getch();
exit(0);
}
else if(ans2=='N' || ans2=='n')
{
clrscr();
cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
}
cout<<"\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')              //b is correct
	{
	if(y==1)
	{
	cout<<"\n 1.Audience Poll \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
			cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='a' || ans=='c' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is b \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
			cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='c' || ans=='d')
			{
			ans1=1;
			cout<<"\n Wrong Answer";
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='c' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is b \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==2)
	{
	cout<<"\n 1.50-50 \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
			cout<<"\n\n b)Rabindranath Tagore  \t \t d)Mirza Galib";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='a' || ans=='c' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is b \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
			cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='c' || ans=='d')
			{
			ans1=1;
			cout<<"\n Wrong Answer";
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='c' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is b \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==3)
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
			cout<<"\n\n b)Rabindranath Tagore  \t \t d)Mirza Galib";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='a' || ans=='c' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is b \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
			cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='a' || ans=='c' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is b \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='b')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
	default: cout<<"\n Error";
	}
	}

	else
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: clrscr();
		y=1;
		cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
		cout<<"\n Q.Who won the Nobel Prize for Literature in 1913?";
		cout<<"\n\n b)Rabindranath Tagore \t\t\t d)Mirza Galib";
		cout<<"\n\n Your Answer \t";
		cin>>ans;
		if(ans=='a' || ans=='d' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is b \t\t\t\t";
		cout<<"\n You are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		y=2;
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
		cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='a' || ans=='d' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is b \t\t\t\t";
		cout<<"\n\n Sorry but you are walking away with 5000 Rupees";
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		y=3;
		cout<<"\n\n Q.Who won the Nobel Prize for Literature in 1913?";                                       //80,000 Rupees
		cout<<"\n\n a)Debendranath Tagore     \t b)Rabindranath Tagore     \n c)Mohammad Iqbal    \t \t d)Mirza Galib";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='d' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='d' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is b \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='a' || ans=='d' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is b \t\t\t\t";
	cout<<"\n You are walking away with 5000 Rupees";
	getch();
	exit(0);
	}
	else if(ans=='b')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations you have won 10,000 Rupees";
	getch();
	}
	}

clrscr();
cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
cout<<"\n\n a)Ravana    \t\t\t b)Bhrata     \n c)Meghnada  \t\t\t d)Vibhishana";
delay(1000);
cout<<"\n\n Do you want to quit the game?";
cin>>ans2;
if(ans2=='Y'|| ans2=='y')
{
cout<<"\n\n You are leaving with 10,000 Rupees";
getch();
exit(0);
}
else if(ans2=='N' || ans2=='n')
{
clrscr();
cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
cout<<"\n\n a)Ravana    \t\t\t b)Bhrata     \n c)Meghnada  \t\t\t d)Vibhishana";
}
cout<<"\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')      //a is correct
	{
	if(y==1)
	{
	cout<<"\n 1.Audience Poll \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
			cout<<"\n\n a)Ravana    \t\t\t b)Bhrata";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='c' || ans=='b' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
			cout<<"\n\n a)Ravana    \t\t\t b)Bhrata     \n c)Meghnada  \t\t\t d)Vibhishana";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='c' ||ans=='b' || ans=='d')
			{
			ans1=1;
			cout<<"\n Wrong Answer";
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='c' ||ans=='b' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 5000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==2)
	{
	cout<<"\n 1.50-50 \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
			cout<<"\n\n a)Ravana    \t\t\t b)Bhrata";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='c' || ans=='b' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
			cout<<"\n\n a)Ravana    \t\t\t b)Bhrata     \n c)Meghnada  \t\t\t d)Vibhishana";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='c' ||ans=='b' || ans=='d')
			{
			ans1=1;
			cout<<"\n Wrong Answer";
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='c' ||ans=='b' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==3)
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
			cout<<"\n\n a)Ravana    \t\t\t b)Bhrata";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='c' || ans=='b' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
			cout<<"\n\n a)Ravana    \t\t\t b)Bhrata     \n c)Meghnada  \t\t\t d)Vibhishana";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='c' || ans=='b' || ans=='d')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
	default: cout<<"\n Error";
	}
	}

	else
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Tip \t\t";
	cout<<"\n Enter Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: y=1;
		clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";     //50-50
		cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";
		cout<<"\n a)Ravana \t\t\t d)Vibhishana";
		cout<<"\n Your Answer \t";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n You are walking away with 5000 Rupees";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		y=2;
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
		cout<<"\n\n a)Ravana    \t\t\t b)Bhrata     \n c)Meghnada  \t\t\t d)Vibhishana";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n\n Sorry but you are walking away with 5000 Rupees";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		y=3;
		cout<<"\n\n Q.According to The Ramayana, whose flag had a veena motif on it?";                                      //40,000 Rupees
		cout<<"\n\n a)Ravana    \t\t\t b)Bhrata     \n c)Meghnada  \t\t\t d)Vibhishana";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer\t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='d' || ans=='b' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is a \t\t\t\t";
	cout<<"\n You are walking away with 5000 Rupees";
	getch();
	exit(0);
	}
	else if(ans=='a')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations you have won 20,000 Rupees";
	getch();
	}
	}
}
void sports()
{
clrscr();
cout<<"\n\n Sports";
sound(1000);
nosound();
cout<<"\n\nQ1. Vijay Kumar won a Silver Medal in which Sport at the Londom Olympics?";                                        //5000 Rupees
cout<<"\n a)Shooting \t\t\t b)Boxing \n c)Badminton \t\t\t d)Wrestling";
cout<<"\n\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')   //d is correct
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Your Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: y=1;
		clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";   //50-50
		cout<<"\n\n Q.In which sport did Vijay Kumar win a silver medal at the London Olympics??";                                        //5000 Rupees
		cout<<"\n a)Shooting \t\t\t d)Wrestling";
		cout<<"\n Your Answer \t";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with Nothing";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q.In which sport did Vijay Kumar win a silver medal at the London Olympics??";                                        //5000 Rupees
		cout<<"\n a)Shooting \t\t\t b)Boxing \n c)Badminton \t\t\t d)Wrestling";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with Nothing";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		cout<<"\n\n Q.In which sport did Vijay Kumar win a silver medal at the London Olympics??";                                        //5000 Rupees
		cout<<"\n a)Shooting \t\t\t b)Boxing \n c)Badminton \t\t\t d)Wrestling";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with Nothing";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='d' || ans=='b' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is a \t\t\t\t";
	cout<<"\n Sorry but you are walking away with Nothing";
	getch();
	exit(0);
	}
	else if(ans=='a')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations You have won 5000 Rupees";
	getch();
	}
	}

clrscr();
cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
cout<<"\n\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')   //d is correct
	{
	if(y==1)
	{
	cout<<"\n 1.Audience Poll \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
			cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='d' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is d \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
			cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='d' ||ans=='b' || ans=='c')
			{
			ans1=1;
			cout<<"\n Wrong Answer";
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='d' ||ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==2)
	{
	cout<<"\n 1.50-50 \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
			cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='d' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
			cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='d' ||ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='d' ||ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==3)
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
			cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='d' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
			cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='d' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is a \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='a')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 10,000 Rupees";
			getch();
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Your Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: y=1;
		clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";   //50-50
		cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
		cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
		cout<<"\n Your Answer \t";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
		cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		cout<<"\n\n Q.Who was the ICC Cricketer of the Year for 2012";                                        //5000 Rupees
		cout<<"\n a)Virat Kohli \t\t\t b)Micheal Hussey \n c)Sachin Tendulkar \t\t\t d)Scott Styris";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='d' || ans=='b' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is a \t\t\t\t";
	cout<<"\n Sorry but you are walking away with 5000 Rupees";
	getch();
	exit(0);
	}
	else if(ans=='a')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations You have won 10,000 Rupees";
	getch();
	}
	}
clrscr();
cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
cout<<"\n a)Russian Ponomariov \t\t\t b)Vladimir Kramnik \n c)Vesselin Topalov  \t\t\t d)Boris Gelfand";
cout<<"\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')      //d is answer
	{
	if(y==1)
	{
	cout<<"\n 1.Audience Poll \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
			cout<<"\n a)Russian Ponomariov \t\t\t b)Vladimir Kramnik \n c)Vesselin Topalov  \t\t\t d)Boris Gelfand";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='a' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is d \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
			cout<<"\n a)Russian Ponomariov \t\t\t b)Vladimir Kramnik \n c)Vesselin Topalov  \t\t\t d)Boris Gelfand";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='b' || ans=='c')
			{
			ans1=1;
			cout<<"\n Wrong Answer";
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is d \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==2)
	{
	cout<<"\n 1.50-50 \t\t 2.Double Dip";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
			cout<<"\n b)Vladimir Kramnik \t\t\t d)Boris Gelfand";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='a' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is d \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=3;
			cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
			cout<<"\n a)Russian Ponomariov \t\t\t b)Vladimir Kramnik \n c)Vesselin Topalov  \t\t\t d)Boris Gelfand";
			cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
			cout<<"\n\n You will get TWO attempts to answer this question";
			cout<<"\n\n Your First Answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='b' || ans=='c')
			{
			ans1=1;
			cout<<"\n Wrong Answer";
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			if(ans1==1)
			{
			cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
			cin>>ans;
			if(ans=='a' ||ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is d \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else if(y==3)
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll";
	cout<<"\n Enter Choice \t";
	cin>>life;
	switch(life)
	{
		case 1: y=1;
			clrscr();
			cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
			cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
			cout<<"\n b)Vladimir Kramnik \t\t\t d)Boris Gelfand";
			cout<<"\n\n Your Answer \t";
			cin>>ans;
			if(ans=='a' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is d \t\t\t\t";
			cout<<"\n\n You are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
		case 2: clrscr();
			y=2;
			cout<<"\n You have Chosen Audience Poll";       //Poll
			cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
			cout<<"\n a)Russian Ponomariov \t\t\t b)Vladimir Kramnik \n c)Vesselin Topalov  \t\t\t d)Boris Gelfand";
			cout<<"\n\n Audience has their Voting Meters Ready";
			delay(1000);
			cout<<"\n\n\n Here are the Results";
			do
			{
			randomize();
			cout<<"\n A= \t"<<random(a1);
			cout<<"\n B= \t"<<random(b1);
			cout<<"\n C= \t"<<random(c1);
			cout<<"\n D= \t"<<random(d1);
			}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
			cout<<"\n\n Your Answer";
			cin>>ans;
			if(ans=='a' || ans=='b' || ans=='c')
			{
			cout<<"\n Wrong Answer";
			cout<<"\n Correct Answer is d \t\t\t\t";
			cout<<"\n Sorry but you are walking away with 5000 Rupees";
			getch();
			exit(0);
			}
			else if(ans=='d')
			{
			clrscr();
			cout<<"\n Right Answer";
			cout<<"\n Congratulations you have won 20,000 Rupees";
			getch();
			}
			break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
		cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
		cout<<"\n b)Vladimir Kramnik \t\t\t d)Boris Gelfand";
		cout<<"\n\n Your Answer \t";
		cin>>ans;
		if(ans=='a' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is d \t\t\t\t";
		cout<<"\n\n You are walking away with 5000 Rupees";
		}
		else if(ans=='d')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
		cout<<"\n a)Russian Ponomariov \t\t\t b)Vladimir Kramnik \n c)Vesselin Topalov  \t\t\t d)Boris Gelfand";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='a' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is d \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='d')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		cout<<"\n\n Q.Who did Vishwananthan Anand beat in 2012 to retain the World Chess Title";                                     //10,000 Rupees
		cout<<"\n a)Russian Ponomariov \t\t\t b)Vladimir Kramnik \n c)Vesselin Topalov  \t\t\t d)Boris Gelfand";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='b' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='d')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is d \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='d')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='a' || ans=='b' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is d \t\t\t\t";
	cout<<"\n\n You are walking away with 5000 Rupees";
	getch();
	exit(0);
	}
	else if(ans=='d')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations you have won 20,000 Rupees";
	getch();
	}
	}
}
void affair()
{
clrscr();
cout<<"\n\n Current Affair";
sound(1000);
nosound();
cout<<"\n\n Q.Which State did P.A.Sangma serve as Chief Minsiter from 1988 to 1990?";                                        //5000 Rupees
cout<<"\n a)Arunachal Pradesh \t\t\t b)Manipur \n c)Assam \t\t\t d)Meghalaya";
cout<<"\n\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')   //d is correct
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Your Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: y=1;
		clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";   //50-50
		cout<<"\n Q2.Which State did P.A.Sangma serve as Chief Minsiter from 1988 to 1990?";
		cout<<"\n\n a)Arunachal Pradesh \t\t\t d)Meghalaya";
		cout<<"\n Your Answer \t";
		cin>>ans;
		if(ans=='a' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is d \t\t\t\t";
		cout<<"\n Sorry but you are walking away with Nothing";
		getch();
		exit(0);
		}
		else
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q.Which State did P.A.Sangma serve as Chief Minsiter from 1988 to 1990?";                                        //5000 Rupees
		cout<<"\n a)Arunachal Pradesh \t\t\t b)Manipur \n c)Assam \t\t\t d)Mahatma Gandhi";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='a' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is d \t\t\t\t";
		cout<<"\n Sorry but you are walking away with Nothing";
		getch();
		exit(0);
		}
		else if(ans=='d')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		cout<<"\n\n Q.Which State did P.A.Sangma serve as Chief Minsiter from 1988 to 1990?";                                        //5000 Rupees
		cout<<"\n a)Arunachal Pradesh\t b)Manipur\t\n c)Assam\t d)Meghalaya";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='b' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='d')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is d \t\t\t\t";
		cout<<"\n Sorry but you are walking away with Nothing";
		getch();
		exit(0);
		}
		else if(ans=='d')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 5000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='a' || ans=='b' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is d \t\t\t\t";
	cout<<"\n Sorry but you are walking away with Nothing";
	getch();
	exit(0);
	}
	else if(ans=='d')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations You have won 5000 Rupees";
	getch();
	}
	}
clrscr();
cout<<"\n\n Q2. Which of these places is called the Coal Capital of India?";                                     //10,000 Rupees
cout<<"\n a)Durgapur \t\t\t b)Raniganj \n c)Dhanbad  \t\t\t d)Hazaribag";
cout<<"\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')      //c is answer
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";    //50-50
		cout<<"\n Q2. Which of these places is called the Coal Capital of India?";
		cout<<"\n b)Raniganj \t\t\t c)Dhanbad";
		cout<<"\n\n Your Answer \t";
		cin>>ans;
		if(ans=='a' || ans=='b' || ans=='d')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is c \t\t\t\t";
		cout<<"\n\n You are walking away with 5000 Rupees";
		}
		else if(ans=='c')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		break;
	case 2: clrscr();
		cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Q2. Which of these places is called the Coal Capital of India?";                                     //10,000 Rupees
		cout<<"\n a)Durgapur \t\t\t b)Raniganj \n c)Dhanbad  \t\t\t d)Hazaribag";
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='a' || ans=='b' || ans=='d')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is c \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='c')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		cout<<"\n\n Q2. Which of these places is called the Coal Capital of India?";                                     //10,000 Rupees
		cout<<"\n a)Durgapur \t\t\t b)Raniganj \n c)Dhanbad  \t\t\t d)Hazaribag";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='b' || ans=='d')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='c')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='b' || ans=='d')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is c \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='c')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 10,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='a' || ans=='b' || ans=='d')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is c \t\t\t\t";
	cout<<"\n\n You are walking away with 5000 Rupees";
	getch();
	exit(0);
	}
	else if(ans=='c')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations you have won 10,000 Rupees";
	getch();
	}
	}
clrscr();
cout<<"\n\n Q3.The President of India can be impeached by?";                                   //20,000 Rupees
cout<<"\n a)Specially Constituted Tribunal     \t\t\t b)Parliament     \n c)Supreme Court     \t\t\t d)Central cabinet";
cout<<"\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')             //b is correct
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";   //50-50
		cout<<"\n Q3.The President of India can be impeached by?";
		cout<<"\n b)Parliament \t\t\t c)Supreme Court";
		cout<<"\n\n Your Answer \t";
		cin>>ans;
		if(ans=='a' || ans=='d' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is b \t\t\t\t";
		cout<<"\n Ahh.!! You were going great. Unfortunately you are leaving with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		cout<<"\n Good Going";
		getch();
		}
		break;
	case 2: cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='a' || ans=='d' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is b \t\t\t\t";
		cout<<"\n\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		cout<<"\n\n Q1.The President of India can be impeached by?";                                        //5000 Rupees
		cout<<"\n a)Specially Constituted Tribunal\t b)Parliament\t\n c)Supreme Court\t d)Central cabinet";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='d' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer \t";
		cin>>ans;
		if(ans=='a' ||ans=='d' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is b \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='b')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 20,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='a' || ans=='d' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is b \t\t\t\t";
	cout<<"\n Ahh.!! You were going great. Unfortunately you are leaving with 5000 Rupees";
	getch();
	exit(0);
	}
	else if(ans=='b')
	{
	cout<<"\n Right Answer";
	cout<<"\n Congratulations you have won 20,000 Rupees";
	cout<<"\n Good Going";
	getch();
	}
	}
clrscr();
cout<<"\n\n Q4.Who among the following was the leader of the Cabinet Mission";                                      //40,000 Rupees
cout<<"\n\n a)Stafford Cripps     \t\t\t b)Linithgow     \n c)A.V.Alexander     \t\t\t d)Sir Pethick Lawrence";
cout<<"\n\n Do You want to use a Lifeline ??";
cin>>w;
	if(w=='y'|| w=='Y')      //a is correct
	{
	cout<<"\n 1.50-50 \t\t 2.Audience Poll \t\t 3.Double Dip \t\t";
	cout<<"\n Enter Choice \t\t";
	cin>>life;
	switch(life)
	{
	case 1: clrscr();
		cout<<"\n You have Chosen 50-50 Lifeline";     //50-50
		cout<<"\n Q1.Who among the following was the leader of the Cabinet Mission";
		cout<<"\n a)Stafford Cripps \t\t\t d)Sir Pethick Lawrence";
		cout<<"\n Your Answer \t";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n You are walking away with 5000 Rupees";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 40,000 Rupees";
		getch();
		}
		break;
	case 2: cout<<"\n You have Chosen Audience Poll";       //Poll
		cout<<"\n\n Audience has their Voting Meters Ready";
		delay(1000);
		cout<<"\n\n\n Here are the Results";
		do
		{
		randomize();
		cout<<"\n A= \t"<<random(a1);
		cout<<"\n B= \t"<<random(b1);
		cout<<"\n C= \t"<<random(c1);
		cout<<"\n D= \t"<<random(d1);
		}while(random(a1)+random(b1)+random(c1)+random(d1)==100);
		cout<<"\n\n Your Answer";
		cin>>ans;
		if(ans=='d' || ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n\n Sorry but you are walking away with 5000 Rupees";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 40,000 Rupees";
		getch();
		}
		break;
	case 3: clrscr();
		cout<<"\n\n Q4.Who among the following was the leader of the Cabinet Mission";                                        //5000 Rupees
		cout<<"\n a)Stafford cripps\t b)Linithgow\t\n c)A.V.Alexander\t d)Sir Pethick Lawrence";
		cout<<"\n\n\n You have chosen Double Dip. Now you cannot quit the game";
		cout<<"\n\n You will get TWO attempts to answer this question";
		cout<<"\n\n Your First Answer \t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		ans1=1;
		cout<<"\n Wrong Answer";
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 40,000 Rupees";
		getch();
		}
		if(ans1==1)
		{
		cout<<"\n Your Second Answer... Be very careful while giving the answer\t";
		cin>>ans;
		if(ans=='d' ||ans=='b' || ans=='c')
		{
		cout<<"\n Wrong Answer";
		cout<<"\n Correct Answer is a \t\t\t\t";
		cout<<"\n Sorry but you are walking away with 5000 Rupees";
		getch();
		exit(0);
		}
		else if(ans=='a')
		{
		clrscr();
		cout<<"\n Right Answer";
		cout<<"\n Congratulations you have won 40,000 Rupees";
		getch();
		}
		}
		break;
	default: cout<<"\n Error";
	}
	}
	else
	{
	cout<<"\n Your Answer";
	cin>>ans;
	if(ans=='d' || ans=='b' || ans=='c')
	{
	cout<<"\n Wrong Answer";
	cout<<"\n Correct Answer is a \t\t\t\t";
	cout<<"\n You are walking away with 5000 Rupees";
	getch();
	exit(0);
	}
	else if(ans=='a')
	{
	clrscr();
	cout<<"\n Right Answer";
	cout<<"\n Congratulations you have won 40,000 Rupees";
	getch();
	}
	}
}