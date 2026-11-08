// FUN_015fa154 @ 015fa154 size=208 calls_out=2 calls_in=3
// strings: 

void FUN_015fa154(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = param_2[2];
  uVar2 = uVar3;
  if (uVar3 < 5) {
    uVar2 = 4;
  }
  iVar4 = param_1 + (uVar2 - 1 & 0xfffffff8) + 8;
  FUN_015fa1fc(iVar4);
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(iVar4 + (uVar3 - 1 & 0xffffffd8) + 0x28);
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar2 = param_2[2];
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    if ((uVar2 + (param_2[1] + uVar2 + 0x27 & -uVar2) + 7 & -uVar2) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

