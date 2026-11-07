// FUN_00b523a8 @ 00b523a8 size=380 calls_out=6 calls_in=0
// strings: 

void FUN_00b523a8(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_168 [80];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [80];
  int local_78;
  int local_74;
  undefined1 auStack_70 [80];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[5]) {
  case '\0':
    iVar2 = FUN_00b31650(*(int *)(*param_2 + 0x300) + 8);
    param_2[2] = iVar2;
    if (iVar2 == 0) {
      local_74 = 0;
      local_78 = 2;
      goto LAB_00b524d8;
    }
    iVar4 = iVar2 + 8;
    param_2[3] = iVar4;
    param_2[4] = 0;
    param_2[1] = iVar2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01870510);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01870510);
  case '\x03':
    if ((char)param_2[4] != '\0') {
      if ((char)param_2[4] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186f2e8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186f2e8);
    }
    iVar4 = param_2[3];
  }
  FUN_008ef468(&local_78,*(undefined4 *)(*(int *)(iVar4 + 0x3c4) + 8));
  FUN_016dd1aa(auStack_118,auStack_70,0x50);
  *(undefined1 *)(param_2 + 4) = 1;
  if (local_78 == 3 && local_74 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 5) = 3;
    return;
  }
  FUN_016dd1aa(auStack_168,auStack_118,0x50);
  piVar3 = (int *)param_2[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(param_2[1]);
  }
  FUN_016dd1aa(auStack_c8,auStack_168,0x50);
LAB_00b524d8:
  *param_1 = local_78;
  param_1[1] = local_74;
  FUN_016dd1aa(param_1 + 2,auStack_c8,0x50);
  *(undefined1 *)(param_2 + 5) = 1;
  return;
}

