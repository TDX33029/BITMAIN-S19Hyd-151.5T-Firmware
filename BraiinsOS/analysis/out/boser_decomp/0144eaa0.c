// FUN_0144eaa0 @ 0144eaa0 size=312 calls_out=4 calls_in=1
// strings: 

void FUN_0144eaa0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  local_54 = param_2[3];
  uStack_50 = param_2[4];
  local_4c = param_2[5];
  local_48 = param_2[6];
  FUN_0144ebd8(param_1,local_48 - local_4c);
  FUN_01ab1588();
  puVar9 = (uint *)(param_1 + 0xf0);
  uVar1 = *puVar9;
  if (uVar1 < 0x3c) {
    iVar7 = param_1 + 4;
    uVar3 = 0x3b;
    puVar8 = puVar9;
  }
  else {
    iVar7 = *(int *)(param_1 + 8);
    uVar3 = uVar1;
    uVar1 = *(uint *)(param_1 + 4);
    puVar8 = (uint *)(param_1 + 4);
  }
  if (uVar1 < uVar3) {
    do {
      puVar2 = (undefined1 *)FUN_0144e5e0(&local_60);
      if (puVar2 == &DAT_00110000) {
        *puVar8 = uVar1;
        return;
      }
      *(undefined1 **)(iVar7 + uVar1 * 4) = puVar2;
      uVar1 = uVar1 + 1;
    } while (uVar3 != uVar1);
    uVar1 = uVar3;
  }
  *puVar8 = uVar1;
  puVar8 = (uint *)(param_1 + 4);
  local_40 = local_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  local_34 = local_54;
  uStack_30 = uStack_50;
  iStack_2c = local_4c;
  iStack_28 = local_48;
  while (puVar2 = (undefined1 *)FUN_0144e5e0(&local_40), puVar2 != &DAT_00110000) {
    uVar1 = *puVar9;
    if (uVar1 < 0x3c) {
      uVar6 = 0x3b;
      uVar3 = uVar1;
      puVar4 = puVar8;
      puVar5 = puVar9;
    }
    else {
      uVar3 = *(uint *)(param_1 + 4);
      puVar4 = *(uint **)(param_1 + 8);
      puVar5 = puVar8;
      uVar6 = uVar1;
    }
    if (uVar3 == uVar6) {
      FUN_0144ec48(param_1);
      uVar3 = *(uint *)(param_1 + 4);
      puVar4 = *(uint **)(param_1 + 8);
      puVar5 = puVar8;
    }
    puVar4[uVar3] = (uint)puVar2;
    *puVar5 = *puVar5 + 1;
  }
  return;
}

