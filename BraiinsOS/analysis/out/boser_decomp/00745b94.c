// FUN_00745b94 @ 00745b94 size=184 calls_out=5 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00745b94(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar4 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
  }
  if ((uVar4 & 0xffffffc0) != 0x40) {
    return;
  }
  piVar2 = (int *)param_1[6];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[6],param_1[7]);
    }
  }
  FUN_011e7e68(param_1 + 10);
  FUN_014b1410(param_1 + 0x12);
  thunk_FUN_01be4678(param_1);
  return;
}

