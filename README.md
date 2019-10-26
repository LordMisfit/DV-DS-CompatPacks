DV-DS-CompatPacks ["Aetherius" - Compatiblity Patches for Various mapsets]

- Includes compatiability patches and PK3 files for the following wads/etc. Though keep in mind some of these are currently incomplete.
	- Bloodstain (loaded as a subfolder) [you also need to download "bstain.wad" to run with it]
	- Deus Vult 1+2 Combo Pack (loaded as a subfolder)
	- Going Down (loaded as both a WAD file and a subfolder)
	- Hellbound (loaded as a subfolder)
	- LegenDoomLite v1.1 (loaded as a subfolder)
	- Resurgence (loaded as a subfolder) [you also need to download "resurge.wad" to run with it]
	- Scythe 2 (loaded as a subfolder) [you also need to download "scythe2.wad" to run with it]
	- Sitnatla [Heretic mapset by ArgonianLord] (loaded as a subfolder)
	- Starship [Hexen mapset by Hamster Republic Games] (loaded as a subfolder)
	- Valiant: Vaccinated Edition (loaded as a WAD file)
	- Void [incomplete] (loaded as a WAD file)

- 10xu.pk3 is included for extra 'fun' and can be loaded with any of these or even the non CompatPack games.


HOW TO INSTALL / RUN / ETC:

 - Important - Make absolutely sure you got DV-DS-ComboPack [@ https://github.com/LordMisfit/DV-DS-ComboPack ] working right before you do anything here. Refer to that repository's README.md file for more information.

 - Installing 1 - Make sure you unzip the entire "DV-DS-CompatPacks" folder inside the zip file to your designated GZDoom folder. Do not try to install the subfolders within into "DV-DS-ComboPacks" or into your main GZDoom folder, or you've done flapped it up and have to do everything up to this point on both repositories over again. :V
 - TL;DR: So basically make sure "DV-DS-ComboPacks" & "DV-DS-CompatPacks" are seperate subfolders in your main GZDoom folder. :P

 - Running - 1. There is no launcher packed for use with DV-DS-CompatPacks, you'll have to rely on command lines for now. My general method is to create a batch [.bat] file and name it something you'll remember. Remember you can right click a .bat file and "edit" them to change the command line used inside.

 - Running - 2. To run BloodStain w/ "Aetherius" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" bstain.wad "DV-DS-Compatpacks/Bloodstain" +hud_scale 0 exit" 
 - Note: DV-DS-CompatPacks does not come with bstain.wad by default, you need to download that yourself. The CompatPack for this mostly replaces the Afrits that the wad's DEH replaces the CommanderKeens with, with the Flying Balrog proper where they have dynamic stats, etc.

 - Running - 3. To run Going Down w/ "Aetherius" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-Compatpacks/GoingDown" +hud_scale 0 exit" 

 - Running - 4. To run Resurgence w/ "Aetherius" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" resurge.wad "DV-DS-Compatpacks/Resurgence" +hud_scale 0 exit"
 - Note: DV-DS-CompatPacks does not come with resurge.wad by default, you need to download that yourself. The CompatPack for this mostly replaces the Afrits that the wad's DEH replaces the CommanderKeens with, with the Flying Balrog proper where they have dynamic stats, etc.

 - Running - 5. To run Scythe 2 w/ "Aetherius" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" scythe2.wad "DV-DS-Compatpacks/Scythe2" +hud_scale 0 exit"
 - Note: DV-DS-CompatPacks does not come with scythe2.wad by default, you need to download that yourself. The CompatPack for this mostly replaces the Afrits that the wad's DEH replaces the CommanderKeens with, with the Flying Balrog proper where they have dynamic stats, etc.

 - Running - 6. To run Sitnalta w/ "Aetherius" Command line: "start gzdoom.exe -iwad heretic.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/Heretic" "DV-DS-CompatPacks/Sitnalta-DVDS.pk3" +hud_scale 0 exit"
 - Note: This is the only Heretic levelset CompatPack included at the moment, and again you can load the Hexen compatpack here as well if you want [see Running - 2.], though it doesn't actually matter in this mapset.

 - Running - 7. To run Switcheroom w/ "Aetherius" Command line: "start gzdoom.exe -iwad doom.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/Doom" "DV-DS-CompatPacks/Switcheroom" +hud_scale 0 exit" 
 - Note: This is an Ultimate Doom specfic mapset.

 - Running - 8. To run Valiant: Vaccinated Edition w/ "Aetherius" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/valve-DVDS.wad" +hud_scale 0 exit" 

 - Running - 9. To run Void w/ "Aetherius" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/void-DVDS.wad" +hud_scale 0 exit" 
 - Note: This one is incomplete, and I'm not sure if it'll be finished anytime soon. It's there as more of an attempt to edit it since I liked this particular map. :P

 - Running - 20. To run "Deus Vult 1+2" Command line: "start gzdoom.exe -iwad doom2.wad -file "DV-DS-ComboPack" "DV-DS-CompatPacks/DeusVult" +hud_scale 0 exit" 
 - Note: You'll get two "episodes" in the start up menu. Deus Vult [1] and Deus Vult 2 "campaigns". The DV1 and DV2 maps are also named in their own name format and don't conflict with the other stuff, and thus are seperated in their own "episodes".

 - ABOUT LegenDoomLite: Can be added to any mode [or game type or even normal Doom1/2] essentially by adding "DV-DS-CompatPacks/LegenDoomLite" into the command line as the last file loaded. This one does NOT have to be loaded as a seperate mod from the above and is basically compatible with any of them and thensome. :V
