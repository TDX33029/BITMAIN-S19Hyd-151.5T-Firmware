// FUN_00a97a68 @ 00a97a68 size=84 calls_out=0 calls_in=4
// strings: 

void FUN_00a97a68(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if ((code *)*param_2 != (code *)0x0) {
    uVar2 = param_2[2];
    uVar3 = uVar2 - 1;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    (*(code *)*param_2)(param_1 + (uVar2 - 1 & 0xfffffff8) + (uVar3 & 0xffffffcc) + 0x3c);
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar2 = param_2[2];
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    if ((uVar2 + (param_2[1] + uVar2 + 0x33 & -uVar2) + 7 & -uVar2) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

