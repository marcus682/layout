/***************************************************************************
    OutRun Import: Labels for levels, sprites and scenery sections.

    Copyright Chris White.
    See license.txt for more details.
***************************************************************************/

#ifndef OUTRUNLABELS_HPP
#define OUTRUNLABELS_HPP

#include <qstring.h>

// ------------------------------------------------------------------------------------------------
// OutRun Sprite Object
// ------------------------------------------------------------------------------------------------
class OutrunSprite
{
public:
    QString name;           // Editor friendly name
    bool canBeHidden;       // Should be hidden from list by default as it isn't scenery related
    int pal;                // Sprite Palette
    int routine;            // Sprite OutRun Assembly Routine (See Routine IDs below)
    int shadow;             // Add additional Shadow Sprite

    // Routine IDs
    enum
    {
        R00, // Normal Collision
        R01, // Strip: Crops
        R02, // Clouds
        R03, // Strip: Water
        R04, // Start Lights
        R05, // Normal No Collision
        R06, // Checkpoint Marker
        R07, // Centre Collision
        R08, // Half-Size Sprite
        R09, // Rock
        R10, // Strip: Sand
        R11, // Strip: Stones
        R12, // Mini-Tree
        R13  // Track Debris
        //R14  // Sand Strip
    };

    static const int SHADOW_ON = 2;

    OutrunSprite(const char *name, bool hide, int pal, int routine, int shadow = 0)
    {
        this->name        = QString(name);
        this->canBeHidden = hide;
        this->pal         = pal;
        this->routine     = routine;
        this->shadow      = shadow;
    }
};

const static QString LEVEL_LIST[] =
{
    QString("1 - Coconut Beach"),
    QString("2 - Devil's Canyon"),
    QString("2 - Gateway"),
    QString("3 - Cloudy Mountain"),
    QString("3 - Alps"),
    QString("3 - Desert"),
    QString("4 - Seaside Town"),
    QString("4 - Wheat Field"),
    QString("4 - Old Capital"),
    QString("4 - Wilderness"),
    QString("5 - Lakeside"),
    QString("5 - Autobahn"),
    QString("5 - Desolation Hill"),
    QString("5 - Death Valley"),
    QString("5 - Vineyard"),
    QString("Coconut Beach Prototype"),
    QString("Gateway (Japanese Layout)"),
    QString("Unknown"),
    QString("End Section 1"),
    QString("End Section 2"),
    QString("End Section 3"),
    QString("End Section 4"),
    QString("End Section 5"),
};

// Format: "Sprite Name" | Can Be Hidden? | Default Palette | Default Code Routine
const static OutrunSprite SPRITE_LIST[] =
{
    OutrunSprite("%0: Tree - European",                 false, 0,   OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Road Debris",                     false, 226, OutrunSprite::R13),
    OutrunSprite("%0: Strip - Sand",                    false, 181, OutrunSprite::R10),
    OutrunSprite("%0: Rock - Sculpted",                 false, 50,  OutrunSprite::R09, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Anim - Bike 1",                   true,  50,  OutrunSprite::R00),
    OutrunSprite("%0: Sign - Directional",              false, 33,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Sign - Diving School",            false, 52,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Anim - Bike 2",                   true,  50,  OutrunSprite::R00),
    OutrunSprite("%0: Pole - Thin",                     false, 51,  OutrunSprite::R00),
    OutrunSprite("%0: Sign - Diving School (Dupe)",     false, 52,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Sign - Check/Goal Banner",        false, 42,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 1",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 2",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Sign - Start Adverts RHS",        false, 123, OutrunSprite::R04),
    OutrunSprite("%0: Decor - Ancient",                 false, 160, OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Tree - Palm",                     false, 54,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Sign - Check/Goal Pole",          false, 221, OutrunSprite::R00),
    OutrunSprite("%0: Tree - Dead Medium",              false, 183, OutrunSprite::R00),
    OutrunSprite("%0: Pole - Medium",                   false, 25,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Bike 3",                   true,  50,  OutrunSprite::R00),
    OutrunSprite("%0: Decor - Ancient Dupe",            false, 160, OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Finish - People Strip",           false, 206, OutrunSprite::R07),
    OutrunSprite("%0: Pole - Thick",                    false, 25,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 3 Back Turned",    true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Bush 1",                          false, 75,  OutrunSprite::R00),
    OutrunSprite("%0: Goal Banner Post Large",          false, 230, OutrunSprite::R00),
    OutrunSprite("%0: Goal Banner Post Small",          false, 230, OutrunSprite::R00),
    OutrunSprite("%0: Windsurfer",                      false, 66,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Arabian Man",              true,  223, OutrunSprite::R08),
    OutrunSprite("%0: Tree - Pine",                     false, 75,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Bush 2",                          false, 76,  OutrunSprite::R00),
    OutrunSprite("%0: Bush Double",                     false, 76,  OutrunSprite::R00),
    OutrunSprite("%0: Tree - Oak",                      false, 77,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Building - Flaminco",             false, 78,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Tree - No Leaves",                false, 79,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Sign - Danke",                    false, 80,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Building - Hut",                  false, 196, OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Bush 3",                          false, 43,  OutrunSprite::R00),
    OutrunSprite("%0: Decor - Oil",                     false, 83,  OutrunSprite::R00),
    OutrunSprite("%0: Decor - Oil Pump 1",              false, 128, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Oil Pump 2",              false, 128, OutrunSprite::R00),
    OutrunSprite("%0: Building - Windmill",             false, 87,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Vehicle - Porsche",               true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Porsche Dupe",          true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Porsche Dupe",          true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Sign - Motorcross",               false, 91,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Sign - Directions",               false, 92,  OutrunSprite::R00),
    OutrunSprite("%0: Arch - Top Section",              false, 95,  OutrunSprite::R00),
    OutrunSprite("%0: Arch - Pillar",                   false, 97,  OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Ferrari Down",          true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Ferrari Mid",           true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Ferrari Up",            true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Decor - Crowd Stand",             false, 105, OutrunSprite::R07),
    OutrunSprite("%0: Vehicle - Ferrari Down Turn 1",   true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Ferrari Mid Turn 1",    true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Ferrari Up Turn 1",     true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Decor - Barrel",                  false, 109, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Porsche Dupe",          true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Porsche Up",            true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Strip - Crops",                   false, 71,  OutrunSprite::R01),
    OutrunSprite("%0: Vehicle - Porsche Turn 1",        true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Porsche Up Turn 1",     true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Strip - Water",                   false, 6,   OutrunSprite::R03),
    OutrunSprite("%0: Vehicle - Porsche Turn 2",        true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Porsche Up Turn 2",     true,  251, OutrunSprite::R00),
    OutrunSprite("%0: Strip - Dead Twigs",              false, 228, OutrunSprite::R12),
    OutrunSprite("%0: Vehicle - Ferrari Down Turn 2",   true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Ferrari Mid Turn 2",    true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Ferrari Up Turn 2",     true,  2,   OutrunSprite::R00),
    OutrunSprite("%0: Shadow",                          true,  1,   OutrunSprite::R00),
    OutrunSprite("%0: Sign - Ice Cream Parlor",         false, 27,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Vehicle - Van Down Turn 1",       true,  247, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Van Down Turn 2",       true,  247, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Van Down Turn 3",       true,  247, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Van Mid Turn 1",        true,  247, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Van Mid Turn 2",        true,  247, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - Van Mid Turn 3",        true,  247, OutrunSprite::R00),
    OutrunSprite("%0: Rock - Horizontal 1",             false, 160, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - BMW Down Turn 1",       true,  114, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - BMW Down Turn 2",       true,  114, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - BMW Down Turn 3",       true,  114, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - BMW Mid Turn 1",        true,  114, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - BMW Mid Turn 2",        true,  114, OutrunSprite::R00),
    OutrunSprite("%0: Vehicle - BMW Mid Turn 3",        true,  114, OutrunSprite::R00),
    OutrunSprite("%0: Rock - Vertical",                 false, 160, OutrunSprite::R00),
    OutrunSprite("%0: Rock - Medium",                   false, 160, OutrunSprite::R00),
    OutrunSprite("%0: Rock - Tiny",                     false, 160, OutrunSprite::R00),
    OutrunSprite("%0: Rock - Horizontal 2",             false, 160, OutrunSprite::R00),
    OutrunSprite("%0: Bush 4 - Tropical",               false, 43,  OutrunSprite::R00),
    OutrunSprite("%0: Building - Tower",                false, 44,  OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Building - Tower Top",            false, 44,  OutrunSprite::R00),
    OutrunSprite("%0: Building - Tower Roof",           false, 44,  OutrunSprite::R00),
    OutrunSprite("%0: Bush 5",                          false, 77,  OutrunSprite::R00),
    OutrunSprite("%0: Sign - SEGA 1",                   false, 166, OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Bush 6",                          false, 79,  OutrunSprite::R00),
    OutrunSprite("%0: Cactus - Top",                    false, 133, OutrunSprite::R00),
    OutrunSprite("%0: Sign - SEGA 2",                   false, 164, OutrunSprite::R00),
    OutrunSprite("%0: Sign - OutRun Deluxe",            false, 165, OutrunSprite::R00, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Anim - Flagman 4",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 5",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 6",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 7",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 8",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 9",                true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 10",               true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 11",               true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 12",               true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Flagman 13",               true,  12,  OutrunSprite::R00),
    OutrunSprite("%0: Rock - Halved 1",                 false, 50,  OutrunSprite::R09, OutrunSprite::SHADOW_ON),
    OutrunSprite("%0: Rock - Halved 2",                 false, 50,  OutrunSprite::R09),
    OutrunSprite("%0: Cactus 1",                        false, 133, OutrunSprite::R00),
    OutrunSprite("%0: Cactus 2",                        false, 133, OutrunSprite::R00),
    OutrunSprite("%0: Start Banner Left",               false, 69,  OutrunSprite::R00),
    OutrunSprite("%0: Start Banner Right",              false, 69,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Girl 1",                   true,  8,   OutrunSprite::R00),
    OutrunSprite("%0: Strip - Clouds",                  false, 205, OutrunSprite::R02),
    OutrunSprite("%0: Anim - Girl 2",                   true,  8,   OutrunSprite::R00),
    OutrunSprite("%0: Anim - Girl 3",                   true,  8,   OutrunSprite::R00),
    OutrunSprite("%0: Strip - Pebbles",                 false, 227, OutrunSprite::R11),
    OutrunSprite("%0: Sign - Start Adverts LHS",        false, 123, OutrunSprite::R00),
    OutrunSprite("%0: Anim - Award Girl 1",             true,  9,   OutrunSprite::R00),
    OutrunSprite("%0: Anim - Award Girl 2",             true,  9,   OutrunSprite::R00),
    OutrunSprite("%0: Anim - Award Girl 3",             true,  9,   OutrunSprite::R00),
    OutrunSprite("%0: Anim - Guy 1",                    true,  10,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Guy 2",                    true,  10,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Guy 3",                    true,  10,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Guy 4",                    true,  10,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Guy 5",                    true,  10,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Guy 6",                    true,  10,  OutrunSprite::R00),
    OutrunSprite("%0: Tree - Twiggy",                   false, 178, OutrunSprite::R00),
    OutrunSprite("%0: Tree - Stump",                    false, 178, OutrunSprite::R00),
    OutrunSprite("%0: Tree - Dead Half",                false, 178, OutrunSprite::R00),
    OutrunSprite("%0: Bush 7",                          false, 179, OutrunSprite::R00),
    OutrunSprite("%0: Bush 8",                          false, 179, OutrunSprite::R00),
    OutrunSprite("%0: Goal Banner Left",                false, 186, OutrunSprite::R00),
    OutrunSprite("%0: Goal Banner Right",               false, 186, OutrunSprite::R00),
    OutrunSprite("%0: Goal Banner Dupe",                false, 186, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 1",             true,  190, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 2",             true,  190, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 3",             true,  191, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 4",             true,  191, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 5",             true,  191, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 6",             true,  192, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 7",             true,  193, OutrunSprite::R00),
    OutrunSprite("%0: Decor - Start Guy 8",             true,  193, OutrunSprite::R00),
    OutrunSprite("%0: Anim - Camel 1",                  false, 224, OutrunSprite::R00),
    OutrunSprite("%0: Sign - Check/Goal Dupe",          false, 40,  OutrunSprite::R00),
    OutrunSprite("%0: Anim - Camel 2",                  false, 224, OutrunSprite::R00),
    OutrunSprite("%0: Anim - Camel 3",                  false, 224, OutrunSprite::R00),
    OutrunSprite("%0: Anim - Camel 4",                  false, 224, OutrunSprite::R00),
};

const static QString SCENERY_LIST[] =
{
    QString("%0: Trees - European"),
    QString("%0: Bushes"),
    QString("%0: Trees - Pine"),
    QString("%0: Trees - Oak"),
    QString("%0: Trees - Pine (Right)"),
    QString("%0: Trees - Pine (Left)"),
    QString("%0: Bushes"),
    QString("%0: Clouds"),
    QString("%0: Building - Flaminco"),
    QString("%0: Trees & Green Crops"),
    QString("%0: Trees & Clouds"),
    QString("%0: Trees - No Leaves"),
    QString("%0: Sign - Sharp Right"),
    QString("%0: Sign - Chicane Left"),
    QString("%0: Sign - Sharp Left"),
    QString("%0: Sign - Chicane Right"),
    QString("%0: Pines & Golden Crops"),
    QString("%0: Road Debris"),
    QString("%0: Road Debris"),
    QString("%0: Unused"),
    QString("%0: Sign - Diving School"),
    QString("%0: Trees - Palms (Both Sides)"),
    QString("%0: Tower (Right)"),
    QString("%0: Sign - Danke (Left)"),
    QString("%0: Danke & Green Crops"),
    QString("%0: Unused"),
    QString("%0: Unused"),
    QString("%0: Unused"),
    QString("%0: Tower Compressed (Right)"),
    QString("%0: Tower Compressed (Right)"),
    QString("%0: Tower & Hut"),
    QString("%0: Trees - Oak"),
    QString("%0: Tropical Bushes"),
    QString("%0: Windmill (Right)"),
    QString("%0: Green Crops"),
    QString("%0: Golden Crops"),
    QString("%0: Green & Pink Crops"),
    QString("%0: Gas & Oil"),
    QString("%0: Palms & Sea"),
    QString("%0: Tropical Bushes"),
    QString("%0: Unused"),
    QString("%0: Unused"),
    QString("%0: Sea & Windsurfers"),
    QString("%0: Trees - Palms"),
    QString("%0: Sea & Tropical Bushes"),
    QString("%0: Palms & Huts"),
    QString("%0: Sign - Oil"),
    QString("%0: Trees - European"),
    QString("%0: Crops & Windmills"),
    QString("%0: Crops & Huts"),
    QString("%0: Sign - Motocross (Left)"),
    QString("%0: Sign - Danke (Right)"),
    QString("%0: Trees - No Leaves"),
    QString("%0: Gateway Arches (Gaps)"),
    QString("%0: Golden Crops Spread Out"),
    QString("%0: Golden Crops Spread Out"),
    QString("%0: Golden Crops & Hut"),
    QString("%0: Golden Crops & Windmills"),
    QString("%0: Trees & Bushes"),
    QString("%0: Unused"),
    QString("%0: Checkpoint"),
    QString("%0: Goal"),
    QString("%0: Directions - Vulture St"),
    QString("%0: Directions - Winston Hill"),
    QString("%0: Directions - Ammonia Ave"),
    QString("%0: Crops & Windmills"),
    QString("%0: Huts & Towers"),
    QString("%0: Crops & Huts"),
    QString("%0: Trees & Pink Sea"),
    QString("%0: Sign - Ice Cream (Right)"),
    QString("%0: Sign - Ice Cream (Left)"),
    QString("%0: Crops & Trees Spread Out"),
    QString("%0: Unused"),
    QString("%0: Gateway Arches (Close)"),
    QString("%0: Desolation Hill Arches"),
    QString("%0: Unused Arches"),
    QString("%0: Turrets (Light)"),
    QString("%0: Turrets (Dark)"),
    QString("%0: Unused"),
    QString("%0: Palms & Sea"),
    QString("%0: Sign - Sharp Right"),
    QString("%0: Sign - Sharp Left"),
    QString("%0: Trees - Oak"),
    QString("%0: Towers & Huts"),
    QString("%0: Trees - Assorted No Leaves"),
    QString("%0: Unused"),
    QString("%0: Trees & Bushes"),
    QString("%0: Bushes (Right)"),
    QString("%0: Flamico Huts & Tropical Bushes"),
    QString("%0: Sign - Motocross & Huts"),
    QString("%0: Crops & Trees"),
    QString("%0: Sea & Crops"),
    QString("%0: Windmills, Crops & Sea"),
    QString("%0: Sign - Motocross (Right)"),
    QString("%0: Sign - Motocross (Left)"),
    QString("%0: Trees - Assorted Leaves"),
    QString("%0: Golden Crops & Pines"),
    QString("%0: Golden Crops & Green Tree"),
    QString("%0: Golden Crops & Tree No Leaves"),
    QString("%0: Tropical Bushes & Sea"),
    QString("%0: Sparse Palms & Sea"),
    QString("%0: Palms & Sea"),
    QString("%0: Palms, Huts & Sea"),
    QString("%0: Sign - Diving School & Sea"),
    QString("%0: Sea (Right)"),
    QString("%0: Sea & Trees"),
    QString("%0: Sea & European Trees"),
    QString("%0: Assorted Trees"),
    QString("%0: Crowd Stands 1"),
    QString("%0: Crowd Stands 2"),
    QString("%0: Crowd Stands 3"),
    QString("%0: Crowd Stands 4"),
    QString("%0: Crowd Stands 5"),
    QString("%0: Crowd Stands 6"),
    QString("%0: Sea & Palms"),
    QString("%0: Sign - Chicane Left"),
    QString("%0: Sign - Chicane Right"),
    QString("%0: Europen Trees (Right)"),
    QString("%0: Trees, Bushes, Trees"),
    QString("%0: Bushes & Clouds"),
    QString("%0: Green Crops"),
    QString("%0: Trees - European (Both Sides)"),
    QString("%0: Sea, Windsurfers & Palms"),
    QString("%0: Sea & Palms"),
    QString("%0: Towers, Trees, Huts"),
    QString("%0: Trees - European (Left)"),
    QString("%0: Trees - European (Right)"),
    QString("%0: Trees - European (Both Sides)"),
    QString("%0: Sign - Sharp Left"),
    QString("%0: Sea & Diving Sign"),
    QString("%0: Pebbles"),
    QString("%0: Pine Trees Spread"),
    QString("%0: Unused"),
    QString("%0: Trees - No Leaves"),
    QString("%0: Palms & Huts"),
    QString("%0: Palms & Bushes"),
    QString("%0: Tropical Bushes"),
    QString("%0: OutRun Deluxe Sign & Bushes"),
    QString("%0: Crops & Sea"),
    QString("%0: Crops & Motocross"),
    QString("%0: Ancient Statues"),
    QString("%0: Ancient Statues Back to Back"),
    QString("%0: Crops & Rock"),
    QString("%0: Vertical Rocks"),
    QString("%0: Rock Mix"),
    QString("%0: Rocks (Right)"),
    QString("%0: Rocks (Right)"),
    QString("%0: Pebbles & Shrubs"),
    QString("%0: Shrubs"),
    QString("%0: Rock Mix"),
    QString("%0: Rocks (Left)"),
    QString("%0: Rocks (Left)"),
    QString("%0: Trees - European & Crops"),
    QString("%0: Crops Mix"),
    QString("%0: Stunted Bushes"),
    QString("%0: Trees - European & Crops"),
    QString("%0: Sign - OutRun Deluxe"),
    QString("%0: Crops Mix"),
    QString("%0: Windmill (Right)"),
    QString("%0: Windmill (Left)"),
    QString("%0: Palms & Bushes (Right)"),
    QString("%0: Palms & Bushes (Left)"),
    QString("%0: Rocks (Left)"),
    QString("%0: Rocks (Left)"),
    QString("%0: Crowd Stands (Left)"),
    QString("%0: Sign - SEGA (Right)"),
    QString("%0: Tall Rocks Inverted (Right)"),
    QString("%0: Tall Rocks Inverted (Left)"),
    QString("%0: Tall Rocks (Right)"),
    QString("%0: Tall Rocks (Left)"),
    QString("%0: White Buildings"),
    QString("%0: Tall Rocks (Both Sides)"),
    QString("%0: Sign - SEGA (Left)"),
    QString("%0: Tall Rocks & Trees"),
    QString("%0: Tall Rocks & Crops"),
    QString("%0: Sea & White Buildings"),
    QString("%0: Sea & Sandy Rocks"),
    QString("%0: Sea & Sandy Rocks (Left)"),
    QString("%0: Cacti (Both Sides)"),
    QString("%0: Cacti (Both Sides)"),
    QString("%0: Cacti & Shrubs"),
    QString("%0: Sand Over Road (Left)"),
    QString("%0: Cacti (Both Sides)"),
    QString("%0: Twigs (Both Sides)"),
    QString("%0: Shrubs (Both Sides)"),
    QString("%0: Twigs (Both Sides)"),
    QString("%0: Tree Stumps (Both Sides)"),
    QString("%0: Sand Over Road (Both Sides)"),
    QString("%0: Stunted Rocks (Both Sides)"),
    QString("%0: Shrubs & Twigs (Both Sides)"),
    QString("%0: Ancient Statues"),
    QString("%0: Ancient Statues"),
    QString("%0: Ancient Statues"),
    QString("%0: Ancient Statues"),
    QString("%0: Small Stones"),
    QString("%0: Boat Houses & Palms"),
    QString("%0: Golden Crops & Trees"),
    QString("%0: Golden Crops & Twigs"),
    QString("%0: Golden Crops & Twigs"),
    QString("%0: Golden Crops & Twigs"),
    QString("%0: Ancient People 1"),
    QString("%0: Ancient People 2"),
    QString("%0: Ancient People 3"),
    QString("%0: Ancient People 4"),
    QString("%0: Ancient People & Goal"),
    QString("%0: Camels 1"),
    QString("%0: Camels & Goal"),
    QString("%0: Sand"),
    QString("%0: Crowd Stands & Goal"),
    QString("%0: Crowd Stands End"),
    QString("%0: Goal"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Left)"),
    QString("%0: Dark Pines (Right)"),
    QString("%0: Rocks & Debris"),
    QString("%0: Stones & Shrubs"),
    QString("%0: Golden Crops & Trees"),
    QString("%0: Turrets & Green Crops"),
    QString("%0: Sign - OutRun Deluxe (Right)"),
    QString("%0: Palms & Bushes (Two Lanes)"),
    QString("%0: Palms (Two Lanes)"),
    QString("%0: Palms & Oil 75 (Two Lanes)"),
};

#endif // OUTRUNLABELS_HPP
