// FUN_01876ccc @ 01876ccc size=136 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01876ccc(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_98 [32];
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar5 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    do {
      local_98[iVar2 * 2] = 1;
      iVar3 = iVar2 + 1;
      local_98[iVar2 * 2 + 1] = 0;
      iVar2 = iVar3;
    } while (iVar3 != 0x10);
    uVar4 = 0;
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    if (param_3 != 0 && uVar1 != 0) {
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      if (*(int *)(param_1 + 4) == 0) {
        uVar5 = uVar1;
      }
      uVar4 = 1;
      *param_2 = *(int *)(param_1 + 4);
      param_2[1] = uVar5;
    }
  }
  return uVar4;
}

