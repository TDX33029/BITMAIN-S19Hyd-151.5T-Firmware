// FUN_00fb5cac @ 00fb5cac size=192 calls_out=4 calls_in=1
// strings: 

void FUN_00fb5cac(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar2 = *param_1 - 3;
  }
  if (iVar2 == 1) {
    FUN_01139b38(param_1[2],param_1[3]);
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  piVar3 = (int *)param_1[0x24];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182bec(param_1[0x24]);
  }
  piVar3 = (int *)param_1[0x25];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[0x25]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_00ebabdc(param_1);
  return;
}

