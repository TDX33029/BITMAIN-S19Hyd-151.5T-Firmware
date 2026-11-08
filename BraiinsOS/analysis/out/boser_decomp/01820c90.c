// FUN_01820c90 @ 01820c90 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_01820c90(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *param_1;
  iVar4 = 1;
  if (5 < uVar3) {
    iVar4 = uVar3 - 6;
  }
  if (iVar4 == 0) {
    FUN_01820cdc(param_1 + 2);
    return;
  }
  if (iVar4 != 1) {
    return;
  }
  if (uVar3 != 5) {
    FUN_0181f34c();
    return;
  }
  if ((char)param_1[0xf] == '\x03') {
    return;
  }
  if ((char)param_1[0xf] == '\x02') {
    FUN_012d40d0(param_1[1],param_1[2]);
    if (*(char *)((int)param_1 + 0x19) == '\x02') {
      return;
    }
    FUN_014323b0(param_1 + 3);
    return;
  }
  FUN_01885c80();
  FUN_0181fd20(param_1 + 7);
  FUN_0177266c(param_1 + 1);
  if (param_1[0xe] + 1 < 2) {
    return;
  }
  piVar2 = (int *)(param_1[0xe] + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

