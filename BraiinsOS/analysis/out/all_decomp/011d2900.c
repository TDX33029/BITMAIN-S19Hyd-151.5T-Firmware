// FUN_011d2900 @ 011d2900 size=280 calls_out=1 calls_in=0
// strings: 

void FUN_011d2900(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

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
    iVar3 = 0x28;
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar3 = 0x14;
    }
  }
  else if (uVar2 == 1) {
    puVar5 = *(undefined4 **)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 1) {
      iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_5);
      iVar3 = 0x28;
      if (iVar1 == 0) goto LAB_011d29f8;
    }
    else if (iVar1 != 0) {
      puVar4 = puVar5 + iVar1 * 8;
      do {
        iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_5);
        if (iVar1 == 0) goto LAB_011d29b8;
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar4);
    }
LAB_011d29f4:
    iVar3 = 0x14;
  }
  else {
    puVar5 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    do {
      if (iVar1 == 0) goto LAB_011d29f4;
      iVar3 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_5);
      iVar1 = iVar1 + -0x20;
      puVar5 = puVar5 + 8;
    } while (iVar3 != 0);
LAB_011d29b8:
    iVar3 = 0x28;
  }
LAB_011d29f8:
  FUN_011d018c((int)param_1 + iVar3,param_2,param_3,param_4);
  return;
}

