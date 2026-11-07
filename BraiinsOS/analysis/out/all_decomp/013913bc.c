// FUN_013913bc @ 013913bc size=816 calls_out=4 calls_in=4
// strings: 

void FUN_013913bc(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_28;
  int local_24;
  undefined *local_20;
  code *local_1c;
  
  local_28 = param_2;
  local_24 = param_1;
  if (*(int *)(param_1 + 0x20) == 1) {
    piVar2 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_0138e168(&local_28);
  uVar9 = *(uint *)(*(int *)(param_2 + 0x278) + 0x148);
  if ((int)uVar9 < 0) {
    local_1c = FUN_007883b8;
    local_20 = &DAT_00568468;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005970ba,&local_20,&DAT_01893ca0);
  }
  uVar8 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar3 = uVar9;
  if (uVar8 < uVar9) {
    uVar7 = uVar9 - uVar8;
    if (*(int *)(param_1 + 0x30) - uVar8 < uVar7) {
      FUN_013c4434(param_1 + 0x30,uVar8,uVar7,4,4);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x34) + *(uint *)(param_1 + 0x38) * 4);
      uVar3 = *(uint *)(param_1 + 0x38);
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x34) + uVar8 * 4);
      uVar3 = uVar8;
    }
    if (1 < uVar7) {
      iVar4 = ~uVar8 + uVar9;
      puVar6 = puVar5;
      do {
        puVar5 = puVar6 + 1;
        *puVar6 = 0;
        iVar4 = iVar4 + -1;
        puVar6 = puVar5;
      } while (iVar4 != 0);
      uVar3 = (uVar7 + uVar3) - 1;
    }
    uVar3 = uVar3 + 1;
    *puVar5 = 0;
  }
  uVar8 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x38) = uVar3;
  uVar3 = uVar9;
  if (uVar8 < uVar9) {
    uVar7 = uVar9 - uVar8;
    if (*(int *)(param_1 + 0x3c) - uVar8 < uVar7) {
      FUN_013c4434(param_1 + 0x3c,uVar8,uVar7,4,4);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x40) + *(uint *)(param_1 + 0x44) * 4);
      uVar3 = *(uint *)(param_1 + 0x44);
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x40) + uVar8 * 4);
      uVar3 = uVar8;
    }
    if (1 < uVar7) {
      iVar4 = ~uVar8 + uVar9;
      puVar6 = puVar5;
      do {
        puVar5 = puVar6 + 1;
        *puVar6 = 0;
        iVar4 = iVar4 + -1;
        puVar6 = puVar5;
      } while (iVar4 != 0);
      uVar3 = (uVar7 + uVar3) - 1;
    }
    uVar3 = uVar3 + 1;
    *puVar5 = 0;
  }
  uVar8 = *(uint *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar3 = uVar9;
  if (uVar8 < uVar9) {
    uVar7 = uVar9 - uVar8;
    if (*(int *)(param_1 + 0x4c) - uVar8 < uVar7) {
      FUN_013c4434(param_1 + 0x4c,uVar8,uVar7,4,4);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x50) + *(uint *)(param_1 + 0x54) * 4);
      uVar3 = *(uint *)(param_1 + 0x54);
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x50) + uVar8 * 4);
      uVar3 = uVar8;
    }
    if (1 < uVar7) {
      iVar4 = ~uVar8 + uVar9;
      puVar6 = puVar5;
      do {
        puVar5 = puVar6 + 1;
        *puVar6 = 0;
        iVar4 = iVar4 + -1;
        puVar6 = puVar5;
      } while (iVar4 != 0);
      uVar3 = (uVar7 + uVar3) - 1;
    }
    uVar3 = uVar3 + 1;
    *puVar5 = 0;
  }
  uVar8 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x54) = uVar3;
  if (uVar8 < uVar9) {
    uVar3 = uVar9 - uVar8;
    if (*(int *)(param_1 + 0x58) - uVar8 < uVar3) {
      FUN_013c4434(param_1 + 0x58,uVar8,uVar3,4,4);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) * 4);
      uVar7 = *(uint *)(param_1 + 0x60);
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x5c) + uVar8 * 4);
      uVar7 = uVar8;
    }
    if (1 < uVar3) {
      iVar4 = ~uVar8 + uVar9;
      puVar6 = puVar5;
      do {
        puVar5 = puVar6 + 1;
        *puVar6 = 0;
        iVar4 = iVar4 + -1;
        puVar6 = puVar5;
      } while (iVar4 != 0);
      uVar7 = (uVar3 + uVar7) - 1;
    }
    uVar9 = uVar7 + 1;
    *puVar5 = 0;
  }
  *(uint *)(param_1 + 0x60) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

