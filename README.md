# Animated Gloves Mod Template for Payday 3 UE4.27

### Remember to make sure you clear the Frames array every time you want to create a new mod.

## Variables explanation:
- **Frames** is an array of textures, this is the variable that will have the images (Textures) you want to use in order to create the animation.
- **Material Names** is a list of the materials the mod will be applied to. E.g, if you want to change only the "Enforcer" gloves, Material Names should only have one element with the value "MI_Assassin_gloves_01". Or if you want to change every "Enforcers" gloves you could create one element for every material for the "Enforcer" family of gloves or you could only use one element and set it to "MI_Assassin_gloves" and the animation will apply to any material that contains "MI_Assassin_gloves" in their names. [More in-depth explanation](#material-names-usage) (Refer to [Material List](#material-list) to know every material used by every pair of gloves)
- **Time** is the number of seconds to wait in order to get another frame from the Frames Array. E.g, for a 16 FPS animation the time should be 0.0625. ($\frac{1}{16}$).
- **Gloves Material** is the material instance that we want our animated material to be based on, for the best result the material selected here should be same or one of the variants of the materials present in the Material Names variable. **Note:** Even if you are using custom normal maps, this variables needs to have any glove material selected, since the material instance from the gloves have more params other than Base Color and Normal Map.

## Material list:
- **Enforcers**: MI_Assassin_gloves_01, MI_Assassin_gloves_var_01, MI_Assassin_gloves_var_02, MI_Assassin_gloves_var_03, MI_Assassin_gloves_var_04

- **Covert Latex**: MI_Black_surgical_gloves_01, MI_Black_surgical_gloves_Gold, MI_Black_surgical_gloves_var_02, MI_Black_surgical_gloves_var_03, MI_Black_surgical_gloves_var_04

- **Sleek Drivers**: MI_Classic_Racer_glove_01, MI_Classic_Racer_glove_02, MI_Classic_Racer_glove_03, MI_Classic_Racer_glove_04, MI_Classic_Racer_glove_05

- **Thicc Boys**: MI_GlovesClimbing_Var_01, MI_GlovesClimbing_Var_02, MI_GlovesClimbing_Var_03, MI_GlovesClimbing_Var_04

- **Default**: MI_Staring_gloves_blue_01 **AND** MI_Wolf_Staring_gloves_blue_01 [More in-depth explanation](#default-gloves-needing-both-material-names)

- **Fluer de lis**: MI_Fluer_de_lis_Glove

- **Roughnecks**: MI_Heavy_Duty_Glove_Var_01, MI_Heavy_Duty_Glove_Var_02, MI_Heavy_Duty_Glove_Var_03, MI_Heavy_Duty_Glove_Var_04

- **Preorder Bonus (Cotton Stripes)**: MI_Preorder_Bonus_Glove

- **High Torques**: MI_Reinfeld_Tactical_Glove_Var_01, MI_Reinfeld_Tactical_Glove_Var_02, MI_Reinfeld_Tactical_Glove_Var_03, MI_Reinfeld_Tactical_Glove_Var_04

- **Harsh Grabbers**: MI_Stryk_Tactical_glove_Var_01, MI_Stryk_Tactical_glove_Var_02, MI_Stryk_Tactical_glove_Var_03, MI_Stryk_Tactical_glove_Var_04

## In-depth explanation:
### Material Names usage:
Since Material Names is an array of String, the mod will use every element on this array and do a comparison between them and the material present on the gloves selected by the player in-game. You have many ways to use this array to suite the needs for your mod, now why "MI_Assassin_gloves_01" only affect one pair of gloves but "MI_Assassin_gloves" will affect multiple pairs? The mod's logic only checks if the material name of the Player's Gloves **contains** whatever is in the elements of the Material Names array, meaning that if you only have one element being "MI_Assassin_gloves" it will affect any gloves that the name of their material **contain** "MI_Assassin_gloves" in them.

### Default gloves needing BOTH material names:
Wolf's default gloves have a different material, so only using one of the names will leave some characters with the default gloves animated and others with the default blue gloves.