// FUN_015fac78 @ 015fac78 size=208 calls_out=2 calls_in=3
// strings: 

void FUN_015fac78(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = param_2[2];
  uVar2 = uVar4;
  if (uVar4 < 9) {
    uVar2 = 8;
  }
  iVar3 = param_1 + (uVar2 - 1 & 0xfffffff8) + 8;
  FUN_015faaec(iVar3);
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(iVar3 + (uVar4 - 1 & 0xffffffc0) + 0x40);
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + -1;
    if (iVar3 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar2 = param_2[2];
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    if ((uVar2 + (param_2[1] + uVar2 + 0x3f & -uVar2) + 7 & -uVar2) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

