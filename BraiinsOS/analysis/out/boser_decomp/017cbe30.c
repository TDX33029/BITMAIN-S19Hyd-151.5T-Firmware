// FUN_017cbe30 @ 017cbe30 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_017cbe30(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (1 < *param_1) {
    return;
  }
  FUN_0134aee0(param_1[2],param_1[3],4,8);
  FUN_0134aee0(param_1[5],param_1[6],4,4);
  FUN_0065f3f4(param_1 + 8);
  piVar2 = (int *)param_1[0xb];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[0xb],param_1[0xc]);
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
    FUN_018531c0(param_1[0xe],param_1[0xf]);
  }
  piVar2 = (int *)param_1[0x10];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[0x10],param_1[0x11]);
  }
  piVar2 = (int *)param_1[0x12];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[0x12],param_1[0x13]);
    return;
  }
  return;
}

