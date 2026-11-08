// FUN_00a970d8 @ 00a970d8 size=116 calls_out=1 calls_in=5
// strings: 

void FUN_00a970d8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  uVar4 = param_2[2];
  uVar1 = uVar4;
  if (uVar4 < 5) {
    uVar1 = 4;
  }
  iVar3 = param_1 + (uVar1 - 1 & 0xfffffff8);
  bVar6 = *(int *)(iVar3 + 8) != 0;
  iVar2 = 0;
  if (bVar6) {
    iVar2 = *(int *)(iVar3 + 0x14);
  }
  if (bVar6 && iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,*(undefined4 *)(iVar3 + 0x18));
  }
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(iVar3 + 8 + (uVar4 - 1 & 0xffffffe4) + 0x1c);
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar6 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar6);
    *piVar5 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar1 = param_2[2];
    if (uVar1 < 5) {
      uVar1 = 4;
    }
    if ((uVar1 + (param_2[1] + uVar1 + 0x1b & -uVar1) + 7 & -uVar1) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

