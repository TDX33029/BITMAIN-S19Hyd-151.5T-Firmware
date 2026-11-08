// FUN_01448d9c @ 01448d9c size=336 calls_out=4 calls_in=2
// strings: 

void FUN_01448d9c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int local_b8 [20];
  int local_68;
  int local_64;
  uint auStack_60 [18];
  
  uVar8 = 0x11;
  local_b8[1] = 0x11;
  FUN_01bed4e2(local_b8 + 2,param_2,0x44);
  FUN_014489c8(param_1,0x11);
  FUN_01ab1588();
  puVar7 = (uint *)(param_1 + 0x48);
  if (*puVar7 < 0x12) {
    iVar5 = param_1 + 4;
    puVar9 = puVar7;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    uVar8 = *puVar7;
    puVar9 = (uint *)(param_1 + 4);
  }
  uVar2 = *puVar9;
  local_b8[0] = 0;
  if (uVar2 < uVar8) {
    do {
      if (local_b8[0] == 0x11) {
        *puVar9 = uVar2 + 0x11;
        return;
      }
      *(int *)(iVar5 + uVar2 * 4 + local_b8[0] * 4) = (local_b8 + 2)[local_b8[0]];
      local_b8[0] = local_b8[0] + 1;
    } while ((uVar2 - uVar8) + local_b8[0] != 0);
    uVar2 = uVar8;
  }
  *puVar9 = uVar2;
  FUN_01bed4e2(&local_68,local_b8,0x4c);
  if (local_64 != local_68) {
    puVar9 = (uint *)(param_1 + 4);
    do {
      uVar2 = auStack_60[local_68];
      local_68 = local_68 + 1;
      uVar8 = *puVar7;
      if (uVar8 < 0x12) {
        uVar6 = 0x11;
        uVar1 = uVar8;
        puVar3 = puVar9;
        puVar4 = puVar7;
      }
      else {
        uVar1 = *(uint *)(param_1 + 4);
        puVar3 = *(uint **)(param_1 + 8);
        puVar4 = puVar9;
        uVar6 = uVar8;
      }
      if (uVar1 == uVar6) {
        FUN_01448a38(param_1);
        uVar1 = *(uint *)(param_1 + 4);
        puVar3 = *(uint **)(param_1 + 8);
        puVar4 = puVar9;
      }
      puVar3[uVar1] = uVar2;
      *puVar4 = *puVar4 + 1;
    } while (local_64 != local_68);
  }
  return;
}

