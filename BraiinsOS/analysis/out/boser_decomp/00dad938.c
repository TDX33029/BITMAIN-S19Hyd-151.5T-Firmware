// FUN_00dad938 @ 00dad938 size=476 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dad938(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_r8;
  int iVar4;
  int iVar5;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38 [10];
  
  uVar1 = *param_2;
  pcVar2 = *(code **)(param_2[1] + 0xc);
  do {
    (*pcVar2)(&local_78,uVar1,param_3);
    iVar5 = 0;
    if ((local_78 & 7) == 4) {
      local_38[0] = 5;
      unaff_r8 = FUN_0183b9d4(local_38,local_70,local_6c);
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
      if (local_78 != 5) {
        if (local_78 != 6) {
          local_b0 = local_6c;
          uStack_ac = local_68;
          uStack_a8 = local_64;
          uStack_a4 = uStack_60;
          local_a0 = local_5c;
          uStack_9c = uStack_58;
          uStack_98 = uStack_54;
          uStack_94 = uStack_50;
          local_90 = local_4c;
          uStack_8c = uStack_48;
          uStack_88 = uStack_44;
          uStack_84 = uStack_40;
          uStack_80 = uStack_3c;
          uVar3 = local_78;
          unaff_r8 = local_70;
          iVar5 = local_74;
          if (local_78 != 6 || local_74 != 0) goto LAB_00dada04;
        }
        uVar1 = 6;
        goto LAB_00dadb04;
      }
    }
LAB_00dada04:
    if ((uVar3 & 7) == 5) {
      uVar1 = 5;
LAB_00dadb04:
      *param_1 = uVar1;
      param_1[1] = 0;
      return;
    }
    iVar4 = unaff_r8;
    if (uVar3 == 4) goto LAB_00dadac0;
    local_70 = unaff_r8;
    if (uVar3 == 3 && iVar5 == 0) {
LAB_00dada88:
      if (unaff_r8 == 0) {
        iVar4 = local_b0;
LAB_00dadac0:
        uVar1 = FUN_0183a75c(iVar4);
        uVar1 = FUN_00715ebc(uVar1,&DAT_01d1e854);
        param_1[1] = 0;
        *param_1 = 4;
        param_1[2] = uVar1;
        param_1[3] = &DAT_01c07620;
      }
      else {
        param_1[1] = 0;
        param_1[2] = unaff_r8;
        *param_1 = 3;
        param_1[3] = local_b0;
        param_1[4] = uStack_ac;
        param_1[5] = uStack_a8;
      }
      return;
    }
    local_6c = local_b0;
    local_68 = uStack_ac;
    local_64 = uStack_a8;
    uStack_60 = uStack_a4;
    local_5c = local_a0;
    uStack_58 = uStack_9c;
    uStack_54 = uStack_98;
    uStack_50 = uStack_94;
    local_4c = local_90;
    uStack_48 = uStack_8c;
    uStack_44 = uStack_88;
    uStack_40 = uStack_84;
    uStack_3c = uStack_80;
    local_78 = uVar3;
    local_74 = iVar5;
    if (uVar3 == 4 && iVar5 == 0) goto LAB_00dada88;
    FUN_0142e6dc(&local_78);
  } while( true );
}

