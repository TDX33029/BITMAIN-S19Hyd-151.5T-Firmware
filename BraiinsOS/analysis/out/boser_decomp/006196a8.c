// FUN_006196a8 @ 006196a8 size=84 calls_out=1 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_006196a8(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
  }
  if ((uVar3 & 0xffffffc0) != 0x40) {
    return;
  }
  piVar2 = (int *)param_1[6];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[6],param_1[7]);
    }
  }
  FUN_00d38510(param_1 + 10);
  FUN_014b1410(param_1 + 0x28);
  thunk_FUN_01be4678(param_1);
  return;
}

