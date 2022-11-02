#include "readme.h"

policies moderator;

// GLOBAL RULES
int R1_BE_NICE(chat you)
{
    // Work to foster a positive envornment in the server.
    // We're not here to put down other or make others feel
    // unwelcome.

    if ( you != nice ) moderator.action(you,subjective_judgement);
}

int R2_SFW(chat you)
{
    // The content posted on the server should not be
    // explicit or offensive. Safe for work is a subjective
    // thing that will be deterined case by case.

    if ( you == nsfw ) moderator.action(you,subjective_judgement);
}

int R3_ON_TOPIC(chat you)
{
    // Stay on topic for the channel you are chatting in. The
    // #general channl is a catch all but not and excuse for
    // low effort posts. There is no meme channel intentionally

    if ( you = off_topic ) moderator.action(you,subjective_judgement);
}

int R4_FOLLOW_MODS(chat you)
{
    // Mods are here to make the experience better for everyone.
    // If they ask you to do something it is for the better of
    // the server overall and the directions should be followed.
    //
    // Breaking this rule is the fastest way to a ban.

    if ( you == fight_mods ) moderator.action(you,subjective_judgement);
}

int R5_RESPECT(chat you)
{
    // Respect your fellow server members.
    //
    // This includes but is not limited to:
    //  - No derogatory name calling
    //  - No dismissing personal traits

    if ( you == hurtful ) moderator.action(you,subjective_judgement);
}




void policies::action(chat you, int subjective_judgement)
{
    // The mod staff tries to give people the benefit of the doubt
    // anda assess the context of the situation. Rash actions are
    // rare and your past history is taken into account.
    //
    // But it's absolutely possible to get a ban right away if you do
    // something bad enough.
    //
    if ( warnings + subjective_judgement < 3)
    {
        // We will warn you to change topics or take a break if
        // you are violating rules by accident or without meaning to
        warn(you);
        ++warnings;
    }
    else if ( kicks + subjective_judgement < 3)
    {
        // If you are causing a problem that directly impacts others you
        // will be kicked to make sure you understand that you are not
        // opperating within the rules of the server.
        kick(you);
        ++kicks;
    }else{
        // If you continue to be a problem or do something egregiously
        // bad then you will be baned. There is no appeal process. If you
        // reached this point then your removal is for the better of the
        // server.
        ban(you);
    }
}

void policies::warn (chat you)
{
        std::cout << warning << you;
        // If you are given a warning you should reconsider what you are
        // currently doing and listen to the mod. You can ask why or try
        // to provide context, but do not argue with the mods about
        // warnings.
}


void policies::kick (chat you)
{
        std::cout << kick_reason << you;
        server.kick(you, time);
        // If you are kicked you will be removed from the server and must
        // rejoin. You may be temporarily suspended from rejoining depending
        // on the severity and circumstances.
}

void policies::ban (chat you)
{
        server.ban(you);
        // Bans are permenant. There is no appeal process. If you reached
        // this point then you demonstrated a disregaurd for the moderators,
        // members, and the server that is not reconcilable.
}
