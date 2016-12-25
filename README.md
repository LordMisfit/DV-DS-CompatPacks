DV-DS-CompatPacks ["Aetherius" - Compatiblity Patches for Various mapsets]

- Includes compatiability patches and PK3 files for the following wads/etc. Though keep in mind some of these are currently incomplete.
	- Deus Vult 1+2 Combo Pack (loaded as a subfolder)
	- Happy Time Circus [666] (loaded as a subfolder)
	- Happy Time Circus 2 (loaded as a subfolder)
	- "Doom Upstart Mapping Project: Episode 1" aka "DUMP" (loaded as a PK3 file)
	- "Doom Upstart Mapping Project: Episode 2" aka "DUMP-2" (loaded as a PK3 file)
	- Epic (loaded as a WAD file)
	- Epic 2 (loaded as a WAD file)
	- Going Down (loaded as both a WAD file and a subfolder)
	- Hell Ground (loaded as a subfolder)
	- Knee Deep in ZDoom (loaded as a subfolder)
	- LegenDoomLite v1.1 (loaded as a subfolder)
	- Resurgence (loaded as a subfolder) [you also need to download "resurge.wad" to run with it]
	- Scythe 2 (loaded as a subfolder) [you also need to download "scythe2.wad" to run with it]
	- Sitnatla [Heretic mapset by ArgonianLord] (loaded as a PK3 file)
	- Switcheroom (loaded as a PK3 file) 
	- The City of the Damned: Apocalypse (loaded as a subfolder)
	- Touhou Doom [incomplete] (loaded as a subfolder)
	- Unloved [incomplete] (loaded as a subfolder)
	- Valiant: Vaccinated Edition (loaded as a WAD file)
	- Void [incomplete] (loaded as a WAD file)

- 10xu.pk3 is included for extra 'fun' and can be loaded with any of these or even the non CompatPack games.


HOW TO INSTALL / RUN / ETC:

 - Important - Make absolutely sure you got DV-DS-ComboPack [@ https://github.com/LordMisfit/DV-DS-ComboPack ] working right before you do anything here. Refer to that repository's README.md file for more information.

 - Installing 1 - Make sure you unzip the entire "DV-DS-CompatPacks" folder inside the zip file to your designated GZDoom folder. Do not try to install the subfolders within into "DV-DS-ComboPacks" or into your main GZDoom folder, or you've done flapped it up and have to do everything up to this point on both repositories over again. :V
 - TL;DR: So basically make sure "DV-DS-ComboPacks" & "DV-DS-CompatPacks" are seperate subfolders in your main GZDoom folder. :P

 - Running - 1. There is no launcher packed for use with DV-DS-CompatPacks, you'll have to rely on command lines for now. My general method is to create a batch [.bat] file and name it something you'll remember. Remember you can right click a .bat file and "edit" them to change the command line used inside.

 - Running - 2. To run Happy Time Circus [666] w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/circus666" +hud_scale 0 exit" 

 - Running - 3. To run Happy Time Circus 2 w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/circus2" +hud_scale 0 exit" 

 - Running - 4. To run DUMP-1 w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-Compatpacks/DUMP-dvds.pk3" +hud_scale 0 exit"
 - Important: DUMP-1 & DUMP-2's "remove everything on level start" feature is removed in these versions due to the mod's RPG nature, and resetting everything per level would destroy the mod's main function gameplay wise.

 - Running - 5. To run DUMP-2 w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-Compatpacks/DUMP2-dvds.pk3" +hud_scale 0 exit" 
 - Important: DUMP-1 & DUMP-2's "remove everything on level start" feature is removed in these versions due to the mod's RPG nature, and resetting everything per level would destroy the mod's main function gameplay wise.

 - Running - 6. To run Epic [1] w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-Compatpacks/Epic" +hud_scale 0 exit" 

 - Running - 7. To run Epic 2 w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-Compatpacks/Epic2" +hud_scale 0 exit" 

 - Running - 8. To run Going Down w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-Compatpacks/GoingDown" +hud_scale 0 exit" 

 - Running - 9. To run Hell Ground w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/HellGround" +hud_scale 0 exit" 

 - Running - 10. To run KDIZD w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/KDIZD" +hud_scale 0 exit" 

 - Running - 11. To run Resurgence w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" resurge.wad "DV-DS-Compatpacks/Resurgence" +hud_scale 0 exit"
 - Note: DV-DS-CompatPacks does not come with resurge.wad by default, you need to download that yourself. The CompatPack for this mostly replaces the Afrits that the wad's DEH replaces the CommanderKeens with, with the Flying Balrog proper where they have dynamic stats, etc.

 - Running - 12. To run Scythe 2 w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" scythe2.wad "DV-DS-Compatpacks/Scythe2" +hud_scale 0 exit"
 - Note: DV-DS-CompatPacks does not come with scythe2.wad by default, you need to download that yourself. The CompatPack for this mostly replaces the Afrits that the wad's DEH replaces the CommanderKeens with, with the Flying Balrog proper where they have dynamic stats, etc.

 - Running - 13. To run Sitnalta w/ DV-DS Command line: "start gzdoom.exe -iwad heretic.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/Heretic" "DV-DS-CompatPacks/Sitnalta-DVDS.pk3" +hud_scale 0 exit"
 - Note: This is the only Heretic levelset CompatPack included at the moment, and again you can load the Hexen compatpack here as well if you want [see Running - 2.], though it doesn't actually matter in this mapset.

 - Running - 14. To run Switcheroom w/ DV-DS Command line: "start gzdoom.exe -iwad doom.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/Doom" "DV-DS-CompatPacks/Switcheroom" +hud_scale 0 exit" 
 - Note: This is an Ultimate Doom specfic mapset.

 - Running - 15. To run The City of the Damned: Apocalypse w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/TCOTD2" +hud_scale 0 exit" 
 - Note: It's only one level, and Flora is the only playable class in this one, but boy did this patch take a while to make, since I actually did a bunch of ACS modifying for the level itself and things don't exactly work 1 to 1 how they do in the original version, plus Flora will actually put her two cents in for all the notes and events that happen in this one. >.>

 - Running - 16. To run Unloved w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/Unloved" +hud_scale 0 exit" 
 - Note: This one is incomplete to a degree since some monsters aren't fully supported for stat changes/EXP yet. It'll be worked on more at some point in the future, so play at your own 'risk', I guess? :o

 - Running - 17. To run Valiant: Vaccinated Edition w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/valve-DVDS.wad" +hud_scale 0 exit" 

 - Running - 18. To run Void w/ DV-DS Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/void-DVDS.wad" +hud_scale 0 exit" 
 - Note: This one is incomplete, and I'm not sure if it'll be finished anytime soon. It's there as more of an attempt to edit it since I liked this particular map. :P

 - ABOUT LegenDoomLite: Can be added to any mode [or game type or even normal Doom1/2] essentially by adding "DV-DS-CompatPacks/LegenDoomLite" into the command line as the last file loaded. This one does NOT have to be loaded as a seperate mod from the above and is basically compatible with any of them and thensome. :V

 - Important: If you're playing in pure Doom 2 or Doom 1 mode [and or using a Doom 1 or 2 mapset], you'll get three "episodes" in the start up menu. The first two are the Deus Vult [1] and Deus Vult 2 "campaigns", and then a third that reflects the game you loaded up. That third episode is for playing Doom 1/2/Plutonia/TNT's actual levels, or the mapset you're loading with it. The DV episodes are named in their own name format and don't conflict with the other stuff, and thus are seperated in their own "episodes".

 - Running - 19. To run "Deus Vult 1+2" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/DeusVult" +hud_scale 0 exit" 

 - Important: You'll get two "episodes" in the start up menu. Deus Vult [1] and Deus Vult 2 "campaigns", and then a third that reflects the game you loaded up. The DV episodes are named in their own name format and don't conflict with the other stuff, and thus are seperated in their own "episodes".


