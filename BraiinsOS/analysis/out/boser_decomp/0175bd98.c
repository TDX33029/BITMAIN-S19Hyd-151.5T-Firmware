// FUN_0175bd98 @ 0175bd98 size=172 calls_out=6 calls_in=2
// strings: 

void FUN_0175bd98(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = *param_1;
  iVar4 = 1;
  if (5 < uVar2) {
    iVar4 = uVar2 - 6;
  }
  if (iVar4 == 0) {
    FUN_0175bf08(param_1 + 2);
    return;
  }
  if (iVar4 != 1) {
    return;
  }
  if (uVar2 != 5) {
    FUN_0175c01c();
    return;
  }
  if ((char)param_1[0xf] == '\x03') {
    return;
  }
  if ((char)param_1[0xf] == '\x02') {
    FUN_0184f010();
    return;
  }
  FUN_01710c20();
  FUN_0175beb4(param_1 + 7);
  FUN_0177266c(param_1 + 1);
  if (param_1[0xe] + 1 < 2) {
    return;
  }
  piVar3 = (int *)(param_1[0xe] + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

