// FUN_00fc6900 @ 00fc6900 size=220 calls_out=3 calls_in=0
// strings: 

void FUN_00fc6900(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    piVar2 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_1[7]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[4],param_1[5]);
    return;
  default:
    return;
  case 3:
    FUN_01139b38(param_1[0x11],param_1[0x12]);
    break;
  case 4:
    FUN_01139b38(param_1[0x11],param_1[0x12]);
    break;
  case 5:
    FUN_01139b38(param_1[0x17],param_1[0x18]);
    FUN_019bb7e0(param_1[0x14],param_1[0x15]);
    FUN_019bb7e0(param_1[0x11],param_1[0x12]);
  }
  FUN_019bb7e0(param_1[0xd],param_1[0xe]);
  FUN_019bb7e0(param_1[9],param_1[10]);
  piVar2 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[8]);
    return;
  }
  return;
}

