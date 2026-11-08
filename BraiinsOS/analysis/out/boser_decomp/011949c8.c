// FUN_011949c8 @ 011949c8 size=192 calls_out=4 calls_in=2
// strings: 

void FUN_011949c8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_1[0x3b] != '\0') {
    if ((char)param_1[0x3b] == '\x03') {
      FUN_00b9695c(param_1 + 0x15);
      *(undefined1 *)((int)param_1 + 0xed) = 0;
      return;
    }
    return;
  }
  piVar2 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0xc],param_1[0xd]);
  }
  piVar2 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0xe]);
  }
  if (*param_1 - 1U < 2) {
    return;
  }
  FUN_00f58dd0(param_1 + 1);
  return;
}

