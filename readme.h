//
//===============================================================
// _____ __   ____  _   _____ _  _  __  _  __ __   __  _ ___ ___
//|_   _|__`./ _/ || | |_   _| || ||  \| |/ _]__`.|  \| |_  | __|
//  | |  |_ | \_| >< |   | | `._  _| | ' | [/\|_ || | ' |/ /`._`.
//  |_| |__.'\__/_||_|   |_|    |_||_|\__|\__/__.'|_|\__|_/ !__.'
//
//===============================================================
//
//         The info for the Tech Tangents Discord server
//
//===============================================================
//                        ---=[LINKS]=---
//  Youtube:
//  https://www.youtube.com/AkBKukU
//
//  Twitch:
//  https://www.twitch.tv/techtangents
//
//  Github:
//  https://github.com/AkBKukU
//
//  Patreon:
//  https://www.patreon.com/AkBKukU

//===============================================================
//                        ---=[RULES]=---
#include <Discord.TOS>
// If it's is against TOS, it's not gonna fly here.

// GLOBAL RULES
int R1_BE_NICE(chat you); // Foster a positive discussion
int R2_SFW(chat you); // Keep chat safe for work
int R3_ON_TOPIC(chat you); // Stick to channel topics
int R4_FOLLOW_MODS(chat you); // Do what mods say when chatting
int R5_RESPECT(chat you); // Respect others as how they are

// Actions taken based on rule violations
class policies {

    // The number of warnings users get will be tracked
    int warnings=0;
    int kicks=0;

    void action(chat you); // Actions based on previous warns kicks

    void warn (chat you); // First time and light violations
    void kick (chat you); // Repeated and severe violations
    void ban (chat you); // Disreguard for moderation

}
