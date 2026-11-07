// FUN_00bbd420 @ 00bbd420 size=264 calls_out=6 calls_in=2
// strings: 

longlong FUN_00bbd420(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r5;
  uint uVar4;
  uint uVar5;
  int local_2c;
  int local_28;
  uint local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xd)) {
  case 0:
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[1] = *param_1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018770dc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018770dc,&switchD_00bbd43c::switchdataD_00bbd440,param_2);
  }
  FUN_00b23e50(&local_2c,param_1 + 1);
  if (local_2c == -0x80000000) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    return CONCAT44(unaff_r5,1);
  }
  FUN_00b216bc(param_1 + 1);
  if (local_24 != 0) {
    uVar4 = 0;
    do {
      piVar2 = *(int **)(local_28 + uVar4 * 4);
      uVar5 = uVar4 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(local_28 + uVar4 * 4));
      }
      uVar4 = uVar5;
    } while (uVar5 != local_24);
  }
  if (local_2c != 0) {
    thunk_FUN_016d3fb4(local_28);
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  return (ulonglong)local_24 << 0x20;
}

