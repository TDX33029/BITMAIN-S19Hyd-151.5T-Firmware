// FUN_00d9fa74 @ 00d9fa74 size=792 calls_out=10 calls_in=0
// strings: DecrementPowerTargetRequest | power_target_decrementIncrementPowerTargetRequest | DecrementPowerTargetRequest | save_action | power_target_decrementIncrementPowerTargetRequest | save_action

void FUN_00d9fa74(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  int *local_d8;
  int local_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 auStack_c8 [72];
  int local_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  uint local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int *local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int *local_44;
  uint local_40;
  int iStack_3c;
  uint local_38 [3];
  uint *local_2c;
  code *local_28;
  
  local_54 = &local_74;
  local_6c = 0;
  local_70 = 0;
  local_60 = 0;
  local_74 = param_3;
  do {
    if (*(int *)(local_74 + 4) == 0) {
      local_80 = local_64;
      iStack_7c = local_60;
      iStack_78 = iStack_5c;
      piVar5 = local_68;
      if (local_70 != 2 || local_6c != 0) {
        local_d4 = local_64;
        iStack_d0 = local_60;
        iStack_cc = iStack_5c;
        local_dc = local_6c;
        local_e0 = local_70;
        local_d8 = local_68;
        goto LAB_00d9fbf0;
      }
      break;
    }
    FUN_00ef78d0(&local_48);
    if (local_48 == 1) {
      piVar5 = local_44;
      break;
    }
    local_50 = local_40;
    local_4c = iStack_3c;
    if (iStack_3c != 0) {
      puVar6 = &DAT_00591421;
      local_2c = &local_50;
LAB_00d9fc4c:
      local_28 = FUN_012fd074;
      FUN_01a8da38(&local_48,puVar6,&local_2c);
      piVar5 = (int *)FUN_01aa428c(&local_48);
LAB_00d9fc68:
      break;
    }
    local_38[0] = local_40 & 7;
    local_38[1] = 0;
    uVar8 = (local_40 ^ 4) & 7;
    if ((0xf3U >> uVar8 & 1) == 0) {
      puVar6 = &DAT_00596158;
      local_2c = local_38;
      goto LAB_00d9fc4c;
    }
    uVar1 = local_40 >> 3;
    if (uVar1 == 0) {
      piVar5 = (int *)FUN_01aa0da0("invalid tag value: 0",0x14);
      goto LAB_00d9fc68;
    }
    uVar2 = (&DAT_00571008)[uVar8];
    if (uVar1 == 1) {
      piVar3 = (int *)FUN_00ef7f88(uVar2,&local_60,&local_74);
      piVar5 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        iVar10 = piVar3[2];
        if (iVar10 == *piVar3) {
          FUN_018fa978(piVar3);
        }
        puVar4 = (undefined4 *)(piVar3[1] + iVar10 * 0x10);
        *puVar4 = "DecrementPowerTargetRequest";
        pcVar9 = "save_action";
        uVar7 = 0xb;
LAB_00d9fce4:
        puVar4[1] = 0x1b;
        puVar4[2] = pcVar9;
        puVar4[3] = uVar7;
        piVar3[2] = iVar10 + 1;
        piVar5 = piVar3;
        break;
      }
    }
    else if (uVar1 == 2) {
      if ((local_70 & 1) == 0) {
        local_68 = (int *)0x0;
        local_64 = 0;
        local_6c = 0;
        local_70 = 1;
      }
      piVar3 = (int *)FUN_00efc078(uVar2,&local_68,&local_54,100);
      piVar5 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        iVar10 = piVar3[2];
        if (iVar10 == *piVar3) {
          FUN_018fa978(piVar3);
        }
        puVar4 = (undefined4 *)(piVar3[1] + iVar10 * 0x10);
        *puVar4 = "DecrementPowerTargetRequest";
        pcVar9 = "power_target_decrementIncrementPowerTargetRequest";
        uVar7 = 0x16;
        goto LAB_00d9fce4;
      }
    }
    else {
      piVar5 = (int *)FUN_00ef7b80(uVar2,uVar1,&local_54,100);
    }
  } while (piVar5 == (int *)0x0);
  FUN_01a70d98(&local_e8,piVar5);
  if (local_e8 == 3 && local_e4 == 0) {
LAB_00d9fbf0:
    param_1[2] = local_e0;
    param_1[3] = local_dc;
    param_1[4] = (int)local_d8;
    param_1[5] = local_d4;
    param_1[6] = iStack_d0;
    param_1[7] = iStack_cc;
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(param_1 + 8,auStack_c8,0x48);
    param_1[2] = local_e0;
    param_1[3] = local_dc;
    param_1[4] = (int)local_d8;
    param_1[5] = local_d4;
    param_1[6] = iStack_d0;
    param_1[7] = iStack_cc;
    *param_1 = local_e8;
    param_1[1] = local_e4;
  }
  return;
}

