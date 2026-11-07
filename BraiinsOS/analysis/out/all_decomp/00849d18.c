// FUN_00849d18 @ 00849d18 size=200 calls_out=6 calls_in=0
// strings: BUG: munmap failed

void FUN_00849d18(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_14;
  
  iVar2 = FUN_016d6ac4(param_1[2],param_1[3]);
  if (iVar2 == -1) {
    local_14 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_14,&DAT_018aeab8,&DAT_018aeac8);
  }
  FUN_016dffb2(*param_1);
  piVar3 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089eebc(param_1[5]);
  }
  piVar3 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008d559c(param_1[6]);
    return;
  }
  return;
}

