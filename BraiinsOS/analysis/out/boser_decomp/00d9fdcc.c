// FUN_00d9fdcc @ 00d9fdcc size=536 calls_out=9 calls_in=0
// strings: SetDefaultQuickRampingRequestDecrementHashrateTargetRequest | save_action | save_action | invalid tag value: 0

void FUN_00d9fdcc(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined1 auStack_b8 [92];
  int local_5c;
  int local_58;
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
  
  local_54 = &local_5c;
  local_58 = 0;
  local_5c = param_3;
  do {
    if (*(int *)(local_5c + 4) == 0) {
      local_c0 = 1;
      local_bc = local_58;
      goto LAB_00d9feb0;
    }
    FUN_00ef78d0(&local_48);
    if (local_48 == 1) {
      piVar4 = local_44;
      break;
    }
    local_50 = local_40;
    local_4c = iStack_3c;
    if (iStack_3c != 0) {
      puVar5 = &DAT_00591421;
      local_2c = &local_50;
LAB_00d9fef0:
      local_28 = FUN_012fd074;
      FUN_01a8da38(&local_48,puVar5,&local_2c);
      piVar4 = (int *)FUN_01aa428c(&local_48);
LAB_00d9ff0c:
      break;
    }
    local_38[0] = local_40 & 7;
    local_38[1] = 0;
    uVar6 = (local_40 ^ 4) & 7;
    if ((0xf3U >> uVar6 & 1) == 0) {
      puVar5 = &DAT_00596158;
      local_2c = local_38;
      goto LAB_00d9fef0;
    }
    uVar1 = local_40 >> 3;
    if (uVar1 == 0) {
      piVar4 = (int *)FUN_01aa0da0("invalid tag value: 0",0x14);
      goto LAB_00d9ff0c;
    }
    if (uVar1 == 1) {
      piVar2 = (int *)FUN_00ef7f88((&DAT_00571008)[uVar6],&local_58,&local_5c);
      piVar4 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        iVar7 = piVar2[2];
        if (iVar7 == *piVar2) {
          FUN_018fa978(piVar2);
        }
        puVar3 = (undefined4 *)(piVar2[1] + iVar7 * 0x10);
        *puVar3 = "SetDefaultQuickRampingRequestDecrementHashrateTargetRequest";
        puVar3[3] = 0xb;
        puVar3[1] = 0x1d;
        puVar3[2] = "save_action";
        piVar2[2] = iVar7 + 1;
        piVar4 = piVar2;
        break;
      }
    }
    else {
      piVar4 = (int *)FUN_00ef7b80((&DAT_00571008)[uVar6],uVar1,&local_54,100);
    }
  } while (piVar4 == (int *)0x0);
  FUN_01a70d98(&local_c8,piVar4);
  if (local_c8 == 3 && local_c4 == 0) {
LAB_00d9feb0:
    param_1[1] = 0;
    param_1[2] = local_c0;
    *param_1 = 3;
    param_1[3] = local_bc;
  }
  else {
    FUN_01bed4e2(param_1 + 4,auStack_b8,0x58);
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
  }
  return;
}

