// FUN_015fa534 @ 015fa534 size=224 calls_out=2 calls_in=2
// strings: 

void FUN_015fa534(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  uVar4 = param_2[2];
  uVar1 = uVar4;
  if (uVar4 < 9) {
    uVar1 = 8;
  }
  iVar2 = param_1 + (uVar1 - 1 & 0xfffffff8);
  bVar6 = *(int *)(iVar2 + 8) != 0 || *(int *)(iVar2 + 0xc) != 0;
  iVar3 = 0;
  if (bVar6) {
    iVar3 = *(int *)(iVar2 + 0x18);
  }
  if (bVar6 && iVar3 != 0) {
    FUN_015d1230();
  }
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(iVar2 + 8 + (uVar4 - 1 & 0xffffffd0) + 0x30);
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar6 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar6);
    *piVar5 = iVar3 + -1;
    if (iVar3 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar1 = param_2[2];
    if (uVar1 < 9) {
      uVar1 = 8;
    }
    if ((uVar1 + (param_2[1] + uVar1 + 0x2f & -uVar1) + 7 & -uVar1) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

