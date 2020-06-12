//Working on OOP
#include <cstdio>
//A Class
enum class Languages {
    Python,
    C,
    CPP,
    Java,
    Blank
};
//A structure
struct Info {
    //char os[](ISO standard forbids)
    const char *os;
    int year;
    bool linux;
    bool windows;
};
int programmingSwitch()
    {
        //Declaring varx
        Languages varx = Languages::CPP;
        Languages vary = Languages::Blank; //Using blank reveals the default option, since the case doesn't have blank.
        switch(vary) {
            case Languages::Python: {
                printf("The switch statement reveals Python.");
            } break;
            case Languages::C : {
                printf("The switch statement reveals C.");
            } break;
            case Languages::CPP : {
                printf("The switch statement reveals CPP.");
            } break;
            case Languages::Java : {
                printf("The switch statement reveals Java.");
            } break;
            default: {
                printf("Default");
            }
        }
        return 0;
    }
int Gather()
    {
        
        Info main; //Creating an instance of Info
        main.os = "Windows";
        main.year = 2020;
        main.windows = true;
        main.linux = false;
        printf("\nThe operating system being used is %s.\nThe OS'S year is %d.\nWindows = %d\nLinux = %d",main.os,main.year,main.windows,main.linux);
        return 0;
    };
int main()
    {
        programmingSwitch();  
        Gather();
    }