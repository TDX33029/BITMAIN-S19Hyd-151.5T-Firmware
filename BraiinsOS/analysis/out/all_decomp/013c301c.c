// FUN_013c301c @ 013c301c size=768 calls_out=2 calls_in=1
// strings: Properties | PropertiesIInvalidInputAnchoredInvalidInputUnanchored | PropertiesIInvalidInputAnchoredInvalidInputUnanchored

undefined4 FUN_013c301c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_a4;
  int local_a0;
  undefined1 *local_9c;
  undefined1 local_95;
  undefined4 *local_94;
  undefined *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  int local_80;
  undefined *local_7c;
  int local_78;
  undefined *local_74;
  int local_70;
  undefined *local_6c;
  int local_68;
  undefined *local_64;
  int local_60;
  undefined *local_5c;
  int local_58;
  undefined *local_54;
  int local_50;
  undefined *local_4c;
  int local_48;
  undefined *local_44;
  int local_40;
  undefined *local_3c;
  int local_38;
  undefined *local_34;
  int local_30;
  undefined *local_2c;
  undefined4 **local_28;
  undefined *local_24;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  piVar3 = (int *)*param_1;
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,"Properties",10);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar4,"(",1);
      if (iVar1 == 0) {
        local_28 = &local_94;
        local_80 = *piVar3;
        local_30 = local_80 + 0x31;
        local_38 = local_80 + 0x10;
        local_40 = local_80 + 0x2c;
        local_48 = local_80 + 0x30;
        local_50 = local_80 + 0x28;
        local_58 = local_80 + 0x24;
        local_60 = local_80 + 0x20;
        local_68 = local_80 + 0x1c;
        local_70 = local_80 + 0x18;
        local_78 = local_80 + 8;
        local_94 = (undefined4 *)(local_80 + 0x32);
        local_24 = &DAT_01892e00;
        local_2c = &DAT_01892de0;
        local_34 = &DAT_01892dc0;
        local_3c = &DAT_01892df0;
        local_44 = &DAT_01892de0;
        local_4c = &DAT_01892dd0;
        local_54 = &DAT_01892dd0;
        local_5c = &DAT_01892dd0;
        local_64 = &DAT_01892dd0;
        local_6c = &DAT_01892dd0;
        local_74 = &DAT_01892dc0;
        local_7c = &DAT_01892dc0;
        iVar1 = FUN_00fb36b8(param_2,"PropertiesIInvalidInputAnchoredInvalidInputUnanchored",0xb,
                             &DAT_01892e10,0xc,&local_80,0xc);
        if (iVar1 == 0) {
          uVar4 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_013c32f8:
          uVar4 = (*pcVar2)(uVar4,&DAT_00418e07,1);
          return uVar4;
        }
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar4,"(\n",2);
      if (iVar1 == 0) {
        local_9c = &local_95;
        local_8c = param_2[2];
        local_88 = param_2[3];
        local_28 = &local_84;
        local_90 = &DAT_01880dc4;
        local_94 = &local_a4;
        local_80 = *piVar3;
        local_95 = 1;
        local_30 = local_80 + 0x31;
        local_38 = local_80 + 0x10;
        local_40 = local_80 + 0x2c;
        local_48 = local_80 + 0x30;
        local_50 = local_80 + 0x28;
        local_58 = local_80 + 0x24;
        local_60 = local_80 + 0x20;
        local_68 = local_80 + 0x1c;
        local_70 = local_80 + 0x18;
        local_78 = local_80 + 8;
        local_84 = (undefined4 *)(local_80 + 0x32);
        local_24 = &DAT_01892e00;
        local_2c = &DAT_01892de0;
        local_34 = &DAT_01892dc0;
        local_3c = &DAT_01892df0;
        local_44 = &DAT_01892de0;
        local_4c = &DAT_01892dd0;
        local_54 = &DAT_01892dd0;
        local_5c = &DAT_01892dd0;
        local_64 = &DAT_01892dd0;
        local_6c = &DAT_01892dd0;
        local_74 = &DAT_01892dc0;
        local_7c = &DAT_01892dc0;
        local_a4 = uVar4;
        local_a0 = iVar5;
        iVar1 = FUN_00fb36b8(&local_94,"PropertiesIInvalidInputAnchoredInvalidInputUnanchored",0xb,
                             &DAT_01892e10,0xc,&local_80,0xc);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_90 + 0xc))(local_94,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_013c32f8;
      }
    }
  }
  return 1;
}

