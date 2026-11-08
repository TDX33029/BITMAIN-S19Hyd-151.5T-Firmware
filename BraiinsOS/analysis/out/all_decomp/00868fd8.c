// FUN_00868fd8 @ 00868fd8 size=608 calls_out=9 calls_in=1
// strings: 

longlong FUN_00868fd8(double *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 extraout_s1;
  double dVar8;
  ulonglong uVar9;
  double local_30;
  undefined1 *local_28;
  code *local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    iVar5 = *(int *)(param_1 + 1);
    local_30 = *param_1;
    uVar2 = (uint)*(byte *)(iVar5 + 10);
    uVar7 = FUN_016d6168(SUB84((local_30 + *(double *)(&DAT_00566310 + uVar2 * 8)) /
                               *(double *)(&DAT_005659d0 + uVar2 * 8),0));
    dVar8 = (double)CONCAT44(extraout_s1,uVar7);
    if ((dVar8 < 0.0) || (255.0 < dVar8)) {
      local_24 = FUN_00f5cdb8;
      local_28 = (undefined1 *)&local_30;
      uVar2 = FUN_00829628(&DAT_00596ed4,&local_28);
      goto LAB_008691d8;
    }
    iVar5 = iVar5 + 0x10;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    *(int *)(param_1 + 7) = iVar5;
    cVar4 = (0.0 < dVar8) * (char)(longlong)dVar8;
    if (dVar8 < 0.0) {
      cVar4 = '\0';
    }
    if (255.0 < dVar8) {
      cVar4 = -1;
    }
    *(char *)((int)param_1 + 0x3c) = cVar4;
LAB_008690d4:
    *(char *)((int)param_1 + 0x3d) = cVar4;
    pcVar1 = (char *)FUN_016d38c8(1,1);
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,1);
    }
    *pcVar1 = cVar4;
    *(undefined4 *)((int)param_1 + 0x2c) = 1;
    *(char **)(param_1 + 6) = pcVar1;
    *(int *)(param_1 + 4) = iVar5;
    *(undefined4 *)((int)param_1 + 0x34) = 1;
    *(undefined1 *)((int)param_1 + 0x2a) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 **)((int)param_1 + 0x24) = (undefined4 *)((int)param_1 + 0x2c);
    unaff_r6 = param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018614fc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018614fc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x3e)) {
    case 0:
      cVar4 = *(char *)((int)param_1 + 0x3c);
      iVar5 = *(int *)(param_1 + 7);
      goto LAB_008690d4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886128);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886128);
    }
  }
  uVar9 = FUN_00869394((int)param_1 + 0xc,param_2);
  uVar2 = (uint)(uVar9 >> 0x20);
  if ((uVar9 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x3e) = 3;
    *(undefined1 *)(param_1 + 8) = 3;
    return CONCAT44(unaff_r6,1);
  }
  if (*(char *)((int)param_1 + 0x2a) == '\x03') {
    puVar6 = *(undefined4 **)(param_1 + 2);
    uVar7 = *(undefined4 *)((int)param_1 + 0xc);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar7);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    *(undefined1 *)((int)param_1 + 0x29) = 0;
  }
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
  }
  *(undefined1 *)((int)param_1 + 0x3e) = 1;
  FUN_010ef0b4((int)param_1 + 0xc);
LAB_008691d8:
  *(undefined1 *)(param_1 + 8) = 1;
  return (ulonglong)uVar2 << 0x20;
}

