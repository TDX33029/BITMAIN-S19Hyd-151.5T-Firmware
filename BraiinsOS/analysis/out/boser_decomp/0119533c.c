// FUN_0119533c @ 0119533c size=172 calls_out=3 calls_in=2
// strings: 

void FUN_0119533c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0 && param_1[1] == 0) {
    return;
  }
  if ((char)param_1[0x1cf] == '\x03') {
    FUN_011953e8(param_1 + 0xce);
    return;
  }
  if ((char)param_1[0x1cf] != '\0') {
    return;
  }
  piVar2 = (int *)param_1[0xcc];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0xcc],param_1[0xcd]);
  }
  piVar2 = (int *)param_1[0x1ce];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x1ce]);
  }
  if (param_1[2] == 3 && param_1[3] == 0) {
    return;
  }
  iVar3 = param_1[0xc6];
  if (iVar3 != -0x80000000) {
    iVar4 = param_1[199];
    FUN_00b1e0e0(iVar4,param_1[200]);
    FUN_0132b958(iVar3,iVar4,4,0x18);
  }
  if (param_1[0xe] != 3 || param_1[0xf] != 0) {
    FUN_019bb7e0(param_1[0x5c],param_1[0x5d]);
  }
  FUN_00f7ba04(param_1 + 0x62);
  FUN_00a9581c(param_1 + 0xc9);
  return;
}

