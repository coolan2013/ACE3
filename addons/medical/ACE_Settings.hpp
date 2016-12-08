class ACE_Settings {
    class GVAR(medicSetting) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_medicSetting_DisplayName);
        description = CSTRING(MedicalSettings_medicSetting_Description);
        value = 0;
        typeName = "SCALAR";
        values[] = {"Disabled", "Normal", "Advanced"};
    };
    class GVAR(increaseTrainingInLocations) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_increaseTrainingInLocations_DisplayName);
        description = CSTRING(MedicalSettings_increaseTrainingInLocations_Description);
        value = 0;
        typeName = "BOOL";
    };
    class GVAR(enableFor) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_enableFor_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_enableFor_Description);
        value = 1;
        typeName = "SCALAR";
        values[] = {"Players only", "Players and AI"};
    };
    class GVAR(bleedingCoefficient) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_bleedingCoefficient_DisplayName);
        description = CSTRING(MedicalSettings_bleedingCoefficient_Description);
        typeName = "SCALAR";
        value = 1;
    };
    class GVAR(painCoefficient) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_painCoefficient_DisplayName);
        description = CSTRING(MedicalSettings_painCoefficient_Description);
        typeName = "SCALAR";
        value = 1;
    };
    class GVAR(enableAdvancedWounds) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_enableAdvancedWounds_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_enableAdvancedWounds_Description);
        typeName = "BOOL";
        value = 1;
    };
    class GVAR(enableVehicleCrashes) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_enableVehicleCrashes_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_enableVehicleCrashes_Description);
        typeName = "BOOL";
        value = 1;
    };
    class GVAR(enableScreams) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_enableScreams_DisplayName);
        description = CSTRING(MedicalSettings_enableScreams_Description);
        typeName = "BOOL";
        value = 1;
    };
    class GVAR(playerDamageThreshold) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_playerDamageThreshold_DisplayName);
        description = CSTRING(MedicalSettings_playerDamageThreshold_Description);
        typeName = "SCALAR";
        value = 1.05;
    };
    class GVAR(AIDamageThreshold) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_AIDamageThreshold_DisplayName);
        description = CSTRING(MedicalSettings_AIDamageThreshold_Description);
        typeName = "SCALAR";
        value = 1.05;
    };
    class GVAR(enableUnconsciousnessAI) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_enableUnconsciousnessAI_DisplayName);
        description = CSTRING(MedicalSettings_enableUnconsciousnessAI_Description);
        value = 2;
        typeName = "SCALAR";
        values[] = {"Disabled", "50/50", "Enabled"};
    };
    class GVAR(remoteControlledAI) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_remoteControlledAI_DisplayName);
        description = CSTRING(MedicalSettings_remoteControlledAI_Description);
        typeName = "BOOL";
        value = 1;
    };
    class GVAR(enableRevive) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(ReviveSettings_enableRevive_DisplayName);
        description = CSTRING(ReviveSettings_enableRevive_Description);
        typeName = "SCALAR";
        value = 2;
        values[] = {"Disabled", "Players only", "Players and AI"};
    };
    class GVAR(maxReviveTime) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(ReviveSettings_maxReviveTime_DisplayName);
        description = CSTRING(ReviveSettings_maxReviveTime_Description);
        typeName = "SCALAR";
        value = 120;
    };
    class GVAR(amountOfReviveLives) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(ReviveSettings_amountOfReviveLives_DisplayName);
        description = CSTRING(ReviveSettings_amountOfReviveLives_Description);
        typeName = "SCALAR";
        value = -1;
    };
    class GVAR(allowDeadBodyMovement) {
        category = CSTRING(Category_Medical);
        typeName = "BOOL";
        value = 0;
    };
    class GVAR(medicSetting_basicEpi) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(BasicMedicalSettings_medicSetting_basicEpi_DisplayName);
        description = CSTRING(BasicMedicalSettings_medicSetting_basicEpi_Description);
        typeName = "SCALAR";
        value = 0;
        values[] = {"Anyone", "Medics only", "Doctors only"};
    };
    class GVAR(medicSetting_PAK) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_medicSetting_PAK_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_medicSetting_PAK_Description);
        typeName = "SCALAR";
        value = 0;
        values[] = {"Anyone", "Medics only", "Doctors only"};
    };
    class GVAR(medicSetting_SurgicalKit) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_medicSetting_SurgicalKit_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_medicSetting_SurgicalKit_Description);
        typeName = "SCALAR";
        value = 0;
        values[] = {"Anyone", "Medics only", "Doctors only"};
    };
    class GVAR(consumeItem_PAK) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_consumeItem_PAK_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_consumeItem_PAK_Description);
        typeName = "SCALAR";
        value = 1;
        values[] = {"No", "Yes"};
    };
    class GVAR(consumeItem_SurgicalKit) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_consumeItem_SurgicalKit_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_consumeItem_SurgicalKit_Description);
        typeName = "SCALAR";
        value = 1;
        values[] = {"No", "Yes"};
    };
    class GVAR(useLocation_basicEpi) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(BasicMedicalSettings_useLocation_basicEpi_DisplayName);
        description = CSTRING(BasicMedicalSettings_useLocation_basicEpi_Description);
        typeName = "SCALAR";
        value = 0;
        values[] = {CSTRING(AdvancedMedicalSettings_anywhere), CSTRING(AdvancedMedicalSettings_vehicle), CSTRING(AdvancedMedicalSettings_facility), CSTRING(AdvancedMedicalSettings_vehicleAndFacility), ECSTRING(common,Disabled)};
    };
    class GVAR(useLocation_PAK) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_useLocation_PAK_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_useLocation_PAK_Description);
        typeName = "SCALAR";
        value = 0;
        values[] = {CSTRING(AdvancedMedicalSettings_anywhere), CSTRING(AdvancedMedicalSettings_vehicle), CSTRING(AdvancedMedicalSettings_facility), CSTRING(AdvancedMedicalSettings_vehicleAndFacility), ECSTRING(common,Disabled)};
    };
    class GVAR(useLocation_SurgicalKit) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(AdvancedMedicalSettings_useLocation_SurgicalKit_DisplayName);
        description = CSTRING(AdvancedMedicalSettings_useLocation_SurgicalKit_Description);
        typeName = "SCALAR";
        value = 0;
        values[] = {CSTRING(AdvancedMedicalSettings_anywhere), CSTRING(AdvancedMedicalSettings_vehicle), CSTRING(AdvancedMedicalSettings_facility), CSTRING(AdvancedMedicalSettings_vehicleAndFacility), ECSTRING(common,Disabled)};
    };
    class GVAR(fullHealLocation_PAK) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_fullHealLocation_PAK_DisplayName);
        description = CSTRING(MedicalSettings_fullHealLocation_PAK_Description);
        typeName = "SCALAR";
        value = 3;
        values[] = {CSTRING(AdvancedMedicalSettings_anywhere), CSTRING(AdvancedMedicalSettings_vehicle), CSTRING(AdvancedMedicalSettings_facility), CSTRING(AdvancedMedicalSettings_vehicleAndFacility), ECSTRING(common,Disabled)};
    };
    class GVAR(fieldEffectiveness_PAK) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(MedicalSettings_fieldEffectiveness_PAK_DisplayName);
        description = CSTRING(MedicalSettings_fieldEffectiveness_PAK_Description);
        typeName = "SCALAR";
        value = 0.9;
    };
    class GVAR(painEffectType) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(painEffectType);
        typeName = "SCALAR";
        value = 0;
        values[] = {CSTRING(painEffect_Flash), CSTRING(painEffect_Chroma)};
        isClientSettable = 1;
    };
    class GVAR(allowUnconsciousAnimationOnTreatment) {
        category = CSTRING(Category_Medical);
        typeName = "BOOL";
        value = 0;
    };
    class GVAR(menuTypeStyle) {
        category = CSTRING(Category_Medical);
        displayName = CSTRING(menuTypeDisplay);
        description = CSTRING(menuTypeDescription);
        typeName = "SCALAR";
        value = 0;
        values[] = {CSTRING(useSelection), CSTRING(useRadial), "Disabled"};
        isClientSettable = 1;
    };
};
