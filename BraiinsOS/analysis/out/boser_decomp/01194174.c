// FUN_01194174 @ 01194174 size=188 calls_out=4 calls_in=2
// strings: 

void FUN_01194174(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_1[0x35] != '\0') {
    if ((char)param_1[0x35] == '\x03') {
      FUN_00b9695c(param_1 + 0xf);
      *(undefined1 *)((int)param_1 + 0xd5) = 0;
      return;
    }
    return;
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[6],param_1[7]);
  }
  piVar2 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[8]);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

