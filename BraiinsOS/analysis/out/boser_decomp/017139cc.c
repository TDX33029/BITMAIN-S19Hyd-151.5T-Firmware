// FUN_017139cc @ 017139cc size=176 calls_out=5 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_017139cc(uint *param_1)

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
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da640(param_1[6]);
  }
  FUN_0171378c(param_1 + 10);
  FUN_014b1410(param_1 + 0x16);
  thunk_FUN_01be4678(param_1);
  return;
}

