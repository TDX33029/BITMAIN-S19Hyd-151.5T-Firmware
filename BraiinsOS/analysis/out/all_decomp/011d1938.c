// FUN_011d1938 @ 011d1938 size=452 calls_out=0 calls_in=0
// strings: 

uint FUN_011d1938(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *param_1;
  uVar2 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar2 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar2 == 0) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      return 1;
    }
  }
  else if (uVar2 == 1) {
    iVar3 = *(int *)(iVar1 + 0x10);
    puVar5 = *(undefined4 **)(iVar1 + 0xc);
    if (iVar3 == 1) {
      iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      if (iVar1 != 0) {
        return 1;
      }
    }
    else {
      if (iVar3 == 0) {
        return 1;
      }
      puVar4 = puVar5 + iVar3 * 8;
      while (iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3), iVar1 != 0) {
        puVar5 = puVar5 + 8;
        if (puVar5 == puVar4) {
          return 1;
        }
      }
    }
  }
  else {
    puVar5 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    do {
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar5 = puVar5 + 8;
    } while (iVar3 != 0);
  }
  iVar1 = param_1[5];
  uVar2 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar2 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar2 == 0) {
    return (uint)(*(int *)(iVar1 + 0xc) == 0);
  }
  if (uVar2 == 1) {
    puVar5 = *(undefined4 **)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x011d1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      return uVar2;
    }
    if (iVar1 != 0) {
      puVar4 = puVar5 + iVar1 * 8;
      do {
        uVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
        if (uVar2 != 0) {
          puVar5 = puVar5 + 8;
        }
      } while (uVar2 != 0 && puVar5 != puVar4);
      return uVar2;
    }
  }
  else {
    puVar5 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    while (iVar1 != 0) {
      iVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar5 = puVar5 + 8;
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

