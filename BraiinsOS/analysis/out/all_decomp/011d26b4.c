// FUN_011d26b4 @ 011d26b4 size=588 calls_out=0 calls_in=0
// strings: 

uint FUN_011d26b4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *param_1;
  uVar3 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar3 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
    if (*(int *)(iVar1 + 0xc) == 0) goto LAB_011d2830;
  }
  else {
    if (uVar3 == 1) {
      puVar5 = *(undefined4 **)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 1) {
        iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
        if (iVar1 == 0) goto LAB_011d2758;
      }
      else if (iVar1 != 0) {
        puVar4 = puVar5 + iVar1 * 8;
        do {
          iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
          if (iVar1 == 0) goto LAB_011d2758;
          puVar5 = puVar5 + 8;
        } while (puVar5 != puVar4);
      }
LAB_011d2830:
      iVar1 = param_1[5];
      uVar3 = 1;
      if ((int)*(uint *)(iVar1 + 8) < 0) {
        uVar3 = *(uint *)(iVar1 + 8) ^ 0x80000000;
      }
      if (uVar3 == 0) goto LAB_011d2878;
      if (uVar3 != 1) {
        puVar5 = *(undefined4 **)(iVar1 + 0x10);
        iVar1 = *(int *)(iVar1 + 0x14) << 5;
        do {
          if (iVar1 == 0) {
            return 1;
          }
          iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
          iVar1 = iVar1 + -0x20;
          puVar5 = puVar5 + 8;
        } while (iVar2 != 0);
        return 0;
      }
      puVar5 = *(undefined4 **)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 != 1) {
        if (iVar1 == 0) {
          return 1;
        }
        puVar4 = puVar5 + iVar1 * 8;
        do {
          uVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
          if (uVar3 != 0) {
            puVar5 = puVar5 + 8;
          }
        } while (uVar3 != 0 && puVar5 != puVar4);
        return uVar3;
      }
      goto LAB_011d2860;
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    do {
      if (iVar1 == 0) goto LAB_011d2830;
      iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar5 = puVar5 + 8;
    } while (iVar2 != 0);
  }
LAB_011d2758:
  iVar1 = param_1[10];
  uVar3 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar3 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
LAB_011d2878:
    return (uint)(*(int *)(iVar1 + 0xc) == 0);
  }
  if (uVar3 == 1) {
    puVar5 = *(undefined4 **)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 1) {
LAB_011d2860:
                    /* WARNING: Could not recover jumptable at 0x011d2874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      return uVar3;
    }
    if (iVar1 != 0) {
      puVar4 = puVar5 + iVar1 * 8;
      do {
        uVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
        if (uVar3 == 0) {
          return 0;
        }
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar4);
      return uVar3;
    }
  }
  else {
    puVar5 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    while (iVar1 != 0) {
      iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar5 = puVar5 + 8;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

