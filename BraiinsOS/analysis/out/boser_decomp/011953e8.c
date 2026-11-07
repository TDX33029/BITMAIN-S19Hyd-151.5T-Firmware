// FUN_011953e8 @ 011953e8 size=304 calls_out=8 calls_in=2
// strings: 

void FUN_011953e8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_1[0xfc] != '\0') {
    if ((char)param_1[0xfc] == '\x03') {
      FUN_00b9695c(param_1 + 0xd2);
      *(undefined1 *)((int)param_1 + 0x3f1) = 0;
      return;
    }
    return;
  }
  piVar2 = (int *)param_1[0xca];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0xca],param_1[0xcb]);
  }
  piVar2 = (int *)param_1[0xce];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0xce]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  iVar3 = param_1[0xc4];
  if (iVar3 != -0x80000000) {
    iVar4 = param_1[0xc5];
    FUN_00b1e0e0(iVar4,param_1[0xc6]);
    FUN_0132b958(iVar3,iVar4,4,0x18);
  }
  if (param_1[0xc] != 3 || param_1[0xd] != 0) {
    FUN_019bb7e0(param_1[0x5a],param_1[0x5b]);
  }
  FUN_00f7ba04(param_1 + 0x60);
  FUN_00a9581c(param_1 + 199);
  return;
}

