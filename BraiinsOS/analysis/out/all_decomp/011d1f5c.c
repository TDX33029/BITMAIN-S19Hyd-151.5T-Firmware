// FUN_011d1f5c @ 011d1f5c size=436 calls_out=0 calls_in=0
// strings: 

uint FUN_011d1f5c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = *param_1;
  uVar3 = 1;
  if ((int)*(uint *)(iVar2 + 8) < 0) {
    uVar3 = *(uint *)(iVar2 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      return 1;
    }
  }
  else if (uVar3 == 1) {
    puVar5 = *(undefined4 **)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 1) {
      iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      if (iVar2 == 0) {
        return 1;
      }
    }
    else if (iVar2 != 0) {
      puVar4 = puVar5 + iVar2 * 8;
      do {
        iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
        if (iVar2 == 0) {
          return 1;
        }
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar4);
    }
  }
  else {
    puVar5 = *(undefined4 **)(iVar2 + 0x10);
    iVar2 = *(int *)(iVar2 + 0x14) << 5;
    while (iVar2 != 0) {
      iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      iVar2 = iVar2 + -0x20;
      puVar5 = puVar5 + 8;
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  iVar2 = param_1[5];
  uVar3 = 1;
  if ((int)*(uint *)(iVar2 + 8) < 0) {
    uVar3 = *(uint *)(iVar2 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
    return (uint)(*(int *)(iVar2 + 0xc) == 0);
  }
  if (uVar3 == 1) {
    puVar5 = *(undefined4 **)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x011d208c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      return uVar3;
    }
    if (iVar2 != 0) {
      puVar4 = puVar5 + iVar2 * 8;
      do {
        uVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
        if (uVar3 != 0) {
          puVar5 = puVar5 + 8;
        }
      } while (uVar3 != 0 && puVar5 != puVar4);
      return uVar3;
    }
  }
  else {
    puVar5 = *(undefined4 **)(iVar2 + 0x10);
    iVar2 = *(int *)(iVar2 + 0x14) << 5;
    while (iVar2 != 0) {
      iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      iVar2 = iVar2 + -0x20;
      puVar5 = puVar5 + 8;
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

