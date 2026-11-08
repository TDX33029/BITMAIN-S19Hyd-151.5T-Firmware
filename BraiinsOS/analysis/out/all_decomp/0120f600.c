// FUN_0120f600 @ 0120f600 size=240 calls_out=0 calls_in=0
// strings: 

uint FUN_0120f600(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar3 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar3 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
    return *(int *)(iVar1 + 0xc) == 0 ^ 1;
  }
  if (uVar3 == 1) {
    puVar4 = *(undefined4 **)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 1) {
      uVar3 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
      return uVar3 ^ 1;
    }
    if (iVar1 != 0) {
      puVar5 = puVar4 + iVar1 * 8;
      do {
        uVar3 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
        if (uVar3 != 0) {
          puVar4 = puVar4 + 8;
        }
      } while (uVar3 != 0 && puVar4 != puVar5);
      return uVar3 ^ 1;
    }
  }
  else {
    puVar4 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    while (iVar1 != 0) {
      iVar2 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar4 = puVar4 + 8;
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

