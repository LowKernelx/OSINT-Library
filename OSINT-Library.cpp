#include <iostream>

using namespace std;

int main()
{

    int OSINT;

char email[10000] = "\n  Email reputation analysis: https://emailrep.io/\n \n https://intelx.io/\n \n https://www.dehashed.com/\n \n Checks if email is in any breaches: https://haveibeenpwned.com/\n \n Search email data in breaches: https://dehashed.com/\n \n Search email breaches: https://ghostproject.fr/\n";

char Phone_Number[10000] = "\n Identifies phone numbers: https://truecaller.com\n \n Phone number identification: https://whoscall.com\n \n Validates phone numbers: https://numverify.com\n \n Search people by phone number: https://www.whitepages.com\n \n Find phone numbers: https://www.phonebook.com\n";

char Social_Media[10000] = "\n Search social media by email/username: https://www.social-searcher.com\n \n Find people online by email/username: https://pipl.com\n \n Search social media mentions: https://socialmention.com\n \n Find social media profiles: https://www.spokeo.com\n \n Search social media profiles: https://www.peekyou.com\n";

char Leaks[10000] = "\n Check if email is involved in leaks: https://leakcheck.io\n \n Search large leak database: https://snusbase.com\n \n Search leaks: https://leakedsource.com\n";

char General_Search[10000] = "\n Powerful search tool: https://intelx.io\n Search connected devices: https://www.shodan.io\n Popular search engine: https://www.google.com\n Microsoft search engine: https://www.bing.com\n";

char Images_Video[10000] = "\n Reverse image search: https://images.google.com\n \n Reverse image search: https://www.tineye.com\n  \n Image usage tracking: https://www.pixsy.com\n \n Image sharing subreddit: https://www.reddit.com/r/pics/\n \n Reverse image search by Yandex: https://www.yandex.com/images/\n \n";

cout << "OSINT Tools\n";
cout << "[1] Email\n";
cout << "[2] Phone Number\n";
cout << "[3] Social Media\n";
cout << "[4] Leaks\n";
cout << "[5] General Search\n";
cout << "[6] 6. Images & Video Search\n";

cout << "number please: ";
cin >> OSINT;

switch (OSINT)
{
case 1:
cout << email;
break;
case 2:
cout << Phone_Number;
break;
case 3:
cout << Social_Media;
break;
case 4:
cout << Leaks;
break;
case 5:
cout << General_Search;
break;
case 6:
cout << Images_Video;
break;
default:
cout << "Not Found!";
break;


}


return 0;

}
