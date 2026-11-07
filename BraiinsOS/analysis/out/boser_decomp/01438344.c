// FUN_01438344 @ 01438344 size=216 calls_out=4 calls_in=20
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

int FUN_01438344(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  while( true ) {
    piVar5 = (int *)param_1[1];
    iVar2 = *piVar5;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) break;
    DataMemoryBarrier(0xb);
    if ((int *)*param_1 == piVar5) {
      return 0;
    }
    FUN_01bea67c();
  }
  param_1[1] = iVar2;
  if (piVar5[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: (*tail).value.is_none()",0x29,&DAT_01d2d574);
  }
  iVar4 = *(int *)(iVar2 + 4);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: (*next).value.is_some()",0x29,&DAT_01d2d584);
  }
  *(undefined4 *)(iVar2 + 4) = 0;
  piVar3 = (int *)piVar5[1];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014210d0(piVar5[1]);
    }
  }
  thunk_FUN_01be4678(piVar5);
  return iVar4;
}

