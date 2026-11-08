// FUN_01177254 @ 01177254 size=160 calls_out=1 calls_in=9
// strings: 

void FUN_01177254(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(param_1 + (param_2[2] - 1 & 0xfffffff8) + 8);
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar2 = param_2[2];
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    if ((param_2[1] + uVar2 + 7 & -uVar2) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

