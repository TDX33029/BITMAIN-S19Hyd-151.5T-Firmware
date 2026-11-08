// FUN_017efc18 @ 017efc18 size=568 calls_out=5 calls_in=0
// strings: 

void FUN_017efc18(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined *extraout_r1_02;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  undefined *extraout_r2_02;
  undefined *extraout_r2_03;
  undefined *extraout_r2_04;
  undefined *extraout_r3;
  undefined *extraout_r3_00;
  undefined *extraout_r3_01;
  undefined *extraout_r3_02;
  undefined *extraout_r3_03;
  undefined *extraout_r3_04;
  undefined *extraout_r3_05;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *local_68;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *local_38;
  undefined *local_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  
  puVar1 = *(uint **)(param_2 + 0x20);
  if (puVar1 != (uint *)0x0) {
    uVar6 = *puVar1;
    puVar7 = (undefined *)puVar1[1];
    *puVar1 = 2;
    if (uVar6 != 2) {
      if ((uVar6 & 1) == 0) {
        local_54 = puVar7;
        FUN_01431ec8(&local_50,param_2,*param_3);
        if (local_50 == (undefined *)0x2) {
LAB_017efd44:
          local_38 = local_50;
          local_34 = local_4c;
          puStack_30 = local_48;
          puStack_2c = puStack_44;
          puStack_28 = puStack_40;
          local_68 = (undefined *)0x0;
          local_64 = puVar7;
          piVar3 = (int *)FUN_014322c4(param_2);
          if (*piVar3 != 2) {
            FUN_01432304(piVar3 + 1);
          }
          *piVar3 = 0;
          piVar3[1] = (int)puVar7;
          local_68 = local_50;
          local_64 = local_4c;
          local_60 = local_48;
          local_5c = puStack_44;
          local_58 = puStack_40;
          goto LAB_017efc5c;
        }
        if (((uint)local_50 & 1) == 0) {
          iVar2 = FUN_014374f0(&local_54,param_3);
          if (iVar2 != 0) {
            local_38 = (undefined *)0x1;
            local_34 = puVar7;
            uVar8 = FUN_014322c4(param_2);
            piVar3 = (int *)uVar8;
            local_48 = extraout_r2_02;
            puStack_44 = extraout_r3_03;
            if (*piVar3 != 2) {
              FUN_01432304(piVar3 + 1);
              uVar8 = CONCAT44(extraout_r1_01,piVar3);
              local_48 = extraout_r2_03;
              puStack_44 = extraout_r3_04;
            }
            goto LAB_017efcf0;
          }
          local_68 = (undefined *)0x0;
        }
        else {
          if (local_4c != (undefined *)0x0) goto LAB_017efd44;
          local_60 = local_48;
          local_64 = (undefined *)0x0;
          local_68 = (undefined *)0x1;
        }
        ppuVar4 = &local_54;
      }
      else {
        local_50 = puVar7;
        iVar2 = FUN_014374f0(&local_50,param_3);
        if (iVar2 != 0) {
          local_38 = (undefined *)0x1;
          local_34 = puVar7;
          uVar8 = FUN_014322c4(param_2);
          piVar3 = (int *)uVar8;
          local_48 = extraout_r2_00;
          puStack_44 = extraout_r3_00;
          if (*piVar3 != 2) {
            FUN_01432304(piVar3 + 1);
            uVar8 = CONCAT44(extraout_r1_00,piVar3);
            local_48 = extraout_r2_01;
            puStack_44 = extraout_r3_01;
          }
LAB_017efcf0:
          local_4c = (undefined *)((ulonglong)uVar8 >> 0x20);
          *(undefined4 *)uVar8 = 1;
          ((undefined4 *)uVar8)[1] = puVar7;
          local_68 = (undefined *)0x2;
          goto LAB_017efc5c;
        }
        local_68 = (undefined *)0x0;
        ppuVar4 = &local_50;
      }
      FUN_01432304(ppuVar4);
      local_4c = extraout_r1_02;
      local_48 = extraout_r2_04;
      puStack_44 = extraout_r3_05;
      goto LAB_017efc5c;
    }
  }
  FUN_01431ec8(&local_68,param_2,*param_3);
  local_4c = extraout_r1;
  local_48 = extraout_r2;
  puStack_44 = extraout_r3;
LAB_017efc5c:
  if (local_68 == (undefined *)0x2) {
    *param_1 = 2;
  }
  else {
    if (((uint)local_68 & 1) == 0) {
      uVar5 = 0;
      local_60 = local_68;
      local_5c = local_4c;
      local_64 = local_48;
      local_58 = puStack_44;
    }
    else {
      uVar5 = 1;
      if (local_64 == (undefined *)0x0) {
        local_60 = (undefined *)FUN_017be3e0();
        local_64 = (undefined *)0x0;
        local_5c = &DAT_01d1c08c;
        local_58 = extraout_r3_02;
      }
    }
    param_1[1] = local_64;
    *param_1 = uVar5;
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = local_58;
  }
  return;
}

