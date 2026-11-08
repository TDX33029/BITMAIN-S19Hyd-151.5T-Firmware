// FUN_00b8eee8 @ 00b8eee8 size=84 calls_out=1 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00b8eee8(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar4 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar4);
  *param_1 = uVar3 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
  }
  if ((uVar3 & 0xffffffc0) != 0x40) {
    return;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar4 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar4);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[6],param_1[7]);
    }
  }
  if (param_1[10] == 1) {
    bVar4 = param_1[0xc] != 0 || param_1[0xd] != 0;
    uVar3 = 0;
    if (bVar4) {
      uVar3 = param_1[0xe];
    }
    if (bVar4 && uVar3 != 0) {
      FUN_01443048(uVar3,param_1[0xf]);
    }
  }
  FUN_014b1410(param_1 + 0x10);
  thunk_FUN_01be4678(param_1);
  return;
}

